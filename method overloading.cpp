/*
*write program cpp program using method overloading
*Date : 20-feb-2022
*Abhishek sahu
*/
#include <iostream>
using namespace std;
class A
{
    public:
    void show(int x,int y)
    {
        cout<<"sum="<<x+y<<endl;
    }
    void show(int x,int y,int z)
    {
        cout<<"sum="<<x+y+z<<endl;
    }
    void show(int x,int y,int z,int p)
    {
        cout<<"sum="<<x+y+z+p<<endl;
    }
};
int main()
{
    A a;
    a.show(2,4,6);
    a.show(2,4,6,9);
    a.show(2,4);
    
}