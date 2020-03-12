#include <iostream>

using namespace std;

class box
{
public:	
	int length;
	int width;
	int heigh;
	
	int volume()
	{
		cout<<length*width*heigh<<endl;
	}
	
	box(int=10,int=10,int=10);
	~box();
	
};

box::box(int l,int w,int h):length(l),width(w),heigh(h)
{
	cout<<"struct"<<endl;
}
box::~box()
{
	cout<<"this is desstruct "<<length<<endl;
}

box b3[10];
int main()
{
	
	box b1(20);
	
	b1.volume();
	
	box b2(30);
	b2.volume();
}