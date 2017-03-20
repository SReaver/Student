#pragma once
#include <string>
using namespace std;

class Faculty
{
private:
	short fID;
	string fLabel;
public:
	Faculty() { fID = 0; fLabel = ""; };
	Faculty(short fID, string fLabel)
	{
		this->fID = fID;
		this->fLabel = fLabel;
	}
	string getFaculty()
	{
		return fLabel;
	}
	bool operator== (Faculty f1) //оператор сравнения
	{
		if (f1.fLabel == fLabel)
		{	return true;	}
		else
		{	return false;	}
	}
	friend ostream& operator<<(ostream& out, const Faculty& fak);
	friend istream &operator >> (istream& in, Faculty &f);
	Faculty(const Faculty &obj) //оператор копирования
	{
		this->fID = obj.fID;
		this->fLabel = obj.fLabel;
	}
};

ostream& operator<<(ostream& out, const Faculty& fak)
{
	out << fak.fLabel<<endl;
	return out;
}
istream &operator >> (istream& in, Faculty &f)
{
	in >> f.fLabel;
	return in;
}