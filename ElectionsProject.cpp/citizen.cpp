#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "citizen.h"
#include "StringHelper.h"
using namespace std;

namespace electionProject
{
    Citizen::Citizen(const char* name, int id, int Byear, District* district, Party* party)
        : _id(id), _bYear(Byear), _district(district), _party(party)
    {
        cout << "start citizen ctor \n";
        _name = StringHelper::Copy(name);
        cout << "end citizen ctor \n";
    }

    Citizen::~Citizen()
    {
        delete[] this->_name;
    }

    Citizen::Citizen(const Citizen& otherCitizen)
        :Citizen(otherCitizen._name, otherCitizen._id, otherCitizen._bYear, otherCitizen._district, otherCitizen._party)
    {
    }

     ostream& operator<<(ostream& os, const Citizen& citizen)
    {
        os << "Name: " << citizen._name << endl << "Id: " << citizen._id << endl << "Birth year" << citizen._bYear << endl << " District name:" << citizen._district->getName();
        return os;
    }
/*
     istream& operator>>(istream& is, const Citizen& citizen)
     {
         is >> citizen._name >>  citizen._id >> citizen._bYear >> citizen._district->s;
         return is;
     }*/

    void Citizen::operator=(const Citizen& otherCitizen)
    {
        if (this != &otherCitizen)
        {
            this->_name = StringHelper::Copy(otherCitizen._name);
            this->_id = otherCitizen._id;
            this->_bYear = otherCitizen._bYear;
            this->_district = otherCitizen._district;
        }
    }

}

