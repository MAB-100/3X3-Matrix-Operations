#include<iostream>
#include<conio.h>
using namespace std;
int Addition();
int  Subtraction();
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
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			cout<<B[r][c]<<"\t";
		}
		cout<<"\n";
		
	}
		
	cout<<"CHOOSE ONE OF THE BELOW \n1.Addition \n2.Subtraaction \n3.EXIT"<<endl;
	cin>>x;
	if(x==1)
	{
		int Addition();
	}
	else if (x==2)
	{
		int subtraction();
	}
	else if(x==3)
	{
		exit(0);	
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
	
	
	return 0;
	
}

int Addition()
{
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			C[r][c]= A[r][c]+ B[r][c];
		}
	
	
	}
}
int Subtraction()
{
	for(r=0; r<=2; r++)
	{
		for(c=0; c<=2; c++)
		{
			C[r][c]= A[r][c]-B[r][c];
		}
	
	}
}




