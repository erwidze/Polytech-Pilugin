#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//Даны два целых числа: A, B. Проверить истинность высказывания: «Справедливы неравенства A > 2 и B ≤ 3»
{
	cout << "Input two integer numbers A and B" << endl;
	int A, B;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	if (A > 2 && B <= 3)
	{
		cout << "statement A > 2 and B <=3 is true" << endl;
	}
	else
	{
		cout << "statement A > 2 and B <=3 is false" << endl;
	}
}

void task2()//Даны три целых числа: A, B, C. Проверить истинность высказывания: «Справедливо двойное неравенство A < B < C».
{
	cout << "Input three integer numbers" << endl;
	int A, B, C;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B; 
	cout << "C = ";
	cin >> C;
	if (B > A && C > B) cout << "statement A < B < C is true" << endl;
	else cout << "statement A < B < C is false" << endl;

}

void task3()//Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».
{
	cout << "Input integer number A (A>0)" << endl;
	int A;
	cout << "A = ";
	cin >> A;
	while (A <= 0)
	{
		cout << "Input is incorrect, try again" << endl;
		cout << "A = ";
		cin >> A;
	}
	if (A % 2 == 0 && A / 100 == 0 && A / 10 > 0)cout << "statement A is even and that 10 <= A <= 99 is true" << endl;
	else cout << "statement A is even and that 10 <= A <= 99 is false" << endl;
}

void task4()//Дано трехзначное число. Проверить истинность высказывания: «Цифры данного числа образуют возрастающую или убывающую последовательность».
{
	cout << "Input A (100 <= A <= 999)" << endl;
	int A;
	cout << "A = ";
	cin >> A;
	while (A <= 99 || A >= 1000)
	{
		cout << "Input is incorrect, try again" << endl;
		cout << "A = ";
		cin >> A;
	}
	if ((A / 100 > (A / 10) % 10 && (A / 10) % 10 > A % 10) || (A / 100 < (A / 10) % 10 && (A / 10) % 10 < A % 10)) cout << "statement number A makes an increasing or decreasing sequence is true" << endl;
	else cout << "statement number A makes an increasing or decreasing sequence is false" << endl;
}

void task5()//Дано четырехзначное число. Проверить истинность высказывания: «Данное число читается одинаково слева направо и справа налево».
{
	cout << "Input A (1000 <= A <= 9999)" << endl;
	int A;
	cout << "A = ";
	cin >> A;
	while (A <= 999 || A >= 10000)
	{
		cout << "Input is incorrect, try again" << endl;
		cout << "A = ";
		cin >> A;
	}
	cout << A / 1000 << "   " << A % 10 << "   " << (A / 100) % 10 << "   " << (A % 100) / 10 << endl;
	if ((A/1000 == A%10) && ((A/100)%10 == (A%100)/10)) cout << "statement number A read backwards equals number A is true" << endl;
	else cout << "statement number A read backwards equals number A is false" << endl;
}

void task6()//
{
	cout << "Input sides of a triangle" << endl;
	int A, B, C;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;
	if (C * C == A * A + B * B || B * B == A * A + C * C || A * A == B * B + C * C) cout << " statement triangle ABC has 90 degree angle is true" << endl;
	else cout << " statement triangle ABC has 90 degree angle is false" << endl;
}

void task7()//Даны целые числа a, b, c. Проверить истинность высказывания: «Существует треугольник со сторонами a, b, c».
{
	cout << "Input sides of a triangle" << endl;
	int A, B, C;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;
	if (C < A+B && B < A+C && A < B+C) cout << "statement triangle ABC exists is true" << endl;
	else cout << "statement triangle ABC exists is false" << endl;
}

int main()
{

	int answer;
	do
	{
		cout << "choose a task (a number)" << endl;
		cin >> answer;
		if (answer == 1) task1();
		else if (answer == 2) task2();
		else if (answer == 3) task3();
		else if (answer == 4) task4();
		else if (answer == 5) task5();
		else if (answer == 6) task6();
		else if (answer == 7) task7();
		cout << "do you wish to continue? (1/0)" << endl << "answer = ";
		cin >> answer;
		cout << endl;
	} while (answer == 1);
	return 0;
}