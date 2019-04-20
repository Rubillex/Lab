#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

	struct Student
	{
		int age;
		string name;
		
		void aging() 
		{
			age++;
			cout << "мне исполнилось " << age << " лет" << endl;
		}
		
		void print() const
		{
		cout << name << " " << age << endl;		
		}
		
//		void init(int _age, const string &_name) 
		Student(int _age, const string &_name) 
		{
			this -> name = _name;
			age = _age;
			cout << "Зачислен: " << name << " " << age << endl;
		}
		
		~Student()
		{
			cout << "Отчислен" << endl;
			print();
		}
	};
int main()
{
//	Student a;
//	a.print();
//	a.age = 18;
//	a.print();
//	a.aging();
//	a.print();
//	
//	Student b;
//	b.print();
//	b = a; // это очень плохо. Не делай так никагда
//	b.print();
//	
//	Student c;
//	c.init(17, string("Вася"));
//	c.print();
//	c.aging();

Student a(17, string("Петя"));
Student b(17, string(Вася));
	
	return 0;
}
