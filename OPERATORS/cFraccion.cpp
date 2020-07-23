#include "cFraccion.h"

bool operator<(const cFraccion& f1, cFraccion& f2)
{

		if (((float)f1.num / f1.den) < ((float)f2.num / f1.den))
			return true;

		return false;
	
}
