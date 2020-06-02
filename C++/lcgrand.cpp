#include<iostream>
#include "lcgrand.h"
using namespace std;
int random_integer(float prob_distrib[])
{
	int i;
	float u;

	u=lcgrand(1);
	for (i=1; u>=prob_distrib[i];++i);
	return i;
}
