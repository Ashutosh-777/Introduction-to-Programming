#include <iostream>
using namespace std;
int string_length(char name[])
  {
  int count =0;
  int i=0;
  while(name[i]!='\0'){
    count++;
    i++;
  }
  return count;
  }
int main(){
    char c[100];
    string s;
    cin.getline(c,100);
    int length =string_length(c);
    for(int i=0;i<length;i++)
    {
        if(c[i]==' ') continue;
        else cout<<c[i];
    }
    
    return 0;
}