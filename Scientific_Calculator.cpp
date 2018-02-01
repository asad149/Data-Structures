#include<iostream>
#include<conio.h>
#include <windows.h>
#include<math.h>
using namespace std;

class Input
{
public :
	double a,b,c,total;
	long long x;
	double square(double d)
	{
	
		return total=a*a;
	}

	double cube(double d)
	{
	
		return total=a*a*a;
	}

	long long fact(long long x)
	{
		if(x>1)
		{
			return x*fact(x-1);
		}
		else
		{
			return 1;
		}
	}
		void summation()
		{
			double ar[100];
			double sum=0;
			int n;
			cout << "\nEnter Number of Elements : ";
			cin >> n;
			cout << "\n";
			for(int i=0;i<n;i++)
			{
				cin >> ar[i];
				sum+=ar[i];
			}
			cout << "\nSummation = " << sum/n;
		

		}
	
};


void welcome (void)
{
	char wel [7]={'W','E','L','C','O','M','E'};
	cout << "  \t\t\t\t";
	for(int i=0;i<7;i++)
	{
	
		cout << wel[i] << "  ";
		
		Sleep(80);
	}
	char to [2]={'T','O'};
		cout << "\n\n\t\t\t\t\t";
	for(int i=0;i<2;i++)
	{
	
		cout << to[i] << "  ";
		
		Sleep(80);
	}
	char sci [10]={'S','C','I','E','N','T','I','F','I','C'};
	cout << "\n\n\t\t\t\t";
	for(int i=0;i<10;i++)
	{
	
		cout << sci[i] << " ";
		
		Sleep(80);
	}

	char cal [10]={'C','A','L','C','U','L','A','T','O','R'};
	cout << "\n\n\t\t\t\t";
	for(int i=0;i<10;i++)
	{
	
		cout << cal[i] << " ";
		
		Sleep(80);
	}

}




int main()
{
	welcome();
	start :
	Input i;
	cout << "\nPress <1> For Addition ";
	cout << "\nPress <2> For Subtraction ";
	cout << "\nPress <3> For Multiplication ";
	cout << "\nPress <4> For Division ";
	cout << "\nPress <5> For Calculating Power ";
	cout << "\nPress <6> For Calculating Square ";
	cout << "\nPress <7> For Calculating Cube ";
	cout << "\nPress <8> For Calculating Factorial ";
	cout << "\nPress <9> For Calculating Floor ";
	cout << "\nPress <10> For Calculating Ceil ";
	cout << "\nPress <11> For Calculating Log ";
	cout << "\nPress <12> For Calculating Sin ";
	cout << "\nPress <13> For Calculating Cos ";
	cout << "\nPress <14> For Calculating Tan ";
	cout << "\nPress <15> For Summation ";
	cout << "\nPress <16> For Calculating Square Root ";
	cout << "\nPress <17> For Exit ";
	int choice;
	cout << "\n\nEnter Your Choice : ";
	cin >> choice;
	switch(choice)
	{
	case 1 :
		cout << "\nEnter First Number : ";
		cin >> i.a;
		cout << "\nEnter Second Number : ";
		cin >> i.b;
		i.c=i.a+i.b;
		cout << "\nAddition = " << i.c;
		break;

			case 2 :
		cout << "\nEnter First Number : ";
		cin >> i.a;
		cout << "\nEnter Second Number : ";
		cin >> i.b;
		i.c=i.a-i.b;
		cout << "\nSubtraction = " << i.c;
		break;

			case 3 :
		cout << "\nEnter First Number : ";
		cin >> i.a;
		cout << "\nEnter Second Number : ";
		cin >> i.b;
		i.c=i.a*i.b;
		cout << "\nMultiplication = " << i.c;
		break;

			case 4 :
		cout << "\nEnter First Number : ";
		cin >> i.a;
		cout << "\nEnter Second Number : ";
		cin >> i.b;
		i.c=i.a/i.b;
		cout << "\nDivision = " << i.c;
		break;

			case 5:
				cout << "\nEnter First Number : ";
		cin >> i.a;
		cout << "\nEnter Second Number : ";
		cin >> i.b;
		cout << "\nAnswer = " << pow(i.a,i.b);
		break;

			case 6:
				cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\n";
				cout << "Square = " << i.square(i.a);
				break;

				case 7:
				cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\n";
				cout << "Cube = " << i.cube(i.a);
				break;

				case 8:
					cout << "\nEnter Any Number : ";
					cin >> i.x;
					cout << "\nFactorial = " << i.fact(i.x);
					break;

				case 9:
					cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\nFloor = " << floor(i.a);
				break;

				case 10:
					cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\nFloor = " << ceil(i.a);
				break;

				case 11:
					cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\nLog = " << log(i.a);
				break;

				case 12:
					cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\nSin " << i.a << " = "<< sin(i.a);
				break;

				case 13:
					cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\nCos " << i.a << " = "<< cos(i.a);
				break;

				case 14:
					cout << "\nEnter Any Number : ";
				cin >> i.a;
				cout << "\nTan " << i.a << " = "<< tan(i.a);
				break;

				case 15:
					i.summation();
				break;

				case 16:
					cout << "\nEnter Any Number : ";
					cin >> i.a;
					cout << "\nSquare Root = " << sqrt(i.a);
						break;

				case 17:
					exit(0);
					break;
						
	}
	cout << "\n\n";
	goto start;
	getch();
}