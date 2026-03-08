#include <iostream>
using namespace std;

int main() {
   string s;
   cin>>s;
   int m = 1;
   char curr=s[0];
   int temp = 1;
   for(int i=1; i<s.size(); i++){
    if(s[i] == curr){
        temp++;
    } else {
        temp = 1;
        curr = s[i];
    }
    m = max(temp,m);
   }
   cout<<m;  
}