#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{


	float x1, x2, x3, y1, y2, y3, L1, L2, L3, S, P;

	cout << "type in (x1, y1) and (x2, y2)" << endl;//1
	cin >> x1 >> y1 >> x2 >> y2;
	L1 = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	cout << "L = " << L1 << endl;

	cout << "type in A, B, C" << endl;//2
	cin >> x1 >> x2 >> x3;
	L1 = abs(x1 - x2);
	L2 = abs(x3 - x2);
	cout << "AC = " << L1 << endl << "BC = " << L2 << endl << "AC + BC = " << L1+L2 << endl;

	cout << "type in A, B, C" << endl;//3
	cin >> x1 >> x2 >> x3;
	L1 = abs(x1 - x3);
	L2 = abs(x3 - x2);
	cout << "AC * BC = " << L1 * L2 << endl;

	cout << "type in (x1, y1) and (x2, y2)" << endl;//4
	cin >> x1 >> y1 >> x2 >> y2;
	L1 = abs(x1 - x2);
	L2 = abs(y1 - y2);
	S = L1 * L2;
	P = (L1 + L2) * 2;
	cout << "P = " << P << endl << "S = " << S << endl; 

	cout << "type in (x1, y1), (x2, y2) and (x3, y3)" << endl;//5
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	L1 = sqrt(pow(abs(x1 - x2), 2) + pow(abs(y1 - y2), 2));
	L2 = sqrt(pow(abs(x2 - x3), 2) + pow(abs(y2 - y3), 2));
	L3 = sqrt(pow(abs(x1 - x3), 2) + pow(abs(y1 - y3), 2));
	P = L1 + L2 + L3;
	S = sqrt(P / 2 * (P / 2 - L1) * (P / 2 - L2) * (P / 2 - L3));
	cout << "P = " << P << endl << "S = " << S << endl; 
	

	return 0;
}