//maximum no. of ones in rows
//0 1 1 1
//0 0 1 1
//0 0 0 1        output= 0

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int maximumOnesRow(vector<vector<int>> &v){

    int maxOnes=INT_MIN;
    int maxOneRow=-1;
    int column=v[0].size();
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j]==1){
                int numberofones=column-j;
                if(numberofones >maxOnes){
                    maxOnes=numberofones;
                    maxOneRow=i;
                }
                break;
            }
        }
    }
    return maxOneRow;
}
int main(){
    int n,m;
    cin>>n>>m;

    vector <vector<int>> vec(n , vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>vec[i][j];
        }
    }

    int res=maximumOnesRow(vec);
    cout<<res<<endl;
    return 0;
}