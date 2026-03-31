#include <bits/stdc++.h>
using namespace std;


// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.emplace_back(10);

//     vector<pair<int,int,>> vc;
//     vc.push_back({1,10});
//     vc.emplace_back(20,20);

//     vector<int> v1(5,100);
//     vector<int> v2(v1);

     

// }

// int main(){
//     vector<int> v = {1,3,4,54,22,12};
//     // cout<<v[0]<<" "<<v.at(0);
//     vector<int>::iterator it = v.begin();
//     it++;
//     cout<<*(it)<<endl;


//     return 0;
// }

// int main(){
//     vector<int> v = {1,2,3,4,5,5};
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }


//     return 0;
// }

// int main(){
//     vector<int> v = {1,2,3,4,5,6,7,8,9};
//     for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
//         cout<<*(it)<<" ";
//     }

//     return 0;
// }

// int main(){
//     vector<int> v = {1,2,3,4,5};
//     for(auto it = v.begin();it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }


//     return 0;
// }


//  deletion of value in vectors


// int main(){
//     vector<int> v = {10,20,12,23,35};
//     v.erase(v.begin()+1);

//     for(auto it = v.begin();it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }

//     return 0;
// }


// deletion multiple element

// int main(){
//     vector<int> v = {12,11,43,25,89,29};
//     v.erase(v.begin()+1,v.begin()+4);
//     for(auto it=v.begin();it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }

//     return 0;
// }

// insert Function

// int main(){
//     vector<int>v(2,100);
//     v.insert(v.begin(),300);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

//     return 0;
// }
// {10,20,30,40,50}

// int main(){
//     vector<int> v = {10,20,30,40,50};
//     v.insert(v.begin()+1,15);
//     for(auto it=v.begin();it!=v.end();it++){  //{10 15 20 30 40 50}
//         cout<<*(it)<<" ";
//     }
    
    
//     return 0;
// }


// int main(){
//     vector<int>v(3,100); //{100,100,100}
//     v.insert(v.begin()+1,2,50);
//     for(auto it = v.begin();it!=v.end();it++){
//         cout<<*(it)<<" ";
//     }
//     return 0;
// }


//  pop_back

int main(){
    vector<int> v = {12,34,56,74,11};
    v.pop_back();
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }


    return 0;
}
