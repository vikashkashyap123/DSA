// maxmum number of an array
#include <iostream>
using namespace std;
int main(){
    int array[5];
    int size=sizeof(array)/sizeof(array[0]);
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int max=array[0];
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
      cout<<max<<endl;
      return 0;
}
