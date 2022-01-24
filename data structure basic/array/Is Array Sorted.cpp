// { Driver Code Starts
//Initial Template for C++


#include<iostream>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    //Complete this function
    int isSorted(int arr[],int n)
    {
        int i,c1=0,c2=0;
        for(i=0;i<n-1;i++)
        {
            if(arr[i]<=arr[i+1])
            c1++;
            else if(arr[i]>=arr[i+1])
            c2++;
        }
        if(c1==n-1 || c2==n-1)
        return 1;
        else 
        return 0;
      
      //Your code here
       
    }
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;
	while(T--) 
	{
	    int N;
	    cin>>N;
	    int arr[N];
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    Solution obj;
	    cout<<obj.isSorted(arr,N);
	    cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
