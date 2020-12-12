#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Elections.h"
using namespace std;

namespace electionProject
{
	void addCitizenAsPartyCandidate(int id, int partyNum, int districtNum);///use findCitizen in citizenlist
	void showAllDistricts(int districtNum, char* districtName, int candidatesNum);
	void showAllCitizens(char* name, int id, int bYear, int districtNum);
	void showAllParties(char* partyName, int);

	void voting();
	void showElectionsResults();
	void Elections::operator=(const Elections& otherElections)
	{
		if (this != &otherElections)
		{
			_date = otherElections._date;
			_citizensList = otherElections._citizensList;
			_partyList = otherElections._partyList;
			_districtsList = otherElections._districtsList;
		}
	}

	Elections::Elections() : _citizensList(), _partyList(), _districtsList(), _date()
	{
	}
	Elections::Elections(const Elections& otherElections)
	{
		_date = otherElections._date;
		_citizensList = otherElections._citizensList;
		_partyList = otherElections._partyList;
		_districtsList = otherElections._districtsList;
	}

	

}

