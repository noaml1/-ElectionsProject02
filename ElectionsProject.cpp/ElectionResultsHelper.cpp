#include "ElectionResultsHelper.h"

namespace electionProject
{
	DistrictPartyResults** ElectionResultsHelper::Copy(const ElectionResults& source)
	{
		DistrictPartyResults** dest = new DistrictPartyResults*[source.getLength()];
		for (unsigned int i = 0; i < source.getLength(); i++)
		{
			dest[i] = (source.getArr())[i];
		}

		return dest;
	}

}
