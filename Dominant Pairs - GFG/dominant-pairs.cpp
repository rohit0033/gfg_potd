//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        sort(arr.begin(), arr.begin()+n/2);
        // reverse(arr.begin(), arr.begin()+n/2);
        sort(arr.begin()+n/2, arr.end());
        // reverse(arr.begin()+n/2, arr.end());
        int count = 0;
		int finalCount = 0;
		int i = 0;
		int j = n / 2;
		bool flag = false;
		for (i = 0; i < n / 2; i++) {
			while (j < n && arr[i] >= (5 * arr[j])) {
				count++;
				j++;
				flag = true;
			}
			if (flag) {
				finalCount = finalCount + count;
			}
		}

		return finalCount;
                
            
        
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends