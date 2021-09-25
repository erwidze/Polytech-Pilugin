#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
	cout << "Type in a and b " << endl;
	int a, b, S, P;
	cin >> a >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "S = " << S << endl << "P = " << P;
	return 0;
}