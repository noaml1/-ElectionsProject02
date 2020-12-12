#include "DistrictCandidatesArrHelper.h"

namespace electionProject
{
	DistrictCandidates** DistrictCandidatesArrHelper::Copy(const DistrictCandidatesArr& source)
	{
		DistrictCandidates** dest = new DistrictCandidates * [source.getLength()];
		for (unsigned int i = 0; i < source.getLength(); i++)
		{
			dest[i] = source.getArr()[i];
		}

		return dest;
	}

}
