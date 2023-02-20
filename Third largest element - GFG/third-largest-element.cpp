//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int a[], int n)
    {
         //Your code here
    int j=0;
    int maxi = INT_MIN;
         while(j<3){
             for(int i=0;i<n-j-1;i++){
                 if(a[i]>a[i+1])
                 swap(a[i],a[i+1]);
                 
             }
             j++;
             
         }
         return a[n-3];
    }

};

//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends