#include <iostream>
using namespace std;
int factorial(int n){
    int fact_n=1;
while(n>=1){
        fact_n=fact_n*n;
        n--;
    }
    return fact_n;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<factorial(n)/(factorial(n-r)*factorial(r));
    return 0;
}