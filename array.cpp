#include <iostream>
using namespace std;
class array
{
    public:
    int n;
    int arr[100];
    void input()
    {
       
        cout<<"Enter number of elements: ";
        cin>>n;
        cout<<"Enter elements: ";
        for(int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
    }
};
int main()
{
    array a;
    a.input();
    cout<<"The array elements are: ";
    for(int i = 0; i < a.n; i++)
    {
        cout<<a.arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}