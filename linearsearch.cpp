// searching 11 in the array. if it is there, print index position else print -1.
#include <iostream>
using namespace std;
int main(){
    int array[5]={3,8,4,9,11};
    int size=sizeof(array)/sizeof(array[0]);

    int key=11;
    int ans=-1;
    for(int i=0;i<size;i++){
        if(array[i]==key){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}
