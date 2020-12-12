#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DistrictCandidates.h"
#include "citizen.h"
using namespace std;

namespace electionProject
{
	bool DistrictCandidates::set(int idx, Citizen* citizen)
	{
		_candidatesList.set(idx, citizen);
		return true;
	}

	bool DistrictCandidates::setLength(unsigned int len)
	{
		return _candidatesList.setLength(len);
	}
	void DistrictCandidates::add(Citizen* citizen)
	{
		_candidatesList.add(citizen);
	}

	void DistrictCandidates::operator=(const DistrictCandidates& otherDistrictCandidates)
	{
		if (this != &otherDistrictCandidates)
		{
			this->_district = otherDistrictCandidates._district;
			this->_votes = otherDistrictCandidates._votes;
			this->_candidatesList = otherDistrictCandidates._candidatesList;

		}

	}

	DistrictCandidates::DistrictCandidates(float votes)
	{

		_votes = votes;

	}

	DistrictCandidates::DistrictCandidates(const DistrictCandidates& otherDistrictsCandidates)
	{
		_votes = otherDistrictsCandidates._votes;
	}



}


