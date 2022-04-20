#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

void task1()//Дан номер дня – целое число от 1 до 31 и месяца — целое число в диапазоне 1–12 (1 — январь, 2 — февраль и т. д.). Вывести дату в виде текста (например, «пятое января»).
{
	int day, mounth;
	
	cout << "Введите день (от 1 до 31) и месяц (от 1 до 12)" << endl;
	cout << "День = ";
	cin >> day;
	cout << "Месяц = ";
	cin >> mounth;
	while (day > 31 || day < 1 || mounth > 12 || mounth < 1)
	{
		cout << "Ввод неверен" << endl;
		cout << "День = ";
		cin >> day;
		cout << "Месяц = ";
		cin >> mounth;
	}

	switch (day)
	{
	case 1:
		cout << "Первое";
		break;
	case 2:
		cout << "Второе";
		break;
	case 3:
		cout << "Третье";
		break;
	case 4:
		cout << "Четвёртое";
		break;
	case 5:
		cout << "Пятое";
		break;
	case 6:
		cout << "Шестое";
		break;
	case 7:
		cout << "Седьмое";
		break;
	case 8:
		cout << "Восьмое";
		break;
	case 9:
		cout << "Девятое";
		break;
	case 10:
		cout << "Десятое";
		break;
	case 11:
		cout << "Одиннадцатое";
		break;
	case 12:
		cout << "Двенадцатое";
		break;
	case 13:
		cout << "Тринадцатое";
		break;
	case 14:
		cout << "Четырнадцатое";
		break;
	case 15:
		cout << "Пятнадцатое";
		break;
	case 16:
		cout << "Шестнадцатое";
		break;
	case 17:
		cout << "Семнадцатое";
		break;
	case 18:
		cout << "Восемнадцатое";
		break;
	case 19:
		cout << "Девятнадцатое";
		break;
	case 20:
		cout << "Двацатое";
		break;
	case 21:
		cout << "Двадцать первое";
		break;
	case 22:
		cout << "Двадцать второе";
		break;
	case 23:
		cout << "Двадцать третье";
		break;
	case 24:
		cout << "Двадцать четвёртое";
		break;
	case 25:
		cout << "Двадцать пятое";
		break;
	case 26:
		cout << "Двадцать шестое";
		break;
	case 27:
		cout << "Двадцать седьмое";
		break;
	case 28:
		cout << "Двадцать восьмое";
		break;
	case 29:
		cout << "Двадцать девятое";
		break;
	case 30:
		cout << "Тридцатое";
		break;
	case 31:
		cout << "Тридцать первое";
		break;
	}

	switch (mounth)
	{
	case 1:
		cout << " января";
		break;
	case 2:
		cout << " февраля";
		break;
	case 3:
		cout << " марта";
		break;
	case 4:
		cout << " апреля";
		break;
	case 5:
		cout << " мая";
		break;
	case 6:
		cout << " июня";
		break;
	case 7:
		cout << " июля";
		break;
	case 8:
		cout << " августа";
		break;
	case 9:
		cout << " сентября";
		break;
	case 10:
		cout << " октября";
		break;
	case 11:
		cout << " ноября";
		break;
	case 12:
		cout << " декабря";
		break;
	}
	cout << endl;

}

