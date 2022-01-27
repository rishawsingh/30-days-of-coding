// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

 // } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        if(x==0)
        return 0;
        long long int low=1,high=x,mid,ans;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if(mid*mid>x)
                high=mid-1;
            
            else if(mid*mid<x)
            {
                ans= mid;
                low=mid+1;
            }
            else
            {
                ans=mid;
                break;
            }
            
        }
        return ans;
        // Your code goes here   
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}
  // } Driver Code Ends
