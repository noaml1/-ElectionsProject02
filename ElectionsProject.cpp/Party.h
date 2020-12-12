#pragma once
#include "DistrictCandidates.h"
#include "StringHelper.h"


namespace electionProject
{
    class Party
    {
    private:

        char* _partyName;
        int _partyNum;
        int _candidateId;
        DistrictCandidates _districtsCandidates;

    public:

        char* getPartyName() const { return _partyName; }
        int getPartyNum()const { return _partyNum; }
        int getCandidateId() const { return _candidateId; }
        void operator=(const Party& otherParty);
        DistrictCandidates getDistructCandidates() const { return _districtsCandidates; }

        Party(const char* partyName, int candidateId, int partyNum);
        ~Party();
        Party(const Party& otherParty);



    };
}
