#include "Student.h"
#include <vector>


void main()
{
	setlocale(0, "ru");
	vector<SCollection> vs;
	fstream f;
	f.open("db.txt", ios::in);

	unsigned int tsID;
	string tname;
	string tsurname;
	string totch;
	Date tbirthday;
	string taddress;
	string ttel;
	unsigned short tkurs;
	Faculty tfak;

	if (f.is_open())
	{
		while (!f.eof())
		{
			f >> tsID >> tname >> tsurname >> totch >> tbirthday >> taddress >> ttel >> tkurs >> tfak;
			//vs.push_back(1, "asd", "asdas", "asdasd", "asasff", "42332442", 3);
			Student vTemp(tsID, tname, tsurname, totch, tbirthday, taddress, ttel, tkurs, tfak);
			vs.SCadd(vTemp);
			
			
			/*vs[k].setId(tsID);
			vs[k].setName(tname);
			vs[k].setSurname(tsurname);
			vs[k].setOtch(totch);
			vs[k].setBirthday(tbirthday);
			vs[k].setAddress(taddress);
			vs[k].setTel(ttel);
			vs[k].setKurs(tkurs);
			vs[k].setFaculty(tfak);
			k++;*/
		}
		f.close();
	}
	else
	{
		cout << "���������� ������� ���� ���� ������ db.txt" << endl;
	}
	

	cout << "\n����� ���������� � ������� ����� ���������.\n\n��� ������� �������?\n1. ���������� ���� ���������\n"
		"2. ���������� ��������� �� ������� ����������\n3. ���������� ��������� ��� ������� ����� � ����������\n"
		"4. ���������� ���������, ���������� ����� ��������� ����\n5. ��������� ������ � ����\n"
		"6. ��������� ������ � JSON ����\n7. �����"<< endl;

	
	system("pause");
}