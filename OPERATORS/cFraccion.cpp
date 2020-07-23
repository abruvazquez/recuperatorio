#include "cFraccion.h"

bool operator<(const cFraccion& f1, cFraccion& f2)
{

		if (((float)f1.num / f1.den) < ((float)f2.num / f1.den))
			return true;

		return false;
	
}

cFraccion* operator*(const cFraccion& f1, const cFraccion& f2)
{
	return new cFraccion(f1.num * f2.num, f1.den * f2.den);
}
