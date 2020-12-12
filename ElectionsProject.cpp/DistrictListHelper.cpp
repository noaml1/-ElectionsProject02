#include "DistrictListHelper.h"


namespace electionProject
{
	District** DistrictListHelper::Copy(const DistrictsList& source)
	{
		District** dest = new District*[source.getLength()];
		for (unsigned int i = 0; i < source.getLength(); i++)
		{
			dest[i] = source.getArr()[i];
		}

		return dest;
	}

}