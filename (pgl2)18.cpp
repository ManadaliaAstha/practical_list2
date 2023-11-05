#include<iostream>
#include<conio.h>
using namespace std;
float area(float r, float PI=3.14);
int main()
{
	float r;

	cout<<"Enter Radius of given Circle :: ";
	cin>>r;

	area(r);

	return 0;

}
float area(float r, float PI)
{
	cout<<PI*r*r;
}
