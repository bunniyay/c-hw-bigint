
#include "aint.h"

aint::aint()
{
	size = new size_t[64];
}

aint::aint(unsigned u)
{
	if (u == 0)
	{
		size = nullptr;
	}
	else
	{
		int i i; = 0;
		while (i > 0)
		{

		}

	}
}

aint::aint(const aint& other)
{

}

aint::~aint()
{
	delete[] data;
}

aint& aint::operator=(unsigned u)
{
	return *this;
}

bool aint::operator<(const aint & other) const
{
	return false;

}

bool aint::operator>(const aint & other) const
{
	return false;

}

bool aint::operator<=(const aint & other) const
{
	return false;

}

bool aint::operator>=(const aint & other) const
{
	return false;
}
bool aint::operator==(const aint & other) const
{
	return false;

}

bool aint::operator!=(const aint & other) const
{
	return false;
}

aint& aint::operator+=(const aint& other)
{
	return *this;
}

aint& aint::operator-=(const aint& other)
{
	return *this;
}

aint& aint::operator*=(const aint& other)
{
	return *this;
}

aint& aint::operator/=(const aint& other)
{
	return *this;
}

aint& aint::operator%=(const aint& other)
{
	return *this;
}

aint& aint::operator<<=(const size_t& val)
{
	return *this;
}

aint& aint::operator>>=(const size_t& val)
{
	return *this;
}

aint& aint::operator+(const aint& other)
{
	return *this;
}

aint& aint::operator-(const aint& other)
{
	return *this;
}

aint& aint::operator*(const aint& other)
{
	return *this;
}

aint& aint::operator/(const aint& other)
{
	return *this;
}

aint& aint::operator%(const aint& other)
{
	return *this;
}

aint& aint::operator<<(const size_t& val)
{
	return *this;
}

aint& aint::operator>>(const size_t& val)
{
	return *this;
}


bool aint::zero() const
{
	return false;
}

void aint::swap(aint &other)
{
	 unsigned 
}

