#include <iostream>
using namespace std;
#include<string>
int main() {
	string st;int k=0;int s=0;
	cout<<"enter a string starting with z and continuing with o";
	cin>>st;
	for(int i=0;i<st.length();i++)
	{
		char a=st.at(i);
		if(a=='z')
		k++;
		if(a=='o')
		s++;
	}
	if(2*k==s)
	{
		cout<<"yes";
	}
	else
	cout<<"no";
	
}