/*

You are given an array A, of N elements. Find minimum index based distance between two elements of the array, x and y.

Input :
The first line of input contains an integer T, denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. The first line of each test case contains an integer N denoting size array. Then in the next line are N space separated values of the array A. The last line of each test case contains two integers  x and y.

Output :
Print the minimum index based distance between x and y.

Your Task:
Complete the function minDist() which takes the array, n, x and y as input parameters and returns the minimum distance between x and y in the array. If no such distance is possible then return -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 <= T <= 100
1 <= N <= 105
0 <= A[i], x, y <= 105

Example:
Sample Input:
2
4
1 2 3 2
1 2
7
86 39 90 67 84 66 62 
42 12

Sample Output:
1
-1

Explanation:
Testcase1: x = 1 and y = 2. There are two distances between x and y, which are 1 and 3 out of which the least is 1.
Testcase2: x = 42 and y = 12. We return -1 as x and y don't exist in the array.

*/

int minDist(int a[], int n, int x, int y) {
    int minDist=n;
	int i=0;
	int j=0;
	int l=0;
	int k=0;
	int diff=0;
	int s[l];
	int f[k];
	
	while (i < n)
	{
		if (a[i] == x) {
			
			f[k]=i;
			k++;
		}
		if(i < n-1)
		    i++;
	}
	
	if (i < n) {
	    
	    while (j < n){
	        if (a[j] == y) {
			    
    			s[l]=j;
    			l++;
		    }
		    
		    if(j < n-1)
		        j++;
	    }
    
    	if (j < n) {
    		
    		for(int a=0; a<l; a++){ // for s[l] 
    		    for(int b=0; b<k; b++){ // for f[k]
    		        
    		        int diff=s[a]-f[b];
    		        
    		        if(diff<0){
    		            diff=-diff;
    		            
    		            if(minDist>diff){
    		                minDist = diff;
    		                return minDist;
    		            }
    		        }
    		        
    		    }
    		}
    	}
    	else {
    	    return -1;
    	}
	}
	else {
		return -1;
	}
}