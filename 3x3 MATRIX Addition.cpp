#include<iostream>
#include<conio.h>
using namespace std;
int r, c , x, A[3][3] , B[3][3] , C[3][3];

int main()
{
	cout<<"ENTER VALUES FOR 1ST MATRIX:"<<endl;
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			cin>>A[r][c];
		}	
	}
	cout<<"1ST MATRIX:"<<endl;
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			cout<<A[r][c]<<"\t";
		}
		cout<<"\n";
	}
	
	cout<<"ENTER VALUES FOR 2ND MATRIX: "<<endl;
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			cin>>B[r][c];
		}
	}
	cout<<"2ND MATRIX: "<<endl;
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			cout<<B[r][c]<<"\t";
		}
		cout<<"\n";
	}
	
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			C[r][c]= A[r][c]+ B[r][c];
		}
	
	}

	cout<<"THE RESULTANT MATRIX IS: "<<endl;
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			cout<<C[r][c]<<"\t";
		}
		cout<<"\n";
	}	
}