void task2()//Робот может перемещаться в четырех направлениях («С» — север, «З» — запад, «Ю» — юг, «В» — восток) и принимать три цифровые команды: 0 — продолжать движение, 1 — поворот налево, −1 — поворот направо. Дан символ C — исходное направление робота и целое число N — посланная ему команда. Вывести направление робота после выполнения полученной команды
{
	cout << "Введите направление С («N» — север, «W» — запад, «S» — юг, «E» — восток) и номер команды N (0 — продолжать движение, 1 — поворот налево, -1 — поворот направо)" << endl;
	char C;
	int N;
	cout << "C = ";
	cin >> C;
	cout << "N = ";
	cin >> N;
	switch (C)
	{
	case 'N':
		switch (N)
		{
		case 1:
			cout << "Направление движения - З (Запад)" << endl;	
			break;
		case 0: 
			cout << "Направление движения - С (Север)" << endl;	
			break;
		case -1: 
			cout << "Направление движения - В (Восток)" << endl;	
			break;
		}
		break;
	case 'W':
		switch (N)
		{
		case 1: 
			cout << "Направление движения - Ю (Юг)" << endl;	
			break;
		case 0: 
			cout << "Направление движения - З (Запад)" << endl;	
			break;
		case -1: 
			cout << "Направление движения - С (Север)" << endl;	
			break;
		}
		break;
	case 'S':
		switch (N)
		{
		case 1: 
			cout << "Направление движения - В (Восток)" << endl;	
			break;
		case 0: 
			cout << "Направление движения - Ю (Юг)" << endl;	
			break;
		case -1: 
			cout << "Направление движения - З (Запад)" << endl;	
			break;
		}
		break;
	case 'E':
		switch (N)
		{
		case 1: 
			cout << "Направление движения - С (Север)" << endl;	
			break;
		case 0: 
			cout << "Направление движения - В (Восток)" << endl;	
			break;
		case -1: 
			cout << "Направление движения - Ю (Юг)" << endl;	
			break;
		}
		break;
	default :
		cout << "Направление движения введено неверно" << endl;
		break;
	}

}

void task3()//Дано целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме. Вывести строку-описание указанного количества заданий, обеспечив правильное согласование числа со словами «учебное задание», например: 18 — «восемнадцать учебных заданий».
{
	int n;
	cout << "Введите целое число в диапазоне 10–40, определяющее количество учебных заданий по некоторой теме" << endl;
	cout << "Количество заданий по теме = ";
	cin >> n;
	while (n > 40 || n <1)
	{
		cout << "Ввод неверен" << endl;
		cout << "Количество заданий по теме = ";
		cin >> n;
	}
	cout << "В этой теме ";

	if (n / 10 == 1)
		switch (n) {
		case 10:
			cout << "десять учебных заданий.";
			break;
		case 11:
			cout << "одинадцать учебных заданий.";
			break;
		case 12:
			cout << "двенадцать учебных заданий.";
			break;
		case 13:
			cout << "тринадцать учебных заданий.";
			break;
		case 14:
			cout << "четырнадцать учебных заданий.";
			break;
		case 15:
			cout << "пятнадцать учебных заданий.";
			break;
		case 16:
			cout << "шестнадцать учебных заданий.";
			break;
		case 17:
			cout << "семнадцать учебных заданий.";
			break;
		case 18:
			cout << "восемнадцать учебных заданий.";
			break;
		case 19:
			cout << "девятнадцать учебных заданий.";
			break;
		}
	else {
		switch (n / 10) {
		case 2:
			cout << "двадцать ";
			break;
		case 3:
			cout << "тридцать ";
			break;
		case 4:
			cout << "сорок ";
			break;
		}

		switch (n % 10) {
		case 1:
			cout << "одно ";
			break;
		case 2:
			cout << "два ";
			break;
		case 3:
			cout << "три ";
			break;
		case 4:
			cout << "четыре ";
			break;
		case 5:
			cout << "пять ";
			break;
		case 6:
			cout << "шесть ";
			break;
		case 7:
			cout << "семь ";
			break;
		case 8:
			cout << "восемь ";
			break;
		case 9:
			cout << "девять ";
			break;
		}

		switch (n % 10) {
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			cout << "учебных заданий.";
			break;
		case 1:
			cout << "учебное задание.";
			break;
		case 2:
		case 3:
		case 4:
			cout << "учебных задания.";
			break;
		}
	}
	cout << endl;
}

