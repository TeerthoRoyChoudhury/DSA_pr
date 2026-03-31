#include <bits/stdc++.h>
using namespace std;

//void -> Does not return something
//return
// parameterised
//non-parameterised


// void printName(){
//     cout<<"Hey Teertho!";
// }

// int main(){

//     printName();

//     return 0;
// }



// void printName(string s){
//     cout<<"Hey "<<s;
// }

// int main(){
//     string name;
//     cin>>name;
//     printName(name);


//     return 0;
// }


int sumit(int num1, int num2){
    int num3 =  num1 + num2;
    return num3;
}


// int main(){
//     int n1,n2;
//     cin>>n1>>n2;

//     cout<<sumit(n1,n2)<<endl;

//     return 0;
// }


// int main(){
//     int n1 = 23;
//     int n2 = 11;
//     int minimum = min(n1,n2); //inbuilt function

//     cout<<minimum<<endl;

//     return 0;
// }



int maxx(int n1, int n2){
    if(n1>=n2) return n1;
    else{
        return n2;
    }
}

int main(){
    int num1,num2;
    cin>>num1>>num2;

    int res = maxx(num1,num2);

    cout<<res<<endl;

    return 0;
}




