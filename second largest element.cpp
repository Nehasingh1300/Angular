/*

Given an array of elements. Your task is to find the second maximum element in the array.

Input:
The first line of input contains an integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a single integer N which denotes the number of elements in the array. Second line of each test case contains N space separated integers which denotes the elements of the array.
Output:
For each test case in a new line print the second maximum element in the array. If there does not exist any second largest element, then print -1.


Constraints:
1<=T<=100
2<=n<=1000
1<=a[i]<=106


Example:
Input:
2
5
2 4 5 6 7
6
7 8 2 1 4 3
Output:
6
7

*/

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  //code
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int b[n];
      vector<int>a(n);
      for(int i=0;i<n;i++)
      {
          cin>>a[i];
      }
      sort(a.begin(),a.end());
     /* for(auto i=a.begin();i!=a.end();i++)
      {
          cout<<*i<<" ";
      }
      cout<<endl;*/
      if(n<2)
      cout<<-1<<endl;
      else
      {
     int i=1;
     while(i<n && (a[n-i]==a[n-(i+1)]))
     {
         i++;
     }
     if(i<n)
     {
     cout<<a[n-i-1]<<endl;
     }
     else
     cout<<-1<<endl;
      }
  }
  return 0;
}