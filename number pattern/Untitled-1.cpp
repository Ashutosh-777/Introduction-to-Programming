#include <iostream>
using namespace std;
int main(){
int n;
cin >> n;
int i = 1;
while (i <= n){
    int j = 1;
    while (j <= n - i){
        cout << ' ';
        j++;
    }
    j = 1;
    int l = i;
    while (j <= i){
        cout << l;
        l = l + 1;
        j++;
    }
    j = i - 1;
    l = 2*i - 2;
    while (j >=1){
        cout << l;
        l = l - 1;
        j = j - 1;
    }
    cout << endl;
    i++;
}
}

