#include<iostream>
using namespace std;


class Human
{
protected:

	string name;
	int age;

public:

	Human()
	{
		name = "Unknown";
		age = 0;
	}

	Human(string name, int age)
	{
		set_name(name);
		set_age(age);
	}

	void set_name(string name)
	{
		this->name = name;
	}

	void set_age(int age)
	{
		this->age = age;
	}

	string get_name()
	{
		return name;
	}

	int get_age()
	{
		return age;
	}
};

class Student : public Human
{
public:

	Student() : Human()
	{

	}

	Student(string name, int age) : Human(name, age)
	{

	}

	void study()
	{
		cout << "I study!" << endl;
	}
};


int main()
{
	Student a("Alex", 20);
	cout << a.get_name() << endl;
	a.study();
}