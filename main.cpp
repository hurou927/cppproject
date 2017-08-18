//#include "stdc++.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include "my_gettime.hpp"
#include "my_random.hpp"
#include "my_util.hpp"
using namespace std;


int main(int argc ,char **argv){

	mrand mr;
	timeStamp ts(2,"ms");
	vector <int> vec(4096);

	EACH(k,vec)
		(*k)=mr.rand();

	ts.stamp();
	SORT(vec);
	ts.stamp();

	cout<<ts;

	int a=mr.rand();
    DEBUG(a);
    ERROR("error-message");

	return 0;
}