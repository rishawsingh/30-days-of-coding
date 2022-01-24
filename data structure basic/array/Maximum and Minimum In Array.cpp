// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Complete the below functions
int maximumElement(int arr[],int n)
{
    int i,max=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    return max;
    //Your code here
}

int minimumElement(int arr[],int n)
{
    int i,min=INT_MAX;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        min=arr[i];
    }
    return min;
    //Your code here
}

// { Driver Code Starts.


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<maximumElement(arr,n)<<" "<<minimumElement(arr,n)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
