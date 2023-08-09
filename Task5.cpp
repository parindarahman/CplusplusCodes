
/*
Name Parinda Rahman
ID 1931804042
Course cse225L section2
Date 04/11/2020
*/
#include <iostream>
using namespace std;

int main()
{
    int amount, total;
	cout<<"Enter the amount: "<<endl;
	cin>>amount;

	total = (int)amount/100;

	cout<<"There are: "<<endl;

	cout<<total<<" Note(s) of 100.00\n"<<endl;

	amount = amount-(total*100);

	total = (int)amount/50;
	cout<<total<<" Note(s) of 50.00\n"<<endl;
	amount = amount-(total*50);

	total = (int)amount/20;
		cout<<total<<" Note(s) of 20.00\n"<<endl;

	amount = amount-(total*20);

	total = (int)amount/10;
    cout<<total<<" Note(s) of 10.00\n"<<endl;

	amount = amount-(total*10);

	total = (int)amount/5;
    cout<<total<<" Note(s) of 5.00\n"<<endl;

	amount = amount-(total*5);

	total = (int)amount/2;

    cout<<total<<" Note(s) of 2.00\n"<<endl;

	amount = amount-(total*2);

	total = (int)amount/1;

	cout<<total<<" Note(s) of 1.00\n"<<endl;

	return 0;
}


