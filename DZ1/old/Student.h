#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include "Faculty.h"
#include "Date.h"
using namespace std;
class Student
{
private:
	unsigned int sID;
	string name;
	string surname;
	string otch;
	Date birthday;
	string address;
	string tel;
	unsigned short kurs;
	Faculty fak;
	
public:
	Student() { this->sID = 0; this->name = ""; this->surname = ""; this->otch = ""; this->birthday=birthday; this->address = ""; this->tel = ""; this->kurs = 0; this->fak=fak; }
	
	/*Student(unsigned int sID, string name, string surname, string otch, Date birthday, string address, string tel, unsigned short kurs, Faculty fak):
		sID(sID),
		name(name),
		surname(surname),
		otch(otch),
		birthday(birthday),
		address(address),
		tel(tel),
		kurs(kurs),
		fak(fak)
		{};*/

	
	Student(unsigned int sID, string name, string surname, string otch, Date birthday, string address, string tel, unsigned short kurs, Faculty fak)
	{
		this->sID = sID,
		this->name = name,
		this->surname = surname,
		this->otch = otch,
		this->birthday = birthday,
		this->address = address,
		this->tel = tel,
		this->kurs = kurs;
		this->fak = fak;
	};
	Student(const Student &obj)
	{
		this->sID = obj.sID;
		this->name = obj.name;
		this->surname = obj.surname;
		this->otch = obj.otch;
		this->birthday = obj.birthday;
		this->address = obj.address;
		this->tel = obj.tel;
		this->kurs = obj.kurs;
		this->fak = obj.fak;
	}
	
	void getStudent()
	{
		cout << sID << "\t" << name << "\t" << surname << "\t" << otch << "\t" << birthday << "\t" << tel << "\t" << kurs << "\t" << fak << endl;
	}
	void save2db()
	{
		//ostream out("db.txt");
	}
	void export2JSON()
	{

	}
	void setId(unsigned int sID) { sID = sID; }
	void setName(string name) { name = name; }
	void setSurname(string surname) { surname = surname; }
	void setOtch(string otch) { otch = otch; }
	void setBirthday(Date birthday) { birthday = birthday; }
	void setAddress(string address) { address = address; }
	void setTel(string tel) { tel = tel; }
	void setKurs(unsigned short kurs) { kurs = kurs; }
	void setFaculty(Faculty fak) { fak = fak; }

};
class SCollection
{
private:
	vector<Student> sVec;
public:
	void ShowAllStudents()
	{

	}
	void SCadd(Student obj)
	{
		sVec.push_back(obj);
	}
};