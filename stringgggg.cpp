#include<iostream>
using namespace std;

class Kit{
	string name;
	public:
		void getString(string str)
		{
			name=str;
		}
		void displayStr()
		{
			cout<<name;
		}
		Kit operator + (const Kit & str)
		{
			Kit temp;
			temp.name= this ->name + " " + str.name;
			return temp;
		}
};
int main()
{
	Kit obj1,obj2,result;
	string str1;
	cout<<"enter first string:";
	getline(cin,str1);
	obj1.getString(str1);
	cout<<"enter second sring:";
	getline(cin,str1);
	obj2.getString(str1); 
	result=obj1+obj2;
	result.displayStr();
	return 0;
}
