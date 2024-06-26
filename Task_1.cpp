#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
int main()
{
	cout<<"---------------------------------------";
	cout<<"GUESSING RANDOM NUMBER";
	cout<<"---------------------------------------\n";
	int mynum,usernum;
	srand(time(NULL));
	mynum=rand()%10;
	cout<<"can you guess what is my number(0-9)\n";
	while(1){

	cout<<"enter your guess no.\n";
	cin>>usernum;
	
	if(mynum==usernum)
	{
		cout<<"you guess correct!!\n";
	return 0;
	}
	else if(mynum>usernum)
	{
		cout<<"my no. is greater than"<<usernum <<"\n try again!\n";
	}
	else 
	{
	cout<<"my no. is smaller than"<<usernum<<"\n try again! \n";
	}
}

}


