#include <iostream>
using namespace std;

int main() {
   long long n;
   cin>>n;
   long long arr[n];  
   long long steps = 0; 
   for(int i=0;i<n;i++){
    cin>>arr[i];   
    while(arr[i]<arr[i-1] && i!=0){
        arr[i]++;
        steps++;
    }
   }
   cout<<steps;
}