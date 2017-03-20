#include "Student.h"
#include <vector>
#include <Windows.h>

void print(Student s)
{
	cout << s;
}
void main()
{
	setlocale(0, "ru");
	//setlocaleCP(1251);
	//SCollection vs;
	vector<Student> vs;
	fstream f;
	f.open("stds.txt", ios::in);
	
	unsigned int tsID;
	string tname;
	string tsurname;
	string totch;
	Date tbirthday;
	string taddress;
	string ttel;
	unsigned short tkurs;
	Faculty tfak;
	Student ts;
	if (f.is_open())
	{
		while (!f.eof())
		{
			//f >> tsID >> tname >> tsurname >> totch >> tbirthday >> taddress >> ttel >> tkurs >> tfak;
			f >> ts;
			//vs.push_back(1, "asd", "asdas", "asdasd", "asasff", "42332442", 3);
			//Student vTemp(tsID, tname, tsurname, totch, tbirthday, taddress, ttel, tkurs,tfak);
			vs.push_back(ts);
			//cout << vs.back() << endl;
			

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

			f.close();
		}
	}
	else
	{
		cout << "Невозможно открыть файл базы данных db.txt" << endl;
	}
	
	for (auto it = 0; it < vs.size(); it++)
	{
		cout << vs[it] << endl;
	}

	//for_each(vs.begin(), vs.end(), print); //из библиотеки algorithm. если с третьего то +3. print - то что мы написали для вывода
	cout << "\nДобро пожаловать в систему учёта студентов.\n\nЧто желаете сделать?\n1. Отобразить всех студентов\n"
		"2. Отобразить студентов из нужного факультета\n3. Отобразить студентов для каждого курса и факультета\n"
		"4. Отобразить студентов, родившихся после заданного года\n5. Сохранить данные в базу\n"
		"6. Выгрузить данные в JSON файл\n7. Выход"<< endl;

	
	system("pause");
}