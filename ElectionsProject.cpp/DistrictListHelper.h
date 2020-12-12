#pragma once
#include"DistrictsList.h"

namespace electionProject
{
	class DistrictListHelper
	{
	
	public:
		static District** Copy(const DistrictsList& source);
	};

}