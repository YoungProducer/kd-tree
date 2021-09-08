#include "KDNode.h"

const void KDNode::add(KDNode* node, size_t depth)
{
	if (node->_point->get(depth) < _point->get(depth))
	{
		if (_left == nullptr)
		{
			_left = node;
		}
		else
		{
			_left->add(node, depth + 1);
		}
	}
	else
	{
		if (_right == nullptr)
		{
			_right = node;
		}
		else
		{
			_right->add(node, depth + 1);
		}
	}
}

std::string KDNode::toString() const
{
	std::stringstream ss{ "" };

	ss << _point->toString() << std::endl;

	_left != nullptr && ss << "left branch: " << _left->toString() << " ";
	_right != nullptr && ss << "right branch: " << _right->toString() << " ";

	ss << std::endl;

	return ss.str();
}