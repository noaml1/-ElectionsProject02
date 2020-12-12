#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "CitizensList.h"
#include "citizen.h"
#include "CitizenListHelper.h"
using namespace std;

namespace electionProject
{
	bool CitizenList::set(int idx, Citizen* citizen)
	{
		_arr[idx] = citizen;
		return true;
	}

	void CitizenList::resize(unsigned int size)
	{
		Citizen** temp = new Citizen * [size];
		for (int i = 0; i < _logicalSize; i++)
		{
			temp[i] = _arr[i];
		}
		delete[]_arr;
		_arr = temp;
		_physicalSize = size;
	}

	bool CitizenList::setLength(unsigned int newLen)
	{
		if (newLen > _physicalSize)
		{
			resize(newLen);

		}
		_logicalSize = newLen;
		return true;
	}
	void CitizenList::add(Citizen* newCitizen)
	{
		if (_logicalSize == _physicalSize)
		{
			resize(_physicalSize * 2 + 1);
		}
		_arr[_logicalSize] = newCitizen;
		++_logicalSize;
	}


	Citizen* CitizenList::findCitizen(int id)
	{
		for (int i = 0; i < _logicalSize; ++i)
		{
			if (id == _arr[i]->getId())
			{
				return _arr[i];
			}
		}
	}


	void CitizenList::operator=(const CitizenList& otherCitizenList)
	{
		if (this != &otherCitizenList)
		{
			if (this->_logicalSize < otherCitizenList._logicalSize)
			{
				this->setLength(otherCitizenList._logicalSize);
			}
			if (this->_logicalSize > otherCitizenList._logicalSize)
			{
				for (int i = this->_logicalSize; i > otherCitizenList._logicalSize; i--)
				{
					delete[] this->getArr()[i];
				}

				this->_physicalSize = otherCitizenList._logicalSize;
			}
			for (int i = 0; i < otherCitizenList._logicalSize; i++)
			{
				this->getArr()[i] = otherCitizenList.getArr()[i];
			}


		}
	}

	CitizenList::CitizenList(unsigned int physicalSize)
	{
		cout << "start citizenList ctor \n";
		_physicalSize = physicalSize;
		if (physicalSize == 0)
		{
			_arr = nullptr;
		}
		else
		{
			_arr = new Citizen * [physicalSize];
		}
		cout << "end citizenList ctor \n";
	}

	CitizenList::CitizenList(const CitizenList& otherCitizenList)
	{
		_physicalSize = otherCitizenList._physicalSize;
		_logicalSize = otherCitizenList._logicalSize;
		_arr = CitizenListHelper::Copy(otherCitizenList);
	}

}

