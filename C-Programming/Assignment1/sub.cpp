#include<stdio.h>
#include "stdafx.h"

extern int res;

int sub(int x, int y)
{
	res = x - y;
	return res;
}
