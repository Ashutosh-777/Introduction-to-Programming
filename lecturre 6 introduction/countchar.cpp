#include <iostream>
using namespace std;
int main(){
    char c;
    int no_of_char=0;
    int no_of_digits=0,no_of_spaces=0;
    while(c!='$'){
    c =cin.get();
        if(48<=c&&c<=57){
            no_of_digits++;
        }
        if((65<=c&&c<=90)||(97<=c&&c<=122)){
            no_of_char++;
        }
        if(c==' '){
            no_of_spaces++;
        }
    }
    cout<<no_of_char<<endl<<no_of_digits<<endl<<no_of_spaces<<endl;
    return 0;
}