// Find the uinque number in a given array where all the elements are being repeated 
// twice with one value being unique.
#include <iostream>
using namespace std;
int main(){
    int array[7];
    for(int i=0;i<7;i++){
        cin>>array[i];
    }

    for(int i=0;i<7;i++){
        for(int j=i+1;j<7;j++){
            if(array[i]==array[j]){
                array[i]=array[j]=-1;
            }
        }
    }
    for(int i=0;i<7;i++){
        if(array[i]>0){
            cout<<array[i]<<endl;
        }
    }

    return 0;
}
