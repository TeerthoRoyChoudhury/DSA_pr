#include <bits/stdc++.h>
using namespace std;

// #printing sum of number
// Parameterised way

void Print_it(int n, int sum){
    if(n<1){
        cout<<sum;
        return;
    }
    Print_it(n-1,sum+n);
}

// Functional way

int func(int n){
    if(n==0){
        return 0;
    }
    return n + func(n-1);
}

// int main(){
//     int n;
//     cin>>n;
//     cout<<func(n);
//     return 0;
// }

//  factorial Paramterised

void fact(int i, int sum){
    if(i==0){
        cout<<sum;
        return;
    }
    fact(i-1, sum*i);
}

// int main(){
//     int i,sum;
//     cin>>i;
//     fact(4,1);
//     return 0;
// }

//  factorial funcional way

int factt(int n){
    if(n==1) return 1;
    return n * factt(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factt(n);

    return 0;
}