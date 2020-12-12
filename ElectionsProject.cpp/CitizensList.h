#pragma once

namespace electionProject
{
    class Citizen;
	class CitizenList
    {
    private:
        Citizen** _arr;
        unsigned int _logicalSize = 0;
        unsigned int _physicalSize = 0;
        void resize(unsigned int size);
    public:
        Citizen** getArr() const { return _arr; }
        Citizen* get(int idx)const { return _arr[idx]; }
        unsigned int getLength() const { return _logicalSize; }
        bool set(int idx, Citizen* citizen);
        bool setLength(unsigned int len);
        void add(Citizen* citizen);
        Citizen* findCitizen(int id);
        void operator=(const CitizenList& otherCitizenList);

        CitizenList(unsigned int physicalSize = 2);
        ~CitizenList() { delete[] _arr; }
        CitizenList(const CitizenList& otherCitizenList);
    };
}

