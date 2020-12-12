#include "CitizenListHelper.h"

namespace electionProject
{
	Citizen** CitizenListHelper::Copy(const CitizenList& source)
	{
		Citizen** dest = new Citizen * [source.getLength()];
		for (unsigned int i = 0; i < source.getLength(); i++)
		{
			dest[i] = (source.getArr())[i];
		}

		return dest;
	}

}
