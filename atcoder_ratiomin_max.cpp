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
int main()
{
    int n;
    cin>>n;
    float a[n];
    for(int p=0;p<n;p++){
        cin>>a[p];
    }
    int count = factorial(n)/(factorial(n-3)*factorial(3));
    for(int i=0;i<n;i++){
        for(int j=i++;j<n;j++){
            for(int k=j++;k<n;k++){

            }
        }
    }
    return 0;
}