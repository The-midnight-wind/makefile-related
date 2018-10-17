#include <iostream>
#include <vector>
#include "fzh.h"
#include "hzf.h"

using namespace std;


int printVec(vector <int> vec)
{
	for(vector<int>::iterator ite=vec.begin();ite!=vec.end();ite++)
	{
		cout<<*ite<<" ";
	}
	cout<<endl;
}


int printVecR(vector <int> vec)
{
	for(vector<int>::reverse_iterator ite=vec.rbegin();ite!=vec.rend();ite++)
	{
		cout<<*ite<<" ";
	}
	cout<<endl;
}