void task4()//Дано целое число в диапазоне 100–999. Вывести строку-описание данного числа, например: 256 — «двести пятьдесят шесть», 814 — «восемьсот четырнадцать».
{
	int n;
	cout << "Введите целое число в диапазоне диапазоне 100–999" << endl;
	cout << "Число = ";
	cin >> n;
	while (n > 999 || n < 100)
	{
		cout << "Ввод неверен" << endl;
		cout << "Число = ";
		cin >> n;
	}
	cout << "Число " << n << " в письменом виде - ";
	switch (n/100)
	{
	case 1:cout << "сто "; break;
	case 2:cout << "двести "; break;
	case 3:cout << "триста "; break;
	case 4:cout << "четыреста "; break;
	case 5:cout << "пятьсот "; break;
	case 6:cout << "шестьсот "; break;
	case 7:cout << "семьсот "; break;
	case 8:cout << "восемьсот "; break;
	case 9:cout << "девятьсот "; break;
	}
	if ((n % 100) / 10 == 1)
	{
		switch (n % 10)
		{
		case 0:cout << "десять"; break;
		case 1:cout << "одинадцать"; break;
		case 2:cout << "двенадцать"; break;
		case 3:cout << "тринадцать"; break;
		case 4:cout << "четырнадцать"; break;
		case 5:cout << "пятьнадцать"; break;
		case 6:cout << "шестьнадцать"; break;
		case 7:cout << "семьнадцать"; break;
		case 8:cout << "восемьнадцать"; break;
		case 9:cout << "девятьнадцать"; break;
		}
	}
	else
	{
		switch ((n / 10) % 10)
		{
		case 2:cout << "двадцать"; break;
		case 3:cout << "тридцать"; break;
		case 4:cout << "сорок"; break;
		case 5:cout << "пятьдесят"; break;
		case 6:cout << "шестьдесят"; break;
		case 7:cout << "семьдесят"; break;
		case 8:cout << "восемьдесят"; break;
		case 9:cout << "девяносто"; break;
		}
		switch (n % 10)
		{
		case 1:cout << " один"; break;
		case 2:cout << " два"; break;
		case 3:cout << " три"; break;
		case 4:cout << " четыре"; break;
		case 5:cout << " пять"; break;
		case 6:cout << " шесть"; break;
		case 7:cout << " семь"; break;
		case 8:cout << " восемь"; break;
		case 9:cout << " девять"; break;
		default:break;
		}
	}
	cout << endl;
}

void task5()//В восточном календаре принят 60-летний цикл, состоящий из 12- летних подциклов, обозначаемых названиями цвета: зеленый, красный, желтый, белый и черный. В каждом подцикле годы носят названия животных: крысы, коровы, тигра, зайца, дракона, змеи, лошади, овцы, обезьяны, курицы, собаки и свиньи. По номеру года определить его название, если 1984 год — начало цикла: «год зеленой крысы».
{
	int n,k;
	cout << "Введите год: ";
	cin >> n;
	if (n >= 1984)k = (n - 1984) % 60;
	else k = 60 - (1984 - n) % 60;

switch (k/12+1)
	{
			case 1:
				cout << "зелен";
				break;
			case 2:
				cout << "красн";
				break;
			case 3:
				cout << "желт";
				break;
			case 4:
				cout << "бел";
				break;
			case 5:
				cout << "черн";
				break;
	}

	switch (k%12) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 9:
	case 10:
	case 11:
		cout << "ой ";
		break;
	case 6:
	case 7:
	case 8:
		cout << "ого ";
		break;
	}

	switch (k%12) {
	case 0:
		cout << "крысы";
		break;
	case 1:
		cout << "коровы";
		break;
	case 2:
		cout << "тигра";
		break;
	case 3:
		cout << "зайца";
		break;
	case 4:
		cout << "дракона";
		break;
	case 5:
		cout << "змеи";
		break;
	case 6:
		cout << "лошади";
		break;
	case 7:
		cout << "овцы";
		break;
	case 8:
		cout << "обезьяны";
		break;
	case 9:
		cout << "курицы";
		break;
	case 10:
		cout << "собаки";
		break;
	case 11:
		cout << "свиньи";
		break;
	}
	cout << endl;
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
