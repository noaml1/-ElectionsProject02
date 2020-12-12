#pragma once
#include "DistrictCandidatesArr.h"

namespace electionProject
{
	class DistrictCandidatesArrHelper

	{
	public:
		static DistrictCandidates** Copy(const DistrictCandidatesArr& source);
	};

}

