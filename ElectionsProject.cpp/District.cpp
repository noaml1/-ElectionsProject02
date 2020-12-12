#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "District.h"
using namespace std;


namespace electionProject
{
	bool District::setNumOfCandidates(int numOfCandidates)
	{
		this->_numOfCandidates = numOfCandidates;
		return true;
	}


	bool District::setNumOfCitizen(float numOfCitizen)
	{
		this->_numOfCitizens = numOfCitizen;
		return true;
	}

	bool District::setNumOfVoters(float numOfVoters)
	{
		this->_numOfVoters = numOfVoters;
		return true;
	}


	bool District::setDistrictVotingPercentage()
	{
		this->_districtVotingPercentage = (this->_numOfVoters / this->_numOfCitizens) * 100;
		return true;
	}


	District::District(const char* name, int districtNum, int numOfCandidates, float numOfCitizens, float numOfVoters, float districtVotingPercentage)
		: _electionsResults(numOfVoters, districtVotingPercentage)
	{

		_name = StringHelper::Copy(name);
		_districtNum = districtNum;
		setNumOfCandidates(numOfCandidates);
		setNumOfCitizen(numOfCitizens);
		setNumOfVoters(numOfVoters);
		setDistrictVotingPercentage();

	}

	District::~District()
	{
		delete[] _name;
	}

	District::District(const District& otherDistrict)
		:District(otherDistrict._name, otherDistrict._districtNum, otherDistrict._numOfCandidates, otherDistrict._numOfCitizens, otherDistrict._numOfVoters, otherDistrict._districtVotingPercentage)
	{
	}

	void District::operator=(const District& otherDistrict)
	{
		if (this != &otherDistrict)
		{
			this->_name = StringHelper::Copy(otherDistrict._name);
			this->_districtNum = otherDistrict._districtNum;
			this->_numOfCandidates = otherDistrict._numOfCandidates;
			this->_numOfCitizens = otherDistrict._numOfCitizens;
			this->_numOfVoters = otherDistrict._numOfVoters;
			this->_districtVotingPercentage = otherDistrict._districtVotingPercentage;
			this->_citizensList = otherDistrict._citizensList;
			this->_electionsResults = otherDistrict._electionsResults;
		}

	}
/*
	ostream& operator<<(ostream& os, const District& district)
	{

		os << "District Name: " << district.getName() << endl << "District Number: " << district.getDistrictNum() << endl <<
			"Number of candidates: " << district.getNumOfCandidates() << endl;
		return os;
	}
	*/
}

 
