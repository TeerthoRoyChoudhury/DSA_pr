#include <bits/stdc++.h>
using namespace std;
// pass by Value




// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;

// }


// int main(){

//     int num = 10;
//     doSomething(num);
//     cout<<num<<endl;

//     return 0;
// }


// Pass by reference -> Alters original value

// void doSomething(string &s){
//     s[0] = 'P';
//     cout<<s<<endl;

// }

// int main(){
//     string t = "Teertho";
//     doSomething(t);

//     cout<<t<<endl;



//     return 0;
// }


void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<"Value inside function "<<arr[0]<<endl;
}


int main(){

    int n = 5;
    int arr[n];

    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }

    doSomething(arr,n);

    cout<<"Value inside int main "<<arr[0]<<endl;


    return 0;
}


