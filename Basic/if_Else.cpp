// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     // int age;
//     // cin>>age;

//     // if(age>=18){
//     //     cout<<"Adult";
//     // }
//     // else if(age<10){
//     //     cout<<"MINOR";
//     // }

//     // return 0;

//     // int marks;
//     // cin>>marks;

//     // if(marks<25){
//     //     cout<<"F";
//     // }
//     // else if(marks>=25 && marks<=44){
//     //     cout<<"E";
//     // }
//     // else if(marks>=45 && marks<=49){
//     //     cout<<"D";
//     // }
//     // else if(marks>=50 && marks<=59){
//     //     cout<<"C";

//     // }
//     // else if(marks>=60 && marks <=79){
//     //     cout<<"B";
//     // }
//     // else if(marks>=80 && marks<=100){
//     //     cout<<"A";
//     // }

//     // return 0;

//     int age;
//     cin>>age;
//     if(age<18){
//         cout<<"Not eligible for Job!";
//     }
//     else ifage<=54){
//         cout<<"Eligible for job";
//     }
//     else if(age<=57){
//         cout<<"Eligible but retiring soon!";
//     }
//     else{
//         cout<<"Retirement time!";
//     }


//     return 0;

// }


#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin>>age;

    if(age<18){
        cout<<"Not Eligible";
    }
    else if(age<=57){
        cout<<"Eligible for job";
        if(age>=55){
            cout<<" but retirg soon!";
        }
    }
    else{
        cout<<"Retired";
    }

    return 0;
}
