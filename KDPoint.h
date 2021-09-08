#pragma once

#ifndef _H__KDPOINT_
#define _H__KDPOINT_

#include <vector>
#include <sstream>
#include <string>

class KDPoint
{
public:
	KDPoint(std::vector<float> data): _data(data) {}

	inline float get(int depth) const
	{
		return _data.at(depth % _data.size());
	}

	inline size_t size() const
	{
		return _data.size();
	}

	std::string toString() const;

private:
	std::vector<float> _data;
};

#endif // _H__KDPOINT_