#include<iostream>
#include<string>
using namespace std;
int main()
{
	int num[10] = {99,19,1,23,0,15,10,23,-26,-9};
	int temp ;
	for(int i = 0;i<9;i++)
	{ for(int i = 0;i<9;i++)
	  {if( num[i] > num[i+1])
		 { temp = num[i+1];
	      num[i+1] = num[i];
	      num[i] = temp;
	  }
	}
	}
	  for(int i=0; i <= 9;i++)
	{
	 cout<<num[i]<<" ";
	}
	cout<<"\nMaximun value is : "<<num[9]<<endl;
	return 0 ;
}