#include <bits/stdc++.h>
using namespace std;

// count the number of digits

int countdigit(int n){
    int cnt = (int)(log10(n)+1);
    return cnt;
}


// int main(){
//     int n;
//     cin>>n;
//     int i=0;
//     while(n>0){
//         n = n/10;
//         i++;

//     }
//     cout<<i;

//     return 0;
// } 

int reversenumber(int n){
    int sum = 0;
    while(n>0){
        int last_digit = n%10;
        sum = sum*10 + last_digit;
        n = n/10;
    }
    return sum;
}

int palindrome(int n){

}

void divisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}

void optimal_divisor(int n){
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){
            v.emplace_back(i);
            if(n/i!=i){
                v.emplace_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto it:v){
        cout<<it<<" ";
    }
}

int primeNumber(int n){
    int cnt = 0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(n/i!=i){
                cnt++;
            }
        }
    }
    if(cnt==2) return true;
    else return false;

}

void divisor_euclidean(int a,int b){
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }
    if(a==0){
        cout<<b<<endl;

    }
    else cout<<a;
}


int main(){
    int a,b;
    cin>>a>>b;
    divisor_euclidean(a,b);


    return 0;
}

