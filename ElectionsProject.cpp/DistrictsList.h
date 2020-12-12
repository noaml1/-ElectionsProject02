#pragma once
class District;

namespace electionProject
{
    class DistrictsList
    {
    private:
        District** _arr;
        unsigned int _logicalSize = 0;
        unsigned int _physicalSize = 0;
        void resize(unsigned int size);
    public:
        District** getArr() const { return _arr; }
        District* get(int idx)const { return _arr[idx]; }
        unsigned int getLength()const { return _logicalSize; }
        bool set(int idx, District* district);
        bool setLength(unsigned int len);
        void add(District* district);
        DistrictsList(unsigned int physicalSize = 2);
        ~DistrictsList() { delete[] _arr; }
        DistrictsList(const DistrictsList& otherDistrictsList);
        void operator=(const DistrictsList& otherDistrictsList);
    };
}



	
