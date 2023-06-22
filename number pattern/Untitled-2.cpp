#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i = 1;
    while ( i <= (n + 1)/2 ){
        int j = 1;
        while (j <= (n + 1)/2 - i){
            cout << ' ';
            j++;
        }
        j = 1;
        while (j <= 2*i - 1){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
    while ( i > (n + 1)/2 && i <= n){
        int j = 1;
        while (j <= i - (n + 1)/2){
            cout << ' ';
            j++;
        }
        j = 1;
        while (j <= 2*(n - i) + 1){
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
}

