// { Driver Code Starts
//Initial Template for C

#include <stdio.h>


 // } Driver Code Ends
//User function Template for C

// Function to find element with more appearances between two elements in an
// array.

int min(int a, int b)
{
    if(a<b)
    return a;
    else return b;
}
int majorityWins(int arr[], int n, int x, int y) {
    int countx=0,county=0,i,res;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        countx++;
        else if(arr[i]==y)
        county++;
    }

    if(countx==county)
    {
        res= min(x,y);
    }
    if(countx>county)
    {
        res= x;
    }
    if(countx<county)
    {
        res= y;
    }
    return res;
    
 
    // code here

    
}

// { Driver Code Starts.
int main() {

    int t; // Testcases
    scanf("%d", &t); // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n; // Size of array
        scanf("%d", &n); // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n; i++) // Running a loop to input all elements of arr
            scanf("%d", &arr[i]);

        int x, y; // declare x and y
        scanf("%d%d", &x, &y); // input x and y
        printf("%d\n", majorityWins(arr, n, x, y)); // calling the function that you complete
    }

    return 0;
}  // } Driver Code Ends
