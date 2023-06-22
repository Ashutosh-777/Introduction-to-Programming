#include <iostream>
using namespace std;
int main()
{
     float f;
    cout<<"Enter Temperature in Fahreinhiet ";
    cin>>f;
    int c=0;
    c=(f-32)*(5/9.0);
    cout<<"Temperature in celcius is "<<c;
    int a;
    int b;
    cin >> a >> b;
    bool x=a==b;
    bool y=a>b;
    bool z=a<b;
    cout<<"are they equal"<<x<<endl;
    cout<<"is a greater"<<y<<endl;
    cout<<"is b greater"<<z<<endl;
    cout<<(a>b);
    return 0;
}