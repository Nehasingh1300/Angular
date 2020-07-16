/*

Given a string S, write a program to count the occurrence of Lowercase characters, Uppercase characters, Special characters and Numeric values in the string.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a string S.
Output:
For each test case, print four lines. In the first line print the count of upper case letters, in the second line print the count of lower case letters, in the third line print the count of numbers and in the fourth line print the count of special characters present in the string S.

Note: The strings doesnot contains whitespaces.

Constraints:
1<=T<=100
1<=length(S)<=100000

Example:
Input:
2
#GeeKs01fOr@gEEks07
*GeEkS4GeEkS*
Output:
5
8
4
2
6
4
1
2

*/
#include <iostream>
#include <string>
using namespace std;

int main() {
 
 int testcases; // input number of test cases in this code
 cin>>testcases;
 while(testcases)
 {
     string s;
     cin>>s;
     int upper=0;
     int lower=0;
     int num=0;
     int spe=0;
     
     for (int i=0; i<s.length(); i++){
         
         //upper: 65-90
         if(s[i]>=65 && s[i]<=90){
             upper++;
         }
         
         //lower: 97-122
         else if(s[i]>=97 && s[i]<=122){
             lower++;
         }
         
         //number: 48-57
         else if(s[i]>=48 && s[i]<=57){
             num++;
         }
         
         //special char: 33-47
         else{
             spe++;
         }
     }
     
     cout<<upper<<"\n"<<lower<<"\n"<<num<<"\n"<<spe<<"\n";
     testcases--;
 }

 return 0;
}