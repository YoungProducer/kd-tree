#pragma once

#ifndef _H_KDNODE_
#define _H_KDNODE_

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
#include "KDPoint.h"

class KDNode
{
public:
	KDNode(std::vector<float> pointData)
	{
		_point = new KDPoint(pointData);
		_numDim = pointData.size();
	}

	KDNode(KDPoint* point)
	{
		_point = point;
		_numDim = point->size();
	}

	inline const void add(KDNode* point) { add(point, 0); }
	const void add(KDNode* point, size_t depth);
	
	std::string toString() const;

public:
	KDNode* _left = nullptr;
	KDNode* _right = nullptr;
	KDPoint* _point;
	uint16_t _numDim;
};

#endif // _H_KDNODE_