#pragma once
#include "DistrictCandidates.h"

namespace electionProject
{
    class DistrictCandidatesArr
    {
    private:
        DistrictCandidates** _arr;
        unsigned int _logicalSize = 0;
        unsigned int _physicalSize = 0;
        void resize(unsigned int size);
    public:
        DistrictCandidates* get(int idx)const { return _arr[idx]; }
        DistrictCandidates** getArr() const { return _arr; }
        unsigned int getLength() const { return _logicalSize; }
        bool set(int idx, DistrictCandidates* DistrictCandidates);
        bool setLength(unsigned int len);
        void add(DistrictCandidates* districtCandidates);
        DistrictCandidates& findDistrictCandidates(int id) const;
        void operator=(const DistrictCandidatesArr& otherDistrictCandidatesArr);

        DistrictCandidatesArr(unsigned int physicalSize = 2);
        ~DistrictCandidatesArr() { delete[] _arr; }
        DistrictCandidatesArr(const DistrictCandidatesArr& otherDistrictCandidatesArr);


    };


}

