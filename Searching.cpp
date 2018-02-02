#include<iostream>
#include<conio.h>
#include<Windows.h>
using namespace std;

class Searching
{
public :
	void binary()
	{
		int first,last,n,i,search,middle;
		int arr[100];
		cout<<"Enter Array Size : ";
		cin>> n;
		cout<<"\n";
		cout<<"\nEnter Array Elements : ";
		cout<<"\n";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"\nEnter Number you want to Search : ";
		cin>> search;
		first=0;
		last=n-1;
		middle=(first+last)/2;
		while(first<=last)
		{
			if(arr[middle]<search)
			{
				first=middle+1;
			}

			else if(arr[middle]==search)
			{
				cout<< search <<" Found at Location "<< middle+1 <<"\n";
				break;
			}
			else
			{
				last=middle-1;
			}
			middle=(first+last)/2;
		}
		if(first>last)
		{
			cout<<"Not Found "<< search <<" is not present in the list\n";

		}
		
	}

	void linear()
	{
		int arr[10], i, search, n, c=0, pos;
	cout<<"\nEnter the Array size : ";
	cin>>n;
	cout<<"\n";
	cout<<"\nEnter Array Elements : ";
	cout<<"\n";
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"\nEnter the number to be search : ";
	cin>>search;
	for(i=0; i<n; i++)
	{
		if(arr[i]==search)
		{
			c=1;
			pos=i+1;
			break;
		}
	}
	if(c==0)
	{
		cout<<"\nNumber not found..!!";
	}
	else
	{
		cout<<search<<"\nfound at position "<<pos;
	}
	}

	

};


void welcome()
	{
		char wel[7]={'W','E','L','C','O','M','E'};
		cout<<"  \t\t\t\t";
		for(int i=0;i<=7;i++)
		{
			cout<<wel[1] <<"  ";
			Sleep(80);
		}
		char to[2]={'T','O'};
		cout<<"\n\n\t\t\t\t\t";
		for(int i=0;i<2;i++)
		{
			cout<< to[i] <<"  ";
			Sleep(80);
		}

		char sea[9];
		cout<<"\n\n\t\t\t\t";
		for(int i=0;i<9;i++)
		{
			cout<< sea[i] <<" ";
			Sleep(80);
		}

	}


int  main()
{
	//welcome();
	cout << "\t\t************* Linear And Binary Searching *************\n\n";
	Searching s;
	start:
	cout<<"\n\nPress<1> For Linear Searching ";
	cout<<"\n\nPress<2> For Binary Searching ";
	cout<<"\n\nPress<3> For EXIT ";
	int choice;
	cout<<"\n\nEnter your Choice : ";
	cin>> choice;
	switch(choice)
	{
	case 1:
		s.linear();
		break;
	case 2:
		s.binary();
		break;

	case 3:
		exit(0);
		break;


	default:
		cout<<"\n\n\aEnter Valid Key ";
		break;
	}
	cout<<"\n\n";
	goto start;

	getch();
}

