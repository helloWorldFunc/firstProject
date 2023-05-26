#include <iostream>

using namespace std;

class Person
{
public:
	string name_;
	int age_;
	char gender_;

	Person(string name, int age, char gender)
	{
		name_ = name;
		age_ = age;
		gender_ = gender;

		cout << 
			"Object has been created at address: "
			<< this << '\n';
	}
	~Person()
	{
		cout << "Object has been destoyed. Its address was: " << this << '\n';
	}

	string getName()
	{
		return this->name_;
	}
};

int main()
{

}