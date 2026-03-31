#include <bits/stdc++.h>

using namespace std;

int main(){
    set<int>st;
    st.insert(1);
    st.emplace(2);
    st.insert(2);
    st.insert(4);
    st.insert(3);


    auto it = st.find(3);
    auto it = st.find(6); //it will point at st.end() it the value is not there

    int cnt = st.count(1); //if there 1 or else 0

    auto it = st.find(3);
    st.erase(it);

    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);

    
    

    if(it!=st.end()){
        cout<<*(it);
    }

    return 0;
}