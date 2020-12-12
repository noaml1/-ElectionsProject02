#pragma once
#include "CitizensList.h"

namespace electionProject
{
    class DistrictPartyResults
    {
    private:
        CitizenList _electedCandidatesList;
        float _votes;
        float _votesPercentage;

    public:
        CitizenList getElectedCandidates() const { return _electedCandidatesList; }
        Citizen* get(int idx)const { return _electedCandidatesList.get(idx); }
        float getVotes() { return _votes; }
        float getVotesPercentage() { return _votesPercentage; }
        void operator=(const DistrictPartyResults& otherDistrictPartyResults);
        bool setVotes() { _votes++; }
        bool setVotesPercentage(float _votes, int districtVotes);
        DistrictPartyResults(float votes = 0, float votesPercentage = 0);
        ~DistrictPartyResults();
        DistrictPartyResults(const DistrictPartyResults& otherPartyResults);

    };
}


