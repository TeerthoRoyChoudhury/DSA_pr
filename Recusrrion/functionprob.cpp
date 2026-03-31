#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int arr[],int r){
    if(i>=r) return;
    swap(arr[i],arr[r]);
    reverse(i+1,arr,r-1);
}

//  single_pointer

void s_reverse(int i, int arr[], int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    s_reverse(i+1,arr,n);
}

bool palindrome_check(int i, string &s){
    if(i>=s.size()/2) return true;
    if(s[i]!=s[s.size()-i-1]) return false;
    return palindrome_check(i+1,s);
}

int fibonacci(int n){
    if(n<=1) return n;
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);
    return last + slast;
}

int main(){
    int n;
    cin>>n;
    cout<<fibonacci(n);

    return 0;
}

