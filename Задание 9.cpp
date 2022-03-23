#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//С начала суток прошло N секунд (N — целое). Найти количество секунд, прошедших с начала последней минуты.
{
	cout << "Input N (N is integer)" << endl << "N = ";
	int N;
	cin  >> N;
	cout << "number of seconds from the start of the last minute = " << N-((N/60)*60) << endl;
}

void task2()//Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник, . . . , 6 — суббота. Дано целое число K, лежащее в диапазоне 1–365. Определить номер дня недели для K-го дня года, если известно, что в этом году 1 января было понедельником.
{
	cout << "Input K (K is integer, 1 <= K <= 365)" << endl << "K = ";
	int K;
	cin >> K;
	while (K < 1 || K> 365)
	{
		cout << "Input is incorrect, try again" << endl << "K = ";
		cin >> K;
	}
	cout << "number of the week day is" << K%7 << endl;
}

void task3()//Дни недели пронумерованы следующим образом: 1 — понедельник, 2 — вторник, . . . , 6 — суббота, 7 — воскресенье. Дано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7. Определить номер дня недели для K-го дня года, если известно, что в этом году 1 января было днем недели с номером N
{
	cout << "Input K (K is integer, 1 <= K <= 365)" << endl << "K = ";
	int K;
	cin >> K;
	while (K < 1 || K> 365)
	{
		cout << "Input is incorrect, try again" << endl << "K = ";
		cin >> K;
	}
	cout << "Input nubmber of weekday on the first of Jan = N (N is integer and 1 <= N <= 7)" << endl << "N = ";
	int N;
	cin >> N;
	while (N < 1 || N > 7)
	{
		cout << "Input is incorrect, try again" << endl << "N = ";
		cin >> N;
	}
	cout << "weekday number of day number " << K << " is " << ((K + N - 2) % 7) + 1 << endl;
}

void task4()//Даны целые положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C (без наложений). Найти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника. 
{
	cout << "Input integer A, B, C (A, B, C > 0)" << endl;
	int A, B, C;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
	cout << "C = "; cin >> C;
	while (A < 1 || B < 1 || C < 1)
	{
		cout << "Input is incorrect, try again" << endl;
		cout << "A = "; cin >> A;
		cout << "B = "; cin >> B;
		cout << "C = "; cin >> C;
	}
	cout << "amount of squares with sides of C in rectangle AxB = " << (A / C) * (B / C) << endl;
	cout << "area not taken by squares = " << A*B - ((A / C) * (B / C) * C * C) << endl;
}

void task5()//Дан номер некоторого года (целое положительное число). Определить соответствующий ему номер столетия, учитывая, что, к примеру, началом 20 столетия был 1901 год
{
	cout << "Input year" << endl << "year = ";
	int K;
	cin >> K;
	while (K < 1)
	{
		cout << "Input is incorrect, try again" << endl << "year = ";
		cin >> K;
	}
	cout << "it is century number " << (K-1) / 100 +1 << endl;
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
		cout << "choose a task (a number)" << endl;
		cin >> answer;
		if (answer == 1) task1();
		else if (answer == 2) task2();
		else if (answer == 3) task3();
		else if (answer == 4) task4();
		else if (answer == 5) task5();
		else if (answer == 6) task6();
		cout << "do you wiish to continue? (1/0)" << endl << "answer = ";
		cin >> answer;
		cout << endl;
	} while (answer == 1);
	return 0;
}