#pragma once
#include  "CitizensList.h"
#include  "DistrictPartyResults.h"
#include "StringHelper.h"

namespace electionProject
{
    class District
    {
    private:

        char* _name;
        int _districtNum;
        int _numOfCandidates;
        float _numOfCitizens = 0;//// logical size of citizenList.
        float _numOfVoters;////// for  voting percentage calculating.
        CitizenList _citizensList;
        float _districtVotingPercentage;
        DistrictPartyResults _electionsResults; //array of results of each party in this district.

    public:

        District(const char* name, int districtNum, int numOfCandidates, float numOfCitizens, float numOfVoters, float districtVotingPercentage);
        ~District();
        District(const District& otherDistrict);
        char* getName() const { return _name; }
        int getDistrictNum() const { return _districtNum; }
        int getNumOfCandidates() const { return _numOfCandidates; }
        float getNumOfCitizen()const { return _numOfCitizens; }
        float getNumOfVoters()const { return _numOfVoters; }
        CitizenList getCitizensList()const { return _citizensList; }
        float getDistrictVotingPercentage()const { return _districtVotingPercentage; }
        DistrictPartyResults getElectionsResults()const { return _electionsResults; }
        void operator=(const District& otherDistrict);
      //  friend ostream& operator<<(ostream& os, const District& district);


        //bool setName(char* name);
       // bool setDistrictNum(int districtNum);
        bool setNumOfCandidates(int numOfCandidates);
        bool setNumOfCitizen(float numOfCitizen);
        bool setNumOfVoters(float numOfVoters);
        bool setCitizensList(Citizen* citizen);
        bool setDistrictVotingPercentage();///// get the info from _numOfCitizen and _numOfVoters;


        void printDistrict() const;

    };
}

