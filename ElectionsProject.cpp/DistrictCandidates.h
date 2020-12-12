#pragma once
#include "CitizensList.h"
class citizen;
class District;


namespace electionProject
{
    class  DistrictCandidates
    {

    private:

        float _votes;
        District* _district; //pointer to the district;
        CitizenList _candidatesList; ////Party candidates List 
        void resize(unsigned int size);
    public:

        CitizenList getCandidateList() const { return _candidatesList; }
        float getVotes()const { return _votes; }
        Citizen* get(int idx)const { return _candidatesList.get(idx); }
        bool set(int idx, Citizen* citizen);
        bool setLength(unsigned int len);
        void add(Citizen* citizen);
        void operator=(const DistrictCandidates& otherDistrictCandidates);
        DistrictCandidates(float votes = 0);
        DistrictCandidates(const DistrictCandidates& otherDistrictsCandidates);

    };
}

