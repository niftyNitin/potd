// https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
 
using namespace std; 


bool findPair(int arr[], int size, int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,n;
        cin>>l>>n;
        int arr[l];
        for(int i=0;i<l;i++)
            cin>>arr[i];
        if(findPair(arr, l, n))
            cout<<1<<endl;
        else cout<<"-1"<<endl;
    }
    
  
    return 0;
}// } Driver Code Ends


bool findPair(int arr[], int size, int n){
    sort(arr, arr+size);
    int i = 0;
    int j = 1;
    
    while(i < size and j < size){
        int x = arr[j] - arr[i];
        if(x == n and i != j)
            return true;
        
        if(x < n)
            j++;
        if(x > n)
            i++;
    }
    return false;
}
