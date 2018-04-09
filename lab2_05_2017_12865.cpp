#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <GL/glut.h>
#include <algorithm>


using namespace std;

void main() {
	int num;
	vector<int> numList;

	while (std::cin >> num) {
		numList.push_back(num);
		
	}
	std::sort(numList.begin(), numList.end());
	std::reverse(numList.begin(), numList.end());
	
	cout << "ordered array" << endl;
	for (auto i : numList) {
		cout << i << endl;
	}
}