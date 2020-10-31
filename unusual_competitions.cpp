#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	string s;
	cin>>s;
	int cft=0;
	for(i=0;i<n;i++)
		{	
			if(s[i]=='('){cft++;}
			else{cft--;}
		}
	
	if((cft!=0)||(n%2==1)){cout<<"-1\n";}

	


	else
	{

		int bp=0,ba=0,ans=0,cnt=0;
		for(i=0;i<n;i++)
		{	
			if(s[i]==')')
				{ba--;}
			else
				{ba++;}

			if(ba<0){cnt++;}
			if((bp<0)&&(ba==0))
				{cnt++;}
			bp=ba;
			
		}
		cout<<cnt<<"\n";
	}


  	return 0;
}
