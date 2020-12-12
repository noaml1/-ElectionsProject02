#pragma once
#include "Party.h"

namespace electionProject
{
    class PartyList
    {
    private:
        Party** _arr;
        unsigned int _logicalSize = 0;
        unsigned int _physicalSize = 0;
        void resize(unsigned int size);
    public:
        Party** getArr() const { return _arr; }
        Party* get(int idx)const { return _arr[idx]; }
        unsigned int getLength() const { return _logicalSize; }
        bool set(int idx, Party* Party);
        bool setLength(unsigned int len);
        void add(Party* party);
        PartyList(unsigned int physicalSize = 2);
        ~PartyList() { delete[] _arr; }
        PartyList(const PartyList& otherPartyList);
        void operator=(const PartyList& otherPartyList);

    };

}


