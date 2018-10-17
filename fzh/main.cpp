#include <iostream>
#include <vector>
#include "fzh.h"
#include "hzf.h"


using namespace std;

int main()
{
	int array[]={1,2,3,4,5};
	vector<int> vec;
	vec.assign(array,array+5);
	
	printVec(vec);	
	printVecR(vec);
	return 0;
}
