#include <iostream>
using namespace std;
int main()
{
    int a ; int sum=0;
    cout << "enter numbers to be added (enter 0 to stop):\n";
    for(;;)
    {
        cin >> a;
        if(a == 0)
            break;
            if(a<0)
                continue;
        sum += a;
    }
    cout << "Sum = " << sum << endl;
}