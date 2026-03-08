#include <iostream>
using namespace std;

int main() {
   long long n;
   cin>>n;
   long long arr[n];
   long long tempSum = 0;
   for(int i=0;i<=n-2;i++){
    cin>>arr[i];
    tempSum += arr[i];
   }
   long long sum;
   sum = n*(n+1)/2;
   cout<<sum-tempSum;
}