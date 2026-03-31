#include <bits/stdc++.h>
using namespace std;

// print name N times using recursion

void print_name(int i,int n){
    if(i>n) return;
    cout<<"Teertho"<<endl;
    print_name(i+1,n);

}

void print_num(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    print_num(i+1,n);
}

// Back tracking , print numbers from 1 to N

void print_back(int i, int n){
    if(i<1) return;
    print_back(i-1,n);
    cout<<i<< " ";
}

// int main(){
//     int n;
//     cin>>n;
//     print_back(n,n);

//     return 0;
// }


// BACK TRACKING ; FROM N -> 1

void back_tracking(int i, int n){
    if(i>n) return;
    back_tracking(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    back_tracking(1,n);

    return 0;
}
