// Find the total number of pairs in the array whose sum is equal to the given value of x.
// 1 2 3 4 5 6         target_sum=7  then  1+6=7 ,2+5=7,3+4=7  output=3.

#include <iostream>
using namespace std;
int main(){
    int array[6];
    for(int i=0;i<6;i++){
        cin>>array[i];
    }
    int target_sum;
    cout<<"target_sum =";
    cin>>target_sum;

    int pairs=0;
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            if(array[i]+array[j]==target_sum){
                 pairs+=1;                           //  pairs++ have same meaning.
            }
        }
    }
    cout<<pairs<<endl;

    return 0;
} 