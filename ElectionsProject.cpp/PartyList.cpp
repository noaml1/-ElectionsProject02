
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "citizen.h"
#include "StringHelper.h"
#include "PartyList.h"
using namespace std;

namespace electionProject
{
	bool PartyList::set(int idx, Party* Party)
	{
		_arr[idx] = Party;
		return true;
	}

	void PartyList::resize(unsigned int size)
	{
		Party** temp = new Party * [size];
		for (int i = 0; i < _logicalSize; i++)
		{
			temp[i] = _arr[i];
		}
		delete[]_arr;
		_arr = temp;
		_physicalSize = size;
	}

	bool PartyList::setLength(unsigned int len)
	{
		if (len > _physicalSize)
		{
			resize(len);

		}
		_logicalSize = len;
		return true;
	}
	void PartyList::add(Party* party)
	{
		if (_logicalSize == _physicalSize)
		{
			resize(_physicalSize * 2 + 1);
		}
		_arr[_logicalSize] = party;
		++_logicalSize;
	}
	void PartyList::operator=(const PartyList& otherPartyList)
	{
		if (this != &otherPartyList)
		{
			if (this->_logicalSize < otherPartyList._logicalSize)
			{
				this->setLength(otherPartyList._logicalSize);
			}
			if (this->_logicalSize > otherPartyList._logicalSize)
			{
				for (int i = this->_logicalSize; i > otherPartyList._logicalSize; i--)
				{
					delete[] this->getArr()[i];
				}

				this->_physicalSize = otherPartyList._logicalSize;
			}
			for (int i = 0; i < otherPartyList._logicalSize; i++)
			{
				this->getArr()[i] = otherPartyList.getArr()[i];
			}

		}
	}

	PartyList::PartyList(unsigned int physicalSize)
	{
		_physicalSize = physicalSize;
		if (physicalSize == 0)
		{
			_arr = nullptr;
		}
		else
		{
			_arr = new Party*[physicalSize];
		}

	}

	PartyList::PartyList(const PartyList& otherPartyList)
	{
		_physicalSize = otherPartyList._physicalSize;
		_logicalSize = otherPartyList._logicalSize;
		_arr = new Party * [_physicalSize];
		memcpy(_arr, otherPartyList._arr, _logicalSize);
	}

}
