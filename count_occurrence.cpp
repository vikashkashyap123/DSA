#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }

    cout<<"Enter x: ";
    int x;
    cin>>x;

    int occurrence=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence+=1;
        }
    }
            //  OR
    // for(int ele:v){
    //     if(ele==x){
    //         occurrence++;
    //     }
    // }
    cout<<occurrence<<endl;
    return 0;
}