// Rotate the given array 'a' by k steps,where k is non negative.
// k can be greater than n as well as where n is the size of array 'a'.
// 1 2 3 4 5      k=2 then,output= 4 5 1 2 3

#include <iostream>
using namespace std;
int main(){
    int array[]={1,2,3,4,5};
    int n=5;      //n=size
    int k=2;      //no. of steps to be rotated

    k=k%n;       //k greater than n
    

    int ansarray[5];
    int j=0;
    //inserting last k elements in ans array.
    for(int i=n-k;i<n;i++){
        ansarray[j]=array[i];
        j++;
    }
    //inserting first n-k elements in ans array.
    for(int i=0;i<=k;i++){          //i<n-k  or i<=k
        ansarray[j]=array[i];
        j++;
    }

    for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
    cout<<endl;


    return 0;
}

//                               ******OR********
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // v.push_back(5);
    int k=2;
    k=k%v.size();
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());

    for(int a:v){
        cout<<a<<" ";
    }
    cout<<endl;
}


