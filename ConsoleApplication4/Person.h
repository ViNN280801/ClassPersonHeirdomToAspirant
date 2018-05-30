#include <string>
#include <iostream>
using namespace std;
class Person
{
protected:
	string university;
private:
	string lastName;	
	string firstName;	
	string patronymic;	

	int yearOfBirth;	
	int gender;		
public:
	const int MALE = 0;
	const int FEMALE = 1;

	Person();
	Person(string lName, string fName, string pName);

	void setYearOfBirth(int year);
	void setGender(const int intGender);

	int getGender();
	inline int getAge();
	void toString();
	~Person();
};

class Aspirant:public Person
{
private:
	Person* leader;
	string rank;
public:
	Aspirant();

	void show();
	Aspirant(string name, string surname, string patronymic);

	~Aspirant();
};