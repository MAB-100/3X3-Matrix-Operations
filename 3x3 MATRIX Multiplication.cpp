#include<iostream>
#include<conio.h>
using namespace std;

void MULTIPLY(int A[3][3], int B[3][3])
{
	int C[3][3] , sum;
	
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
			for(int k=0; k<=2; k++)
			{
				sum = sum + A[i][k]*B[k][j];
			}
			
			C[i][j]= sum;
			sum = 0;
		}
	}
	
	for(int i=0; i<=2; i++)
		{
			for(int j=0; j<=2; j++)
			{
				cout<<C[i][j]<<"\t";
			}
		cout<<endl;	
		}
	
}
int main()
{
	int X[3][3] , Y[3][3];
	
	cout<<"ENTER THE VALUES FOR FIRST MATRIX"<<endl;
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
			cin>>X[i][j];
		}
	}
	
	cout<<"ENTER THE VALUES FOR SECOND MATRIX"<<endl;
	for(int i=0; i<=2; i++)
	{
		for(int j=0; j<=2; j++)
		{
			cin>>Y[i][j];
		}
	}
	
	MULTIPLY(X , Y);
	
}





