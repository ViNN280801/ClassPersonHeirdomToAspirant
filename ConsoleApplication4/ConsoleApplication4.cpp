#include "stdafx.h"
#include <iostream>
#include "Person.h"
#include <clocale>
#include <ctime>

using namespace std;

int main()
{
	srand(__time64_t(NULL));
	setlocale(LC_ALL, "ru");

	cout << "Card of teacher: " << endl;
	cout << "---- ---- ---- ---- ---- ---- ---- " << endl;
	Aspirant obj("Василий", "Иванов", "Ростовский");
	obj.show();
	cout << "---- ---- ---- ---- ---- ---- ---- " << endl;

	return EXIT_SUCCESS;
}

