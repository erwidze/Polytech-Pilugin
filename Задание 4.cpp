#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
	cout << "Type in sides of Rectangle (a and b) " << endl; // Task 1
	float a, b, S, P;
	cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "S = " << S << endl << "P = " << P << endl << endl;

	float d, L; // Task 2
	cout << "Type in d " << endl;
	cin >> d;
	L = d * 3.14;
	cout << "L = " << L << endl << endl;

	cout << "Type in a and b" << endl; //Task 3
	cin >> a >> b; 
	cout << "(a+b)/2 = " << (a + b) / 2 << endl << endl;

	cout << "Type in a and b (a and b !=0)" << endl; //Task 4
	cin >> a >> b;
	a = a * a;
	b = b * b;
	cout << "a*a+b*b = " << a + b << endl;
	cout << "a*a-b*b = " << a - b << endl;
	cout << "a*a*b*b = " << a * b << endl;
	cout << "a*a/(b*b) = " << a / b << endl<<endl;

	cout << "Type in a and b (a and b !=0)" << endl; //Task 5
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	cout << "|a|+|b| = " << a + b << endl;
	cout << "|a|-|b| = " << a - b << endl;
	cout << "|a|*|b| = " << a * b << endl;
	cout << "|a|/|b| = " << a / b << endl << endl;

	return 0;
}
