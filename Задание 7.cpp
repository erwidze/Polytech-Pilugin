#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;
int main()
{
	// задание 1 - Дано значение угла α в градусах (0 < a < 360). Определить значение этого же угла в радианах, учитывая, что 180◦ = π радианов.
	double a,pi; // Оюозначаем переменную a, pi
	cout << "Type in a in deegrees (0 < a < 360) " << endl;
	cin >> a; // вводим a
	pi = 3.1415926;
	while (a <= 0 || a>=360)
	{
		cout << "input is incorrect, please input a again" << endl;
		cin >> a;
	}
	cout << "a in radians = " << (a / 180) * pi << endl << endl; // выводим a

	// задание 2 - Дано значение угла α в радианах (0 < α < 2·π). Определить значение этого же угла в градусах, учитывая, что 180◦ = π радианов
	cout << "Type in a in deegrees (0 < a < 2*pi) " << endl;
	cin >> a;
	while (a<=0 || a>=2*pi)
	{
		cout << "input is incorrect, please input a again" << endl;
		cin >> a;
	}
	cout << "a in degrees = " << (a * 180) / pi << endl << endl;

	// задание 3 - Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.Известно, что X кг конфет стоит A рублей. Определить, сколько стоит 1 кг и Y кг этих же конфет.
	double X, Y;
	cout << "X kg of sweets costs A rubles, Y kg and 1 kg = ? " << endl;
	cout << "X = "; 
	cin >> X;
	cout << "A = "; 
	cin >> a; 
	cout << "Y = "; 
	cin >> Y; 
	cout << "1 kg of sweets costs " << a / X << " rubles" << endl;
	cout << Y << " kg of sweets costs " << a / X * Y << " rubles" << endl << endl;

	// задание 4 - Скорость первого автомобиля V1 км/ч, второго — V2 км/ч, расстояние между ними S км. Определить расстояние между ними через T часов, если автомобили удаляются друг от друга. 
	cout << "there are two autos with velocities V1 and V2 (km/h), there is a distance of S (km) between them, in time of T (h), what distance will be there between them?" << endl;
	cout << "V1 (km/h) = ";
	cin >> X;
	cout << "V2 (km/h) = ";
	cin >> Y;
	cout << "S (km) = ";
	cin >> a;
	cout << "T (h) = ";
	cin >> pi;
	cout << "Distance between autos in " << pi << " hours = " << (X + Y) * pi + a << endl << endl;

	// задание 5 - Решить линейное уравнение A·x + B = 0, заданное своими коэффициентами A и B (коэффициент A не равен 0).
	cout << "A * x + B = 0 (A != 0)" << endl;
	cout << "A = ";
	cin >> X;
	while (X == 0)
	{
		cout << "input is incorrect, please input A again" << endl;
		cin >> X;
	}
	cout << "B = ";
	cin >> Y;
	cout << X << " * x + " << Y << " = 0" << endl;
	cout << " x = " << -Y/X << endl << endl;

	// задание 6 - Найти решение системы линейных уравнений вида A1·x + B1·y = C1, A2·x + B2·y = C2,
	cout << "A1 * x + B1 * y = C1" << endl << "A2 * x + B2 * y = C2" << endl;
	double A1, A2, B1, B2, C1, C2;
	cout << "A1 = "; cin >> A1;
	cout << "B1 = "; cin >> B1;
	cout << "C1 = "; cin >> C1;
	cout << "A2 = "; cin >> A2;
	cout << "B2 = "; cin >> B2;
	cout << "C2 = "; cin >> C2;
	if ((A1 * B2) - (A2 * B1) == 0)
	{
		if (A1 / A2 == B1 / B2 && A1 / A2 == C1 / C2) cout << "x and y are inifinite" << endl;
		else cout << "there are no x and y" << endl; 
	}
	else
	{
		cout << "x = " << ((C1 * B2) - (C2 * B1))/((A1 * B2) - (A2 * B1)) << endl << "y = " << ((A1 * C2) - (A2 * C1))/((A1 * B2) - (A2 * B1)) << endl;
	}

	return 0;
}
