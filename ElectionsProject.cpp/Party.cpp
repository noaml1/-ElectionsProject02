#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Party.h"

namespace electionProject
{
    void Party::operator=(const Party& otherParty)
    {
        if (this != &otherParty)
        {
            this->_partyName = StringHelper::Copy(otherParty._partyName);
            this->_partyNum = otherParty._partyNum;
            this->_candidateId = otherParty._candidateId;
            this->_districtsCandidates = otherParty._districtsCandidates;
        }
    }

    Party::Party(const char* partyName, int candidateId, int partyNum) : _districtsCandidates()
    {
        _partyName = StringHelper::Copy(partyName);
        _partyNum = partyNum;
        _candidateId = candidateId;
    }

    Party::~Party()
    {
        delete[] this->_partyName;

    }

    Party::Party(const Party& otherParty)
        : Party(otherParty._partyName, otherParty._candidateId, otherParty._partyNum)
    {
        _districtsCandidates = otherParty._districtsCandidates;
    }


}

