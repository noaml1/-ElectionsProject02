#include "StringHelper.h"
#include <cstring>

namespace electionProject
{
	char* StringHelper::Copy(const char* source)
	{
		int sourceLen = strlen(source);
		char* newString = new char[sourceLen + 1];

		for (int i = 0; i < sourceLen; ++i)
		{
			newString[i] = source[i];
		}

		newString[sourceLen] = '\0';

		return newString;
	}

}
