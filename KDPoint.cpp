#include "KDPoint.h"

std::string KDPoint::toString() const
{
	std::stringstream ss{""};

	for (const float value : _data)
	{
		ss << value << " ";
	}

	return ss.str();
}