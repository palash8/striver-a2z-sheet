//{ Driver Code Starts
//Initial Template for C++

// C program for implementation of Bubble sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

// swapping the elements
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}


// } Driver Code Ends
//User function Template for C++
//RECURSSIVE BUBBLE SORT
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here
        //base case
        if(n==1)
        return;
        //declaing count to check if array is alerady sorted
        int count=0;
        //running loop for fixing one element largest at the last
        for(int i=0;i<n-1;i++)
          {
              if(arr[i]>arr[i+1])
              {
                swap(arr[i],arr[i+1]);
                count++;
              }
          }
        //return if alerady sorted  
       if(count==0)
       return;
       //ecurssively calling for n-1 eleemnts
       bubbleSort(arr,n-1);
    }
};


//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    Solution ob;  
      
    ob.bubbleSort(arr, n);
    printArray(arr, n);
    }
    return 0;;
}
// } Driver Code Ends