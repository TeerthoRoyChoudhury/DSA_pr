#include <bits/stdc++.h>
using namespace std;

// int main(){
//     priority_queue<int> pq;

//     pq.push(3);
//     pq.push(2);
//     pq.push(7);
//     pq.push(0);
//     pq.push(4);

//     cout<<pq.top();
//     pq.pop();
//     cout<<pq.top();

//     return 0;
// }

// Minimum Heap

#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(12);
    pq.push(3);
    pq.push(8);
    pq.push(10);
    pq.push(2);
    pq.push(5);

    cout << pq.top() << " ";

    return 0;
}
