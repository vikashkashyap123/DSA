// array sorted then print 1
// array not sorted then print 0
#include <iostream>
using namespace std;
int main(){
    int array[6];
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    bool sortedflag=true;
    for(int i=1;i<size;i++){
        if(array[i]<=array[i-1]){
            sortedflag=false;
        }
    }
    cout<<sortedflag<<endl;
    
    return 0;
}