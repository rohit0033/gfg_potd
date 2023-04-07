//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int addMinChar(string str){
        int n=str.length();
        int i=0,j=n-1;
        int ans=0;
        while(i<=j)
        {
            if(str[i]==str[j])
            {
                i++;
                j--;
            }
            else
            {
                ans++; // adding one character at the front
                i=0;
                j=n-1-ans;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin >> str;
        
        Solution ob;
        cout << ob.addMinChar(str) << endl;
    }
    return 0; 
} 
// } Driver Code Ends


// Notesss you can uderstand this by reading it
// In this section, the problem of adding minimum characters to make a string palindrome is discussed. The task is to find the minimum characters to be added at the front of the string to make it a palindrome. The approach suggested is to add one character, then two characters, and so on until one gets a palindrome. The maximum number of operations is the string length, and the minimum is to be found. A two-pointer technique is used to maintain the count of characters that need to be added at different points in the string.
// 00:05:00 In this section of the video, the presenter explains how to solve a problem of finding the minimum number of characters that need to be added to a given string to make it a palindrome. He uses an example to demonstrate the approach of adding characters one by one to the string until it becomes a palindrome. The presenter explains how to shift the pointers of the string and add the characters to the front to satisfy the condition of the problem. He also explains how to count the number of characters added to the string to make it a palindrome. The solution involves checking if the first and last characters of the string are equal and recursively adding the missing characters to the front or back of the string until it becomes a palindrome.
// 00:10:00 In this section, the speaker discusses the approach to solve the minimum character addition problem. The strategy involves adding characters at the front until the middle part of the string becomes a palindrome. After every addition of a character, the position of J is adjusted based on the last two characters that were made into a palindrome. Only the completed characters within the palindrome are considered for this adjustment. The code is then compiled and submitted, and it works perfectly.
