#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }

        cout<<endl;

    }
}

void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

void print5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

void print7(int n){
    for(int i=0;i<n;i++){
        // space
        for(int j=0;j<n-i+1;j++){
            cout<<" ";
        }
        //stars
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        //space
        for(int m=0;m<n-i+1;m++){
            cout<<" ";
        }

        cout<<endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" "; 
        }
        for(int k=0;k<2*n-2*i-1;k++){
            cout<<"*";
        }
        for(int l = 0;l<i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print9(int n){
    for(int i=1;i<=2*n-1;i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        cout<<endl;

    }
}

void print10(int n){
    int start = 0;
    for(int i=1;i<=n;i++){
        if(i%2==0) start = 0;
        else start = 1;
        for(int j=1;j<=i;j++){
            cout<<start;
            start = 1-start;
        }
        cout<<endl;
    }
} 

void print11(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=1;k<=2*n-2*i;k++){
            cout<<" ";
        }
        for(int l = i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}


void print12(int n){
    int num = 1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num = num+1;
        }
        cout<<endl;
    }
}

void print13(int n){
    for(int i=1;i<=n;i++){
        for(char ch = 'A';ch<='A'+i;ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print14(int n){
    for(int i=1;i<=n;i++){
        for(char ch = 'A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        char ch = 'A';
        int breakpoint  = (2*i-1)/2;
        for(int k = 1;k<=(2*i-1);k++){
            cout<<ch<<" ";
            if(k<=breakpoint) ch++;
            else ch--;
        }
        for(int m=1;m<=n-i;m++){
            cout<<" ";
        }
        cout<<endl;
    }
}

void print17(int n){
    for(int i=0;i<n;i++){
        for(char ch = 'E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }

        cout<<endl;
    }
}


int main(){
    int n;
    cin>>n;
    print17(n);


    return 0;

}
