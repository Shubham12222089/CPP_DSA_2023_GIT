#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={1,2,3,4,5};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //vector<int> :: iterator it = v.begin();
    //cout<<*(it+1)<<endl;

    //for accessing pair
    vector<pair<int,int>> vp={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for (it = vp.begin();it!=vp.end();++it)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    
    
}
