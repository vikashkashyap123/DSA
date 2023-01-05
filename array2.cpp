// sum of an array

#include <iostream>
using namespace std;
int main(){
    int array[5];
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i=0;i<size;i++){
          sum=sum+array[i];
    }
    cout<<sum<<endl;

    return 0;
}