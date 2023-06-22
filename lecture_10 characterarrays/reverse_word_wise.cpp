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
   char c[1000];
   cin.getline(c,1000);
   int len = string_length(c);
   int space=0;
   for(int i=0;i<len;i++)
   {
    if(c[i]==' ') space++;
   }
   cout<<space;
   int no_of_word=space+1;
   int word[no_of_word];
   for(int i=len-1;i>=0;i--){

   }
    return 0;
}