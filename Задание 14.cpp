#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//
{
	int A, B;

	cout << "Ââåäèòå öåëîå ïîëîæèòåëüíîå ÷èñëî A" << endl;
	cin >> A;
	cout << "Ââåäèòå öåëîå ïîëîæèòåëüíîå ÷èñëî B (B>A)" << endl;
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
	cout << "Ââåäèòå äëèíó îòðåçêà A" << endl;
	cin >> A;
	cout << "Ââåäèòå äëèíó îòðåçêà B (B<A)" << endl;
	cin >> B;

	while (A - B >= 0)
	{
		A = A - B;
	}

	cout << "Äëèíà íåçàíÿòîé ÷àñòè îòðåçêà A = " << A << endl;
}

void task3()//
{
	int N;

	cout << "Ââåäèòå öåëîå ÷èñëî N (N>1)" << endl;
	cin >> N;

	int K = 0;
	int sum = 0;

	while (sum <= N)
	{
		K++;
		sum = sum + K;
	}

	cout << "Íàèìåíüøåå èç öåëûõ ÷èñåë K, äëÿ êîòîðûõ ñóììà 1 + 2 + . . . + K áîëüøå èëè ðàâíà N = " << K << endl;
	cout << "Ñóììà = " << sum << endl;
}

void task4()//
{
	float P;
	int K = 0;
	float S = 1000;

	cout << "Ââåäèòå ïðîöåíò (P - âåùåñòâåííîå ÷èñëî, 0 < P < 25)" << endl;
	cin >> P;

	while (S <= 1100)
	{
		K++;
		S += S * P / 100;
	}
	cout << "Êîëè÷åñòâî ìåñÿöåâ = " << K << endl;
	cout << "Èòîãîâûé ðàçìåð âêëàäà = " << S << endl;
}

void task5()//
{
	int A, B;
	cout << "Ââåäèòå öåëîå ïîëîæèòåëüíîå ÷èñëî A" << endl;
	cin >> A;
	cout << "Ââåäèòå öåëîå ïîëîæèòåëüíîå ÷èñëî B" << endl;
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

	cout << "ÍÎÄ = " << (A + B) << endl;
}

void task6()//
{
	int K = 0;
	int N;
	cout << "Ââåäèòå öåëîå ÷èñëî N (N>1)" << endl;
	cin >> N;

	if (N == 0)
	{
		cout << "Ïîðÿäêîâûé íîìåð ÷èñëà Ôèáîíà÷÷è N = " << "1" << endl;
	}
	else if (N == 1)
	{
		cout << "Ïîðÿäêîâûé íîìåð ÷èñëà Ôèáîíà÷÷è N = " << "2,3" << endl;
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
		cout << "Ïîðÿäêîâûé íîìåð ÷èñëà Ôèáîíà÷÷è N = " << K + 1 << endl;
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
