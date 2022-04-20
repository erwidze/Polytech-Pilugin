#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//Дано вещественное число — цена 1 кг конфет. Вывести стоимость 0.1, 0.2, . . . , 1 кг конфет.
{
	cout << "Введите цену конфет" << endl;
	cout << "Цена конфет = ";
	float P;
	cin >> P;
	for (float A = 0.1; A < 1.1; A += 0.1)
	{
		cout <<" " << A << " кг конфет стоит " << A * P << " руб." << endl;
	}
}

void task2()//Дано целое число N (> 0). Найти произведение 1.1 · 1.2 · 1.3 · . . . (N сомножителей).
{
	float N, i = 0.1, r = 1;
	cout << "Введите целое число N (N>0)" << endl;
	cin >> N;

	while (i <= N)
	{
		r = r * i;
		i = i + 0.1;
	}
	cout << "Произведение N сомножителей = " << r << endl;
}

void task3()//Дано целое число N (> 0). Найти квадрат данного числа, используя для его вычисления следующую формулу: N2 = 1 + 3 + 5 + . . . + (2·N − 1). После добавления к сумме каждого слагаемого выводить текущее значение суммы
{
	float N, i = 0.1, r = 1;
	cout << "Введите целое число N (N>0)" << endl;
	cin >> N;

	r = 0;

	cout << "Нахождение квадрата числа по этапам..." << endl;

	for (int i = 1; i <= (2 * N - 1); i += 2)
	{
		r += i;
		cout << r << endl;
	}
}

void task4()//Дано вещественное число A и целое число N (> 0). Используя один цикл, найти сумму 1 + A + A2 + A3 + . . . + AN
{
	int A;

	float N, r = 1;
	cout << "Введите вещественное число A" << endl;
	cin >> A;
	cout << "Введите целое число N (N>0)" << endl;
	cin >> N;

	float A2 = 1;
	r = 1;

	for (int i = 2; i <= N; i++)
	{
		A2 = A2 * A;
		r = r + A2;
	}
	cout << "Сумма 1 + A + A^2 + A^3 + . . . + A^N = " << r << endl;

}

void task5()//Дано вещественное число A и целое число N (> 0). Используя один цикл, найти значение выражения 1 − A + A2 − A3 + . ..± AN . Условный оператор не использовать.

{
	int A;

	float N, r = 1;
	cout << "Введите вещественное число A" << endl;
	cin >> A;
	cout << "Введите целое число N (N>0)" << endl;
	cin >> N;

	r = 1;

	float Amin = 0, Apls = 0;

	for (int i = 1; i <= N; i += 2)
	{
		Amin += pow(A, i);
	}

	for (int i = 2; i <= N; i += 2)
	{
		Apls += pow(A, i);
	}


	cout << "1 - A + A^2 - A^3 + . . . +- A^N = " << (float)(r - Amin + Apls) << endl;

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