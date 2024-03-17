//to calculate simple interest .

#include<iostream>
using namespace std;

main()
{
	float si,p,r,t;
	
	cout<<"\n********Calaculation of Simple Interest************\n";
	cout<<"\nEnter Principal Amount = ";
	cin>>p;
	cout<<"\nEnter Rate of Interest= ";
	cin>>r;
	cout<<"\nEnter Time Period= ";
	cin>>t;
	
	si=p*r*t/100;
	
	cout<<"\n Simple Interest = "<<si;
}