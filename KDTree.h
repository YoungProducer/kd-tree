#pragma once

#ifndef _H_KDTREE_
#define _H_KDTREE_

#include <string>
#include "KDNode.h"
#include "KDPoint.h"

class KDTree
{
public:
	inline KDTree(uint16_t numDim) : _numDim(numDim) {}
	inline KDTree(KDNode* node)
	{
		_rootNode = node;
		_numDim = node->_point->size();
	}

	const void add(KDPoint* point);
	const void add(KDNode* node);
	
	inline std::string toString() const { return _rootNode != nullptr ? _rootNode->toString() : "Tree is empty."; };

private:
	KDNode* _rootNode = nullptr;
	uint16_t _numDim;
};

#endif // _H_KDTREE_