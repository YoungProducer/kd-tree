#include "KDTree.h"

const void KDTree::add(KDNode* node)
{
	if (_rootNode == nullptr) _rootNode = node;
	else
	{
		_rootNode->add(node, 1);
	}
}

const void KDTree::add(KDPoint* point)
{
	KDNode* node = new KDNode(point);

	add(node);
}