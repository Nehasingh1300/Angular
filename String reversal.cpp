/*

Given strings s1 and s2, you need to find if s2 is a rotated version of the string s1. The strings are lowercase.

Input:
The first line of the input contains a single integer T, denoting the number of test cases. Then T test case follows. Each testcase contains two lines for s1 and s2.

Output:
For each testcase, in a new line, you need to print 1 if s2 is a rotated version of s1; else print 0.

Constraints:
1 <= T <= 103
1 <= |s1|, |s2| <= 107

Example:
Input:
4
geeksforgeeks
forgeeksgeeks
mightandmagic
andmagicmigth
mushroomkingdom
itsamemario
geekofgeeks
geeksgeekof

Output:
1
0
0
1

*/


# include <bits/stdc++.h> 
using namespace std; 
  
/* Function checks if passed strings (str1 
   and str2) are rotations of each other */
bool areRotations(string str1, string str2) 
{ 
   /* Check if sizes of two strings are same */
   if (str1.length() != str2.length()) 
        return false; 
  
   string temp = str1 + str1;
   /*if str2 is found so continue*/
  return (temp.find(str2) != string::npos); 
} 
  
/* Driver program to test areRotations */
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
   string str1 = "", str2 = "";
   cin>>str1>>str2;
   if (areRotations(str1, str2)) 
     printf("1\n"); 
   else
      printf("0\n"); 
   }
   return 0; 
} 