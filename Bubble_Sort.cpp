/*
Bubble Sort is a type of sorting method used to sort elements of an array, a list, etc.

Bubble sort consists of two pointers - i & j
i starts from 0 and goes till (n-1) while j starts from 0 and goes till (n-1) -> n = size of array
*/

//Code :- 

//1) Brute Force approach : 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the array size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the array elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Unsorted array: ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j] > arr[j+1]){          //whenever arr[j] > arr[j+1] -> swap the two elements
                swap(arr[j], arr[j+1]);     //swap() function is in <algorithm> header file
            }                                       
        }
    }

    cout<<"Sorted array: ";
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
