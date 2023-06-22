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
    cin.getline(c,100);
    int len = string_length(c);
    int start=0;
    int end=len;
    while(start<end)
    {
        char temp=c[start];
        c[start]=c[end];
        c[end]=temp;
        start++;
        end--;
    }
    for(int i=0;i<=len;i++){
      cout<<c[i];
    }    
    return 0;
}