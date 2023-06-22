#include <iostream>
#include <math.h>
using namespace std;
int main(){
    double  n;
    cin>>n;
    int a=1;
    int i=1;
    double p=0;
    while(a!=0){
        a=n/(10*i);
        i=10*i;
        p=p+1;
    }
   // p= no. of digits
   p--;
   double sum=0;
   double j=1;
   while(p<=0){
    sum = sum+( (n % (pow(10,j)))/(pow(10,j-1)))*pow(10,p);
    j++;

   }
   cout<<sum;
    return 0;
}