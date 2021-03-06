// { Driver Code Starts
//Initial Template for C

#include <stdio.h> 


 // } Driver Code Ends
//User function Template for C

int searchInSorted(int arr[], int N, int K) 
{ 
    int low=0,high=N-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==K)
        return 1;
        else if(arr[mid]>K)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
       // Your code here
       
}

// { Driver Code Starts.


int main(void) 
{ 
    
    int t;
    scanf("%d", &t);
    while(t--){
        int n, k;
        scanf("%d%d", &n, &k);
        
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        
        printf("%d\n", searchInSorted(arr, n, k));

    }

	return 0; 
} 
  // } Driver Code Ends
