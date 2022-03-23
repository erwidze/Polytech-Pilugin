#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//1. Дан размер файла в байтах. Найти количество полных килобайтов, которые занимает данный файл
{
	cout << "input bite size" << endl;
	int a;
	cin >> a;
	cout << a << " bytes = full "  << a / 1024 << " kilobytes" << endl;
}

void task2()//2. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти количество отрезков B, размещенных на отрезке A.
{
	cout << "input A and B (A > B > 0)" << endl << "A = ";
	int A, B;
	cin >> A;
	cout << "B = ";
	cin >> B;
	while (B >= A || B <= 0)
	{
		cout << "Input is incorrect, try again" << endl << "A = ";
		cin >> A;
		cout << "B = ";
		cin >> B;
	}
	cout << "there are " << A / B << " full B lengths in A" << endl;

}

void task3()//3. Даны целые положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B (без наложений). Найти длину незанятой части отрезка A.
{
	cout << "input A and B (A > B > 0)" << endl << "A = ";
	int A, B;
	cin >> A;
	cout << "B = ";
	cin >> B;
	while (B >= A || B <= 0)
	{
		cout << "Input is incorrect, try again" << endl << "A = ";
		cin >> A;
		cout << "B = ";
		cin >> B;
	}
	cout << "there is a " << A % B << " in a remainder of A/B " << endl;
}

void task4()//Дано двузначное число. Вывести число, полученное при перестановке цифр исходного числа.
{
	cout << "Input A (9 < A <= 99)" << endl << "A = ";
	int A;
	cin >> A;
	while (A <= 9 || A >= 99)
	{
		cout << "Input is incorrect, try again" << endl << "A = ";
		cin >> A;
	}
	cout << A << " backwards is " << (A % 10) * 10 + A / 10 << endl;
}

void task5()//Дано трехзначное число. В нем зачеркнули первую слева цифру и приписали ее справа. Вывести полученное число.
{
	cout << "Input A (99 < A <= 999)" << endl << "A = ";
	int A;
	cin >> A;
	while (A <= 99 || A >= 999)
	{
		cout << "Input is incorrect, try again" << endl << "A = ";
		cin >> A;
	}
	cout << A << " with first number in the back is " << (A % 100) * 10 + A / 100 << endl;
}

void task6()//
{
	cout << "task 3" << endl;
}

int main()
{

	int answer;
	do 
	{
		cout << "choose a task (a number)" << endl << "task = ";
		cin >> answer;
		if (answer == 1) task1();
		else if (answer == 2) task2();
		else if (answer == 3) task3();
		else if (answer == 4) task4();
		else if (answer == 5) task5();
		else if (answer == 6) task6();
		cout << "do you wish to continue? (1/0)" << endl << "answer = ";
		cin >> answer;
		cout << endl;
	} while (answer == 1);
	return 0;
}