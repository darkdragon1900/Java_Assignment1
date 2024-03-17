//to calculate compound interest 

#include<iostream>
#include<cmath>
using namespace std;

main()
{
	float ci,p,r,t,amt;
	
	cout<<"\n********Calaculation of Compound Interest************\n";
	cout<<"\nEnter Principal Amount = ";
	cin>>p;
	cout<<"\nEnter Rate of Interest= ";
	cin>>r;
	cout<<"\nEnter Time Period= ";
	cin>>t;
	
	amt=p*(pow((1+r/100),t));
	cout<<"\n Total Amount  = "<<amt;
	
	ci=amt-p;
	
	cout<<"\n Compound Interest = "<<ci;
}