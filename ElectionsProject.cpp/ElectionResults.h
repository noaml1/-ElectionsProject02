#pragma once
#include "DistrictPartyResults.h"

namespace electionProject
{
    class ElectionResults
    {

    private:
        DistrictPartyResults** _arr;
        unsigned int _logicalSize = 0;
        unsigned int _physicalSize = 0;
        void resize(unsigned int size);

    public:

        DistrictPartyResults** getArr() const { return _arr; }
        DistrictPartyResults* get(int idx)const { return _arr[idx]; }
        unsigned int getLength() const { return _logicalSize; }
        bool set(int idx, DistrictPartyResults* partyResults);
        bool setLength(unsigned int len);
        void operator=(const ElectionResults& otherElectionResults);
        void add(DistrictPartyResults* partyResults);
        ElectionResults(unsigned int physicalSize = 2);
        ~ElectionResults() { delete[]_arr; };
        ElectionResults(const ElectionResults& otherElectionResults);
    };

}


