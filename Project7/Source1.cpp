#include <iostream>
using namespace std;
/*Реализуйте класс “Студент”. Необходимо хранить в переменных-членах класса: 
ФИО, дату рождения, контактный телефон, город, страну, название учебного заведения, номер группы. 
Реализуйте функции-члены класса для ввода данных, вывода данных, реализуйте аксессоры для доступа к отдельным переменным-членам. 
Добавьте необходимые конструкторы, деструктор.
*/
class Student
{
	char* fullname;
	char* date;
	char* phonenumber;
	char* city;
	char* country;
	char* school;
	char* group;
public:
	Student()
	{
		fullname = nullptr;
		date = nullptr;
		phonenumber = nullptr;
		city = nullptr;
		country = nullptr;
		school = nullptr;
		group = nullptr;
	}
	Student(const char* Fullname, const char* Date, const char* Phonenumber, const char* City, const char* Country, const char* School, const char* Group) // construct with param
	{
		fullname = new char[strlen(Fullname) + 1];
		strcpy_s(fullname, strlen(Fullname) + 1, Fullname);


		date = new char[strlen(Date) + 1];
		strcpy_s(date, strlen(Date) + 1, Date);

		phonenumber = new char[strlen(Phonenumber) + 1];
		strcpy_s(phonenumber, strlen(Phonenumber) + 1, Phonenumber);

		city = new char[strlen(City) + 1];
		strcpy_s(city, strlen(City) + 1, City);
		
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);

		school = new char[strlen(School) + 1];
		strcpy_s(school, strlen(School) + 1, School);

		group = new char[strlen(Group) + 1];
		strcpy_s(group, strlen(Group) + 1, Group);
	}

	void Input()
	{
		char buff[100];

		cout << "Fullname: ";
		cin >> buff;
		SetF(buff);

		cout << "Date: ";
		cin >> buff;
		SetD(buff);

		cout << "Phonenumber: ";
		cin >> buff;
		SetPh(buff);

		cout << "City: ";
		cin >> buff;
		SetC(buff);

		cout << "Country: ";
		cin >> buff;
		SetCo(buff);

		cout << "School: ";
		cin >> buff;
		SetS(buff);

		cout << "Group: ";
		cin >> buff;
		SetG(buff);

	}

	void SetF(const char* Fullname)
	{
		if (fullname != nullptr)
		{
			delete[] fullname;
		}
		fullname = new char[strlen(Fullname) + 1];
		strcpy_s(fullname, strlen(Fullname) + 1, Fullname);
	}
	void SetD(const char* Date)
	{
		if (date != nullptr)
		{
			delete[] date;
		}
		date = new char[strlen(Date) + 1];
		strcpy_s(date, strlen(Date) + 1, Date);
	}
	void SetPh(const char* Phonenumber)
	{
		if (phonenumber != nullptr)
		{
			delete[] phonenumber;
		}
		phonenumber = new char[strlen(Phonenumber) + 1];
		strcpy_s(phonenumber, strlen(Phonenumber) + 1, Phonenumber);
	}
	void SetC(const char* City)
	{
		if (city != nullptr)
		{
			delete[] city;
		}
		city = new char[strlen(City) + 1];
		strcpy_s(city, strlen(City) + 1, City);
	}
	void SetCo(const char* Country)
	{
		if (country != nullptr)
		{
			delete[] country;
		}
		country = new char[strlen(Country) + 1];
		strcpy_s(country, strlen(Country) + 1, Country);
	}
	void SetS(const char* School)
	{
		if (school != nullptr)
		{
			delete[] school;
		}
		school = new char[strlen(School) + 1];
		strcpy_s(school, strlen(School) + 1, School);
	}
	void SetG(const char* Group)
	{
		if (group != nullptr)
		{
			delete[] group;
		}
		group = new char[strlen(Group) + 1];
		strcpy_s(group, strlen(Group) + 1, Group);
	}

	char* GetF()
	{
		return fullname;
	}
	char* GetD()
	{
		return date;
	}
	char* GetPh()
	{
		return phonenumber;
	}
	char* GetC()
	{
		return city;
	}
	char* GetCo()
	{
		return country;
	}
	char* GetS()
	{
		return school;
	}
	char* GetG()
	{
		return group;
	}
	

	void Output()
	{
		cout << "Fullname: " << GetF() << endl;
		cout << "Date: " << GetD() << endl;
		cout << "Phonenumber: " << GetPh() << endl;
		cout << "City: " << GetC() << endl;
		cout << "Country: " << GetCo() << endl;
		cout << "School: " << GetS() << endl;
		cout << "Group: " << GetG() << endl;
	}

	~Student()
	{
		delete[] fullname;
		delete[] date ;
		delete[] phonenumber ;
		delete[] city ;
		delete[] country ;
		delete[] school ;
		delete[] group ;
	}

};

int main()
{

	Student student1("Arina", "27.01.2006", "0661937599", "Odesa", "Ukraine", "It Step", "KH-P-231");
	student1.Output();

	Student student2;
	student2.Input();
	student2.Output();

	system("pause");
}