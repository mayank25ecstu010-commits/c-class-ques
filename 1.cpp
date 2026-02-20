#include<iostream>
using namespace std;
#include<string>
int main()
{
    string st="mayank m";
    cout<<st.size()<<" "<<st.length()<<endl;
    cout<<st[0]<<st.at(1)<<endl;
    cout<<st.front()<<st.back()<<endl;
    st+="rohilla";
    st.append(" :)");
    cout<<st<<endl;
    st.insert(0,"hello ");
    cout<<st;
    st.erase(6,3);
    st.clear();
    cout<<st<<endl;
    st="mayank rohilla";
    cout<<"the element is"<<st.find("m")<<endl;
    cout<<"the element is"<<st.rfind("a")<<endl;
    string sub=st.substr(0,6);
    string a="apple";
    string b="banana";
    if(a==b)
)
    

}