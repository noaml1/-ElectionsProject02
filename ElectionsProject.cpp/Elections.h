#pragma once
#include "citizen.h"
#include "Date.h"
#include "PartyList.h"
#include "DistrictsList.h"

namespace electionProject
{
	class Elections
	{

	private:

		Date _date;
		CitizenList _citizensList;
		PartyList _partyList;
		DistrictsList _districtsList;

	public:

		Date getDate()const { return _date; }
		CitizenList getCitizenList()const { return _citizensList; }
		PartyList getPartyList()const { return _partyList; }
		DistrictsList getDistrict()const { return _districtsList; }

		void operator=(const Elections& otherElections);
		Elections();
		~Elections() {};
		Elections(const Elections& otherElections);


		void addCitizenAsPartyCandidate(int id, int partyNum, int districtNum);
		void showAllDistricts(int districtNum, char* districtName, int candidatesNum);
		void showAllCitizens(char* name, int id, int bYear, int districtNum);
		void showAllParties(char* partyName, int);

		void voting();
		void showElectionsResults();


	};
}

