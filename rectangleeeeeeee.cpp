#include<iostream>
using namespace std;

class triangle{
	int base, height;
	float area;
	public:
		triangle(int b,int h)
		{
			base=b;
			height=h;
			area=0.5*base*height;
		}
		void print()
		{
			cout<<"Base: "<<base<<endl;
			cout<<"Height: "<<height<<endl;
			cout<<"Area of Triangle: "<<area<<endl;
		}
		int getbase()
		{
			return base;
		}
		int getheight()
		{
			return height;
		}
};

class rectangle{
	int width, length, area;
	public:
		void output()
		{
			cout<<"Length: "<<length<<endl;
			cout<<"Width: "<<width<<endl;
			cout<<"Area of rectangle: "<<area<<endl;
		}
		rectangle(triangle t)
		{
			width=t.getbase();
			length=t.getheight();
			area=width*length;
		}
};

int main()
{
	triangle t(200,300);
	rectangle r=t;
	t.print();
	r.output();
	return 0;
}
