#include <bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q; //Fifo
    q.push(1); //{1}
    q.emplace(2); //{1,2}
    q.push(4); //{1,2,4}
    q.back() +=5; // {1,2,9}
    cout<<q.back(); //{9}

    cout<<q.front(); //{1}

    q.pop(); //{2,4}
    cout<<q.front(); //{2}



    return 0;
}