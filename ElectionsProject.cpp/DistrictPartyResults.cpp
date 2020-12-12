#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DistrictPartyResults.h"
#include "CitizenListHelper.h"
using namespace std;

namespace electionProject
{
	bool DistrictPartyResults::setVotesPercentage(float _votes, int districtVotes)
	{
		_votesPercentage = (_votes / districtVotes) * 100;
		return true;
	}

	void DistrictPartyResults::operator=(const DistrictPartyResults& otherDistrictPartyResults)
	{
		if (this != &otherDistrictPartyResults)
		{
			this->_votes = otherDistrictPartyResults._votes;
			this->_votesPercentage = otherDistrictPartyResults._votesPercentage;
			this->_electedCandidatesList = otherDistrictPartyResults._electedCandidatesList;
		}

	}

	DistrictPartyResults::DistrictPartyResults(float votes, float votesPercentage) : _electedCandidatesList()
	{
		_votes = votes;
		_votesPercentage = votesPercentage;
	}
	DistrictPartyResults::DistrictPartyResults(const DistrictPartyResults& otherPartyResults)
		: _electedCandidatesList(otherPartyResults._electedCandidatesList)
	{
		_votes = otherPartyResults._votes;
		_votesPercentage = otherPartyResults._votesPercentage;


	}
	DistrictPartyResults::~DistrictPartyResults()
	{

	}


}


