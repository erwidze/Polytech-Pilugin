#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//
{
	int N;
	cout << "������� ������ ������� N (N>0)" << endl;
	cin >> N;

	int* B = new int[N];

	cout << "������ ������� N, ���������� N ������ ������������� �������� �����:" << endl;

	for (int i = 0; i < N; i++)
	{
		B[i] = 1 + i * 2;
	}

	for (int i = 0; i < N; i++)
	{
		cout << B[i] << endl;
	}

	delete[] B;
}

void task2()//
{
	int B, A;
	int N;

	cout << "������� ������ ������� N (N>1)" << endl;
	cin >> N;

	cout << "������� ������ ���� �������������� ����������" << endl;
	cin >> B;

	cout << "������� ����������� �������������� ����������" << endl;
	cin >> A;

	int* M = new int[N];

	cout << "������ ������� N, ���������� N ������ ������ ������ ����������:" << endl;

	for (int i = 0; i < N; i++)
	{
		M[i] = B * pow(A, i);
	}

	for (int i = 0; i < N; i++)
	{
		cout << M[i] << endl;
	}

	delete[] M;
}

void task3()//
{
	int c,N,a;

	cout << "������� ������ ������� N (N>2)" << endl;
	cin >> N;
	cout << "������� ������ ������� ������� A" << endl;
	cin >> a;
	cout << "������� ������ ������� ������� B" << endl;
	cin >> c;

	int* M = new int[N];

	M[0] = a;
	M[1] = c;

	int sum;

	cout << "������������� ������ ������� N, ������ ������� �������� ����� A, ������ ����� B, � ������ ����������� ������� ����� ����� ���� ����������" << endl;

	for (int i = 2; i < N; i++)
	{
		sum = 0;

		for (int j = 0; j < i; j++)
		{
			sum = sum + M[j];
		}
		M[i] = sum;
	}

	for (int i = 0; i < N; i++)
	{
		cout << M[i] << endl;
	}

	delete[] M;

}

void task4()//
{
	int N;
	cout << "������� ������ ������� N" << endl;
	cin >> N;

	int* M = new int[N];

	for (int i = 0; i < N; i++)
	{
		M[i] = rand() % 90 + 10;
	}

	cout << "����� �������" << endl;

	for (int i = 0; i < N; i++)
	{
		cout << M[i] << endl;
	}

	cout << "��������������" << endl;


	for (int i = 0; i < N / 2; i++)
	{
		cout << M[i] << endl;
		cout << M[N - 1 - i] << endl;

	}

	if (N % 2 != 0)
		cout << M[N / 2] << endl;
	delete[] M;
}

void task5()//
{
	int N;
	cout << "������� ������ ������� N" << endl;
	cin >> N;

	int* M = new int[N];

	cout << "����� �������" << endl;

	for (int i = 0; i <= N; i++)
	{
		M[i] = rand() % 90 + 10;
		cout << M[i] << endl;

	}

	cout << endl;

	cout << "�������� � ��������� �������� � ������� ����������� �������" << endl;

	for (int i = 1; i < N; i += 2)
	{
		cout << i << "- " << M[i] << endl;
	}

	cout << "�������� � ������� �������� � ������� �������� �������" << endl;

	for (int i = N - (N % 2); i >= 0; i -= 2)
	{
		cout << i << "- " << M[i] << endl;
	}

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