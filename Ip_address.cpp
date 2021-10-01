#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int binary[4][8] ;
	
	cout<<"Enter the IP in Dotted Decimal Notation:\nEnter first octet:";
	cin>>binary[0][0];
	cout<<"Enter second octet:";
	cin>>binary[1][0];
	cout<<"Enter third octet:";
	cin>>binary[2][0];
	cout<<"Enter fourth octet:";
	cin>>binary[3][0];
	
	if( binary[0][0] >= 0 && binary[0][0] <= 127 )	
		cout<<"It is Class A address.\n";
	else if( binary[0][0] >= 128 && binary[0][0] <= 191 )
		cout<<"It is Class B address.\n";	
	else if( binary[0][0] >= 192 && binary[0][0] <= 223 )
		cout<<"It is Class C address.\n";
	else if( binary[0][0] >= 224 && binary[0][0] <= 2399 )
		cout<<"It is Class D address.\n";
	else if( binary[0][0] >= 240 && binary[0][0] <= 255 )
		cout<<"It is Class E address.\n";
}

