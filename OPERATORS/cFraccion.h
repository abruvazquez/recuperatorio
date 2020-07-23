#pragma once
#include <string>
#include <string.h>
#include <iostream>
#include<ostream>

using namespace std;
class cFraccion
{
protected:
	int num, den;

public:
	cFraccion(int N, int D)
	{
		num = N;
		den = D;
	}
	bool operator==(cFraccion& f)
	{
		if (num == f.num && den == f.den)
			return true;

		return false;
	}
	bool operator==(float f)
	{
		if ((float)num / den == f)
			return true;

		return false;
	}
	bool operator==(string s)
	{
		string aux = to_string(num) + "/" + to_string(den);
		if (aux == s)
			return true;

		return false;
	
	}
	bool operator!= (cFraccion& f)
	{
		return !(*this == f);
	}
	/*friend bool operator > (const cFraccion& f1, cFraccion& f2);*/
    bool operator > (cFraccion& f2)
	{
		return !(*this < f2) && (*this != f2);
	}
	friend bool operator< (const cFraccion& f1, cFraccion& f2);
};
bool operator < (const cFraccion& f1, cFraccion& f2);
	

	

