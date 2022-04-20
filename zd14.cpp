#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//
{
	int A, B;

	cout << "Введите целое положительное число A" << endl;
	cin >> A;
	cout << "Введите целое положительное число B (B>A)" << endl;
	cin >> B;

	for (int i = B - 1; i > A; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i << " ";
		}
		cout << "\n";
	}
}

void task2()//
{
	int A, B;
	cout << "Введите длину отрезка A" << endl;
	cin >> A;
	cout << "Введите длину отрезка B (B<A)" << endl;
	cin >> B;

	while (A - B >= 0)
	{
		A = A - B;
	}

	cout << "Длина незанятой части отрезка A = " << A << endl;
}

void task3()//
{
	int N;

	cout << "Введите целое число N (N>1)" << endl;
	cin >> N;

	int K = 0;
	int sum = 0;

	while (sum <= N)
	{
		K++;
		sum = sum + K;
	}

	cout << "Наименьшее из целых чисел K, для которых сумма 1 + 2 + . . . + K больше или равна N = " << K << endl;
	cout << "Сумма = " << sum << endl;
}

void task4()//
{
	float P;
	int K = 0;
	float S = 1000;

	cout << "Введите процент (P - вещественное число, 0 < P < 25)" << endl;
	cin >> P;

	while (S <= 1100)
	{
		K++;
		S += S * P / 100;
	}
	cout << "Количество месяцев = " << K << endl;
	cout << "Итоговый размер вклада = " << S << endl;
}

void task5()//
{
	int A, B;
	cout << "Введите целое положительное число A" << endl;
	cin >> A;
	cout << "Введите целое положительное число B" << endl;
	cin >> B;

	while (A != 0 && B != 0)
	{
		if (A > B)
		{
			A = A % B;
		}
		else
		{
			B = B % A;
		}
	}

	cout << "НОД = " << (A + B) << endl;
}

void task6()//
{
	int K = 0;
	int N;
	cout << "Введите целое число N (N>1)" << endl;
	cin >> N;

	if (N == 0)
	{
		cout << "Порядковый номер числа Фибоначчи N = " << "1" << endl;
	}
	else if (N == 1)
	{
		cout << "Порядковый номер числа Фибоначчи N = " << "2,3" << endl;
	}
	else
	{
		int f1 = 1, f2 = 1, f = 0;
		K = 2;
		while (f < N)
		{
			K++;
			f = f2 + f1;
			f2 = f1;
			f1 = f;
		}
		cout << "Порядковый номер числа Фибоначчи N = " << K + 1 << endl;
	}

}

int main()
{

	setlocale(LC_ALL, "Russian");
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
		cout << "do you wish to continue? (1/0)" << endl << "answer = ";
		cin >> answer;
		cout << endl;
	} while (answer == 1);
	return 0;
}