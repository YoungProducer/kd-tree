#include <vector>
#include <iostream>

#include "KDTree.h"
#include "KDNode.h"
#include "KDPoint.h"

int main(int argc, char* argv[]) {
	std::vector<std::vector<float>> mock_data = {
		{ 21, 42 },
		{ 10, 100 },
		{ 15, 200 },
		{ 20, 50 },
		{ 20, 300 }
	};

	KDTree* tree = new KDTree(2);

	for (const std::vector<float> point_data : mock_data)
	{
		tree->add(new KDPoint(point_data));
	}

	std::cout << tree->toString() << std::endl;

	return 1;
}