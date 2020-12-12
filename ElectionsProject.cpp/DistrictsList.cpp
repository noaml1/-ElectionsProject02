#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DistrictCandidates.h"
#include "DistrictsList.h"
#include "DistrictListHelper.h"
using namespace std;

namespace electionProject
{
	bool DistrictsList::set(int idx, District* district)
	{
		_arr[idx] = district;
		return true;
	}
	void DistrictsList::resize(unsigned int size)
	{
		District** temp = new District * [size];
		for (int i = 0; i < _logicalSize; i++)
		{
			temp[i] = _arr[i];
		}
		delete[]_arr;
		_arr = temp;
		_physicalSize = size;
	}

	bool DistrictsList::setLength(unsigned int len)
	{
		if (len > _physicalSize)
		{
			resize(len);

		}
		_logicalSize = len;
		return true;
	}

	void DistrictsList::add(District* district)
	{
		if (_logicalSize == _physicalSize)
		{
			resize(_physicalSize * 2 + 1);
		}
		_arr[_logicalSize] = district;
		++_logicalSize;
	}
	void DistrictsList::operator=(const DistrictsList& otherDistrictsList)
	{
		if (this != &otherDistrictsList)
		{
			if (this->_logicalSize < otherDistrictsList._logicalSize)
			{
				this->setLength(otherDistrictsList._logicalSize);
			}
			if (this->_logicalSize > otherDistrictsList._logicalSize)
			{
				for (int i = this->_logicalSize; i > otherDistrictsList._logicalSize; i--)
				{
					delete[] this->getArr()[i];
				}

				this->_physicalSize = otherDistrictsList._logicalSize;
			}
			for (int i = 0; i < otherDistrictsList._logicalSize; i++)
			{
				this->getArr()[i] = otherDistrictsList.getArr()[i];
			}

		}
	}

	DistrictsList::DistrictsList(unsigned int physicalSize)
	{
		_physicalSize = physicalSize;
		if (physicalSize == 0)
		{
			_arr = nullptr;
		}
		else
		{
			_arr = new District * [physicalSize];
		}


	}
	DistrictsList::DistrictsList(const DistrictsList& otherDistrictsList)
	{
		_physicalSize = otherDistrictsList._physicalSize;
		_logicalSize = otherDistrictsList._logicalSize;
		_arr = DistrictListHelper::Copy(otherDistrictsList);
	}
}


