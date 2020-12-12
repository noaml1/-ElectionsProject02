#include "PartyListHelper.h"
namespace electionProject
{
	Party** PartyListHelper::Copy(const PartyList& source)
	{
		Party** dest = new Party*[source.getLength()];
		for (unsigned int i = 0; i < source.getLength(); i++)
		{
			dest[i] = (source.getArr())[i];
		}

		return dest;
	}

}
