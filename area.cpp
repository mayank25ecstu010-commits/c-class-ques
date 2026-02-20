#include <iostream>
using namespace std;
class area
{
    public:
    void areaoftriangle()
    {
        float b, h;
        cout<<"Enter the base and height of the triangle: ";
        cin>>b>>h;
        cout<<"Area of the triangle is: "<<0.5*b*h<<endl;
    }
};
int main()
{
    area a;
    a.areaoftriangle();
    return 0;


    
}