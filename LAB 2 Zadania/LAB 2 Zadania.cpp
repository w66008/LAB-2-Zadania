#include <iostream> 
#include <windows.h> 
#include <time.h>
using namespace std;

int main()
{
//------------Zadanie 1---------------------------------
	/*int n, n1;

	float lpPkt, suma = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;
	n1 = n;
	if (n > 0)
	{
		while (n > 0)
		{
			cout << "Podaj liczbe punktow: ", cin >> lpPkt;
			suma += lpPkt;
			n--;
		}
		cout << "Srednia ilosc punktow wynosi " << suma / n1 << endl;
	}
	else {
		cout << "w grupie musi byc co najmniej jeden student\n";
	}*/
//------------Zadanie 2---------------------------------
	/*int n, n1;

	float lpPkt, suma = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;
	n1 = n;
	if (n > 0 && n < 100)
	{
		while (n > 0 && n < 100)
		{
			cout << "Podaj liczbe punktow: ", cin >> lpPkt;
			suma += lpPkt;
			n--;
		}
		cout << "Srednia ilosc punktow wynosi " << suma / n1 << endl;
	}
	else {
		cout << "Nieprawidlowa liczba studentow\n";
	}*/
//------------Zadanie 3---------------------------------
	/*int n, n1;

	float lpPkt, suma = 0;
	cout << "Podaj liczbe studentow: ", cin >> n;
	n1 = n;
	if (n > 0)
	{
		while (true)
		{
			cout << "Podaj liczbe punktow: ", cin >> lpPkt;
			if (lpPkt >= 0 && lpPkt <= 100)
			{
				suma += lpPkt;
				n--;
			}

			if (n == 0) break;
			continue;
		}
		cout << "Srednia ilosc punktow wynosi " << suma / n1 << endl;
	}
	else {
		cout << "w grupie musi byc co najmniej jeden student\n";
	}*/
//------------Zadanie 4---------------------------------
	/*int a, sd = 0, su = 0, iu = 0, id = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj liczbe ", cin >> a;
		if (a >= 0)

		{
			sd += a;
			id++;
		}
		else
		{
			su += a;
			iu++;

		}
	}
	cout << "Suma dodatnia " << sd << " Ilosc liczb dodatnich " << id << endl;
	cout << "Suma ujemna " << su << " Ilosc liczb ujemnych " << iu << endl;*/
//------------Zadanie 5---------------------------------
	/*
	int a, b, suma = 0;


	cout << "Podaj ilosc liczb ktore chcesz zsumowac ";
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		cout << "Podaj liczbe ";
		cin >> b;
		if (b % 2 == 0) suma += b;
	}
	cout << "Suma podanych liczb wynosi " << suma;*/
//------------Zadanie 6---------------------------------

int liczba, n, suma = 0;
srand(time(NULL));
cout << "Podaj ilosc liczba do wylosowania: ", cin >> n;
if (n > 0) {
	for (int i = 0; i < n; i++)
	{
		liczba = rand() % 45 - 10;

		if (liczba % 2 == 0)
		{
			suma += liczba;

		}
		cout << liczba << " " << endl;
	}

	cout << "Suma liczb parzystych: " << suma << endl;
}
else {
	cout << "Musisz podac co najmniej jedna liczbe ";

}

}