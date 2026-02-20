#include <iostream>
#include <string>
using namespace std;
int main() {
	string st;
	cout<<"enter a string in lowercase";
	cin>>st;
	string str="";
	for(int i=st.length()-1;i>=0;i--)
	{
		char a=st.at(i);
		str+=a;
	}
	if(st==str)
	cout<<"yes";
	else
	cout<<"no";
}