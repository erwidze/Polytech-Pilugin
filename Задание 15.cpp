#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double PowerA3(double A, double B = 0)
{
	B = A * A * A;
	return B;

}

int Sign(double X)
{
	if (X < 0)
		return -1;
	else if (X > 0)
		return 1;
	else
		return 0;
}

double RingS(double R1, double R2)
{
	return 3.14 * (R1 * R1 - R2 * R2);
}

int Qarter(double X, double Y)
{
	if (X > 0 && Y > 0)
		cout << "Точка лежит в I координатной четверти" << endl;
	if (X < 0 && Y > 0)
		cout << "Точка лежит в II координатной четверти" << endl;
	if (X < 0 && Y < 0)
		cout << "Точка лежит в III координатной четверти" << endl;
	if (X > 0 && Y < 0)
		cout << "Точка лежит в IV координатной четверти" << endl;

	return 0;
}

double Fact2(int N)
{
	double a = 1;

	for (int i = 1; i <= N; i++)
	{
		if ((N % 2 == 0) && (i % 2 == 0))
			a = a * (double)i;
		if ((N % 2 != 0) && (i % 2 != 0))
			a = a * (double)i;
	}
	return a;
}

void task1()//
{
	double A;

	for (int i = 0; i < 5; i++)
	{

		cout << "Введите число:" << endl;
		cin >> A;
		cout << A << "^3 = " << PowerA3(A) << endl;
	}
}

void task2()//
{
	double A, B;
	cout << "Введите число A:" << endl;
	cin >> A;
	cout << "Введите число B:" << endl;
	cin >> B;

	cout << "Sign(A) + Sign(B) = " << Sign(A) + Sign(B) << endl;
}

void task3()//
{
	double R1, R2;

	for (int i = 0; i < 3; i++)
	{
		cout << "Введите радиус R1" << endl;
		cin >> R1;
		cout << "Введите радиус R2 (R2 < R1)" << endl;
		cin >> R2;
		cout << "Площадь кольца = " << RingS(R1, R2) << endl;
	}
}

void task4()//
{
	double X, Y;

	for (int i = 0; i < 3; i++)
	{
		cout << "Введите ненулевую координату X" << endl;
		cin >> X;
		cout << "Введите ненулевую координату Y" << endl;
		cin >> Y;

		Qarter(X, Y);

		cout << "\n";
	}
}

void task5()//
{
	int N;

	cout << "Введите N" << endl;
	cin >> N;
	cout << "Двойной факториал = " << Fact2(N) << endl;
}

void task6()//
{
	cout << "task 3" << endl;
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
