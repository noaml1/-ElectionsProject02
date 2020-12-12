#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "ElectionResults.h"
#include"ElectionResultsHelper.h"
using namespace std;


namespace electionProject
{
	bool ElectionResults::set(int idx, DistrictPartyResults* partyResults)
	{
		_arr[idx] = partyResults;
		return true;

	}

	void ElectionResults::resize(unsigned int size)
	{
		DistrictPartyResults** temp = new DistrictPartyResults * [size];
		for (int i = 0; i < _logicalSize; i++)
		{
			temp[i] = _arr[i];
		}
		delete[]_arr;
		_arr = temp;
		_physicalSize = size;
	}

	bool ElectionResults::setLength(unsigned int len)
	{
		if (len > _physicalSize)
		{
			resize(len);
		}
		_logicalSize = len;
		return true;
	}
	void ElectionResults::add(DistrictPartyResults* partyResults)
	{
		if (_logicalSize == _physicalSize)
		{
			resize(_physicalSize * 2 + 1);
		}
		_arr[_logicalSize] = partyResults;
		++_logicalSize;
	}
	void ElectionResults::operator=(const ElectionResults& otherElectionResults)
	{
		if (this != &otherElectionResults)
		{
			if (this->_logicalSize < otherElectionResults._logicalSize)
			{
				this->setLength(otherElectionResults._logicalSize);
			}
			if (this->_logicalSize > otherElectionResults._logicalSize)
			{
				for (int i = this->_logicalSize; i > otherElectionResults._logicalSize; i--)
				{
					delete[] this->getArr()[i];
				}

				this->_physicalSize = otherElectionResults._logicalSize;
			}
			for (int i = 0; i < otherElectionResults._logicalSize; i++)
			{
				this->getArr()[i] = otherElectionResults.getArr()[i];
			}


		}
	}

	ElectionResults::ElectionResults(unsigned int physicalSize)
	{
		_physicalSize = physicalSize;
		if (physicalSize == 0)
		{
			_arr = nullptr;
		}
		else
		{
			_arr = new DistrictPartyResults*[physicalSize];
		}

	}

	ElectionResults::ElectionResults(const ElectionResults& otherElectionResults)
	{
		_physicalSize = otherElectionResults._physicalSize;
		_logicalSize = otherElectionResults._logicalSize;
		_arr = ElectionResultsHelper::Copy(otherElectionResults);
	}
}
