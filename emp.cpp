#include<iostream>
using namespace std;

class emp{
	public:
		char name[30];
		int id;
		int salary;
		void get Data()
		{
			cout<<" Enter Name: ";
			cin.get(name,30);
			cout<<" Enter ID:";
			cin>>id;
			cout<<" Enter Salary:";
			cin>>salary;
		}
		void put Data
		{
			cout<<"Name: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
			cout<<"Salary: "<<salary<<endl;
		}
		friend int calc(emp obj[10]);
};


