//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        // Create a stack to store the integers
    stack<int> stack;
    
    // Iterate over the input vector
    for(int num : arr) {
        // If the stack is empty, push the integer onto the stack
        if(stack.empty()) {
            stack.push(num);
        } else {
            // If the integer has a different sign than the top of the stack, pop the top element
            if((stack.top() >= 0 && num < 0) || (stack.top() < 0 && num >= 0)) {
                stack.pop();
            } else {
                // Otherwise, push the integer onto the stack
                stack.push(num);
            }
        }
    }
    
    // Create a new vector to store the result
    vector<int> result;
    // here we are making the new vector because we have to print the result in correct order so we are reversing it
    
    
    // Pop the elements from the stack and add them to the result vector
    
    while(!stack.empty()) {
        result.push_back(stack.top());
        stack.pop();
    }
    
    // Reverse the order of the elements in the result vector
    reverse(result.begin(), result.end());
    
    // Return the result vector
    return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends