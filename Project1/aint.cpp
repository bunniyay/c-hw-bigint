
#include "aint.hpp"
// constructor
aint::aint()
{
	this->sizeDeclared = 10;
	this->size = 0;
	this->ptr = new unsigned[10];
}
// copy constructor 1
aint::aint(unsigned u)
{
	size = 0;
	sizeDeclared = 10;
	ptr = new unsigned[10];

	if (u == 0)
	{
		size = 0;
	}

	else
	{
		this->size = 1;
		ptr[0] = u;
	}

}

long long aint::getSize() {
	return size; 
}

long long aint::getSizeDeclared() {
	return sizeDeclared;
}
	// copy constructor 2
aint::aint(const aint& other)
{
	size = other.size; 
	sizeDeclared = other.sizeDeclared; 
	ptr = other.ptr; 
}

//destructor
aint::~aint()
{
	delete[] ptr;
}
// copy assignment 1
aint& aint::operator=(unsigned u)
{
	size = 1; 
	ptr[0] = u;
	return *this;
}
//copy assignment 2
aint& aint::operator=(const aint& other) {

	return *this = aint(other); 
} 

// move assignment 
aint& aint::operator=(aint&& other) {
	if (this != &other) {
		delete this->ptr;
		this->ptr = other.ptr;
		this->size = other.size;
		this->sizeDeclared = other.sizeDeclared;
		other.ptr = new unsigned[10];
		other.size = 0;
		other.sizeDeclared = 10;
	}
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
	if (size == 0)	return true; 
	else 
	return false;
}

void aint::swap(aint &other)
{
	unsigned* temp; 
	temp = ptr; 
	ptr = other.ptr; 
	other.ptr = temp; 
	  
}
ostream& operator<<(ostream& os, const aint& out) {
	return os; 
}
istream& operator>>(istream& is, aint& in) {
	return is; 
}


