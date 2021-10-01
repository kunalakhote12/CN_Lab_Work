#include<iostream>
#include<stdlib.h>
using namespace std;

void decToBin( int binArr[][8] , int row )
{
	int num = binArr[row][0];
	int index = 7 ;
    while (index >= 0 ) 
	{
        binArr[row][index] = num % 2 ;
        num = num / 2 ;
        index-- ;
    }
}

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
	
	for( int row = 0 ; row<4 ; row++ )
	{
		decToBin( binary , row ) ;
	}
	
	cout<<"IP in Binary Decimal Notation: ";
	for( int row = 0 ; row < 4 ; row++ )
	{
		for( int column = 0 ; column < 8 ; column++ )
			cout<<binary[row][column];
		
		cout<<" ";
	}	
		
}
