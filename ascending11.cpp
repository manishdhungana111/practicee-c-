#include<iostream>
using namespace std;

template <typename t>
void ascending(t num)
{
	t a[20];
	t temp=0;
	int i=0,j=0;
	for(i=0;i<num;i++)
	{
		cin>>a[i];
	} 
	for(i=0;i<=num;i++)
	{
		for(j=i+1;j<=num;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Ascending order of given input: ";
	for(i=0;i<num;i++)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	int n;
	cout<<"Enter the ascending number to be sorted: "<<endl;
	cin>>n;
	ascending<int>(n);
	return 0;
}
	
	
	
	


