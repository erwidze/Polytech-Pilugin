#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//Даны две переменные целого типа: A и B. Если их значения не равны, то присвоить каждой переменной большее из этих значений, а если равны, то присвоить переменным нулевые значения. Вывести новые значения переменных A и B.
{
	cout << "Input A and B (A and B are integer)" << endl;
	int A, B;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	if (A == B)
	{
		A = 0;
		B = 0;
	}
	else
	{
		if (A > B) B = A;
		else A = B;
	}
	cout << "new A = " << A << endl << "new B = " << B << endl;
}

void task2()//Даны три числа. Найти сумму двух наибольших из них
{
	cout << "Input three numbers" << endl;
	double A, B, C;
	cout << "A = ";
	cin >> A;
	cout << "B = ";
	cin >> B;
	cout << "C = ";
	cin >> C;
	if (A > B)
	{
		if (C > B)cout << "sum of two max numbers = " << C + A << endl;
		else cout << "sum of two max numbers = " << B + A << endl;
	}
	else
	{
		if (C > A)cout << "sum of two max numbers = " << C + B << endl;
		else cout << "sum of two max numbers = " << B + A << endl;
	}
}

void task3()//На плоскости расположены три точки: A, B, C. Определить, какая из двух последних точек (B или C) расположена ближе к A, и вывести эту точку и ее расстояние от точки A.
{
	cout << "Input coordinates of points A, B, C (x and y)" << endl;
	double Ax, Ay, Bx, By, Cx, Cy, AB, AC;
	cout << "A(x) = ";
	cin >> Ax;
	cout << "A(y) = ";
	cin >> Ay;
	cout << "B(x) = ";
	cin >> Bx;
	cout << "B(y) = ";
	cin >> By;
	cout << "C(x) = ";
	cin >> Cx;
	cout << "C(y) = ";
	cin >> Cy;
	AB = sqrt(((Bx - Ax) * (Bx - Ax)) + ((By - Ay) * (By - Ay)));
	AC = sqrt(((Cx - Ax) * (Cx - Ax)) + ((Cy - Ay) * (Cy - Ay)));
	if (AB > AC)
	{
		cout << "point C is closer to point A" << endl << "Distance = " << AC << endl;
	}
	else if (AB < AC)
	{
		cout << "point B is closer to point A" << endl << "Distance = " << AB << endl;
	}
	else
	{
		cout << "points B and C are equally close to point A" << endl << "Distance = " << AB << endl;
	}
}

void task4()//Даны координаты точки, не лежащей на координатных осях OX и OY. Определить номер координатной четверти, в которой находится данная точка
{
	cout << "Input coordinates of a point not laying on OX or OY" << endl;
	double X, Y;
	cout << "X = ";
	cin >> X;
	cout << "Y = ";
	cin >> Y;
	while (X == 0 || Y == 0)
	{
		cout << "Input is incorrect, try again" << endl;
		cout << "X = ";
		cin >> X;
		cout << "Y = ";
		cin >> Y;
	}
	if (X * Y > 0)
	{
		if (X > 0) cout << "Point is in a grid section number 1" << endl;
		else  cout << "Point is in a grid section number 3" << endl;
	}
	else
	{
		if (X > 0)  cout << "Point is in a grid section number 2" << endl;
		else  cout << "Point is in a grid section number 4" << endl;
	}
}

void task5()//Дано целое число. Вывести его строку-описание вида «отрицательное четное число», «нулевое число», «положительное нечетное число» и т. д.
{
	cout << "Input integer number" << endl;
	cout << "Number = ";
	int Num;
	cin >> Num;
	cout << "This number is ";
	if (Num == 0)
	{
		cout << "zero ";
	}
	else
	{
		if (Num > 0) cout << "positive,";
		else cout << "negative,";
		if (Num%2 == 0) cout << " even";
		else cout << " odd";
	}
	cout << " number." << endl;
}

void task6()//Дано целое число, лежащее в диапазоне 1–999. Вывести его строкуописание вида «четное двузначное число», «нечетное трехзначное число» и т. д.
{
	cout << "Input integer number in the diaposon of 1 - 999" << endl;
	int A;
	cout << "A = ";
	cin >> A;
	while (A>=1000 || A<1)
	{
		cout << "Input is incorrect, try again" << endl;
		cout << "A = ";
		cin >> A;
	}
	cout << "Number " << A << " is ";

	if (A % 2 == 0) cout << "even, ";
	else cout << "odd, ";

	if (A / 100 > 0) cout << "three-digit";
	else if (A / 10 >0) cout << "two-digit";
	else cout << "single-digit";

	cout << " number." << endl;
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
		cout << "do you wish to continue? (1/0)" << endl << "answer = ";
		cin >> answer;
		cout << endl;
	} while (answer == 1);
	return 0;
}