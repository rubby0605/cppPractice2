#ifndef test1
#define test1
struct polar
{
	double distance;
	double angle;
};
#include <iostream>
template <typename T>
void Swap(T &a, T &b);

	
template <typename T>
void Swap(T &a, T &b)
{
T temp;
temp = a;
a = b;
b = temp;
}
template <class T>
T absval(T a)
{
	T temp;
temp= a < 0 ? -a : a ;	
return temp;
}

struct blot {int a; char b[10];};


int main(void)
{	
	using namespace std;
	int i = 10;
	int j=20;
	std::cout<<"i"<<i<<"j"<<j;
	Swap(i,j);
	std::cout<<"i"<<i<<"j"<<j;
	double x = 10.25, y=20.25;
	decltype(x) w=90.25;
	decltype(x) typedef xtype;

	std::cout<<"x"<<x<<"y"<<y;
	Swap(x,y);
	std::cout<<"x"<<x<<"y"<<y;
	////
	const char* g="123";
	const char* h="1234567";
	std::cout<<"g"<<g<<"h"<<h;
	Swap(g,h);
	std::cout<<"g"<<g<<"h"<<h;
	////
	blot ruby ={32, "A"};
	////
	
	std::cout<<"x"<<absval(-x);
	return 0;
}
#endif
