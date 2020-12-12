#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include "citizen.h"
#include "CitizensList.h"
using namespace electionProject;



namespace electionProject
{
	void func()
	{
		char name[1024];
		int id;
		int bYear;

		cin >> name;
		cin >> id;
		cin >> bYear;

		CitizenList list;
		Citizen citizen(name, id, bYear, nullptr, nullptr);
		list.add(&citizen);

	}
}

	void main()
	{
		int choice;
		bool isDone = false;
		char name[1024];
		int id;
		int bYear;

		while (!isDone)
		{
			//	cout << "**** Elections  Will take place in " << Date.printDate << " days **** \n";////?????????????
			cout << "Available actions: \n";
			cout << "1 - Add New District \n";
			cout << "2 - Add New Citizen \n";
			cout << "3 - Add New Party \n";
			cout << "4 - Add New Candidate \n";
			cout << "5 - Show all districts \n";
			cout << "6 - Show All citizens \n";
			cout << "7 - Show All parties \n";
			cout << "8 - Vote \n";
			cout << "9 - Elections results  \n";
			cout << "10 - Exit \n";


			cin >> choice;

			switch (choice)
			{
			case 1: //add district
				cout << "Please enter district name" << endl;
			case 2: // add citizen 
				//cout << "Pleas enter citizen details" << endl;
				//cin >> name >> id >> bYear;
				//Citizen citizen(name, id, bYear, nullptr, nullptr);
				func();


			case 5://show all discrits

				;
			}

		}

	}

 




 