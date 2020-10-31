#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<stack>
using namespace std;
int main()
{
	int n,i,j;
	string s;
	cin>>n>>s;
	
	if(n%2==1)
	{cout<<"No\n";}
	
	else
	{
		int cnt=0;
		for(i=0;i<s.length();i++)
		{
			if(s[i]=='('){cnt++;}
			else{cnt--;}
		}

		if(cnt!=0)
		{cout<<"No\n";}
		
		else
		{
			stack<char> o,c;
			for(i=0;i<s.length();i++)
			{
				if(s[i]=='(')
				{o.push('(');}

				else
				{
					if(o.empty())
					{ c.push(')'); }

					else
					{o.pop();}
				}
			}

			if(((c.size()==1)&&(o.size()==1))||((c.size()==0)&&(o.size()==0)))
				{cout<<"Yes\n";}

			else
				{cout<<"No\n";}
		}

	}
	
  	return 0;
}
