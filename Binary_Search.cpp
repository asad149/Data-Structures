#include<iostream>
#include<conio.h>
using namespace std;
int main()
{

	int arr[50],n,middle,first,last,search,i;
	cout << "Enter Number of Elements : ";
	cin >> n;
	cout << "\n";
	for(i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	cout << "\nEnter Number To Find : ";
	cin >> search;
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
			cout << search << "Found at Location " << middle+1 << "\n";
			break;
		}

		else
		{
			last=middle-1;
		}
		middle=(first+last)/2;
	
	}
	if(first > last)
	{
		cout << "Not Found " << search << "is not present in the list";
	}
	getch();

}