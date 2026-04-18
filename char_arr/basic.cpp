#include <bits/stdc++.h>
using namespace std;


// int main(){
//     char name[20];
//     cin>>name;
//     cout<<"Name is : "<<name<<endl;

//     return 0;
// }


// Length of char;

int get_length(char ch[]){
    int cnt = 0;
    for(int i = 0;ch[i]!='\0';i++){
        cnt++;
    }
    return cnt;

}
void reverse_it(char ch[], int len){
    for(int i = 0;i<len/2;i++){
        swap(ch[i],ch[len-i-1]);
    }
}


int main(){
    char ch[20];
    cin>>ch;
    int len = get_length(ch);
    reverse_it(ch,len);
    cout<<ch<<endl;
    return 0;
}