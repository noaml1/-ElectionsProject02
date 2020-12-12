#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "DistrictCandidatesArr.h"
#include "DistrictCandidatesArrHelper.h"
using namespace std;

namespace electionProject
{
	bool DistrictCandidatesArr::set(int idx, DistrictCandidates* DistrictCandidates)
	{
		_arr[idx] = DistrictCandidates;
		return true;

	}
	void DistrictCandidatesArr::resize(unsigned int size)
	{
		DistrictCandidates** temp = new DistrictCandidates * [size];
		for (int i = 0; i < _logicalSize; i++)
		{
			temp[i] = _arr[i];
		}
		delete[]_arr;
		_arr = temp;
		_physicalSize = size;
	}

	bool DistrictCandidatesArr::setLength(unsigned int len)
	{
		if (len > _physicalSize)
		{
			resize(len);

		}
		_logicalSize = len;
		return true;


	}
	void DistrictCandidatesArr::add(DistrictCandidates* districtCandidates)
	{
		if (_logicalSize == _physicalSize)
		{
			resize(_physicalSize * 2 + 1);
		}
		_arr[_logicalSize] = districtCandidates;
		++_logicalSize;

	}
	/*DistrictCandidates& DistrictCandidatesArr::findDistrictCandidates(int id)
	{

	}*/

	void DistrictCandidatesArr::operator=(const DistrictCandidatesArr& otherDistrictCandidatesArr)
	{
		if (this != &otherDistrictCandidatesArr)
		{
			if (this->_logicalSize < otherDistrictCandidatesArr._logicalSize)
			{
				this->setLength(otherDistrictCandidatesArr._logicalSize);
			}
			if (this->_logicalSize > otherDistrictCandidatesArr._logicalSize)
			{
				for (int i = this->_logicalSize; i > otherDistrictCandidatesArr._logicalSize; i--)
				{
					delete[](this->getArr()[i]);
				}

				this->_physicalSize = otherDistrictCandidatesArr._logicalSize;
			}
			for (int i = 0; i < otherDistrictCandidatesArr._logicalSize; i++)
			{
				this->getArr()[i] = otherDistrictCandidatesArr.getArr()[i];
			}
		}
	}

	DistrictCandidatesArr::DistrictCandidatesArr(unsigned int physicalSize)
	{
		_physicalSize = physicalSize;
		if (physicalSize == 0)
		{
			_arr = nullptr;
		}
		else
		{
			_arr = new DistrictCandidates * [physicalSize];
		}

	}

	DistrictCandidatesArr::DistrictCandidatesArr(const DistrictCandidatesArr& otherDistrictCandidatesArr)
	{
		_physicalSize = otherDistrictCandidatesArr._physicalSize;
		_logicalSize = otherDistrictCandidatesArr._logicalSize;
		_arr = DistrictCandidatesArrHelper::Copy(otherDistrictCandidatesArr);

	}


}


