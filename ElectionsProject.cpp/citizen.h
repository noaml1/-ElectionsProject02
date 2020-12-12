#pragma once
#include <iostream>
#include "District.h"
#include "Party.h"
using namespace std;

namespace electionProject
{
	class Citizen
	{
	private:
		char* _name;
		int _id;
		int _bYear;
		District* _district;
		Party* _party;

	public:

		Citizen(const char* name, int id, int Byear, District* district, Party* party = nullptr);
		~Citizen();
		Citizen(const Citizen& otherCitizen);

		char* getName() const { return _name; }
		int getId() const { return _id; }
		int getByear() const { return _bYear; }
		District* getDistrict() const { return _district; }
		Party* getParty() const { return _party; }


		friend ostream& operator<<(ostream& os, const Citizen& citizen);
	//	friend istream& operator>>(istream& is, const Citizen& citizen);
		void operator=(const Citizen& otherCitizen);

	};
}
