// second largest elements if unique elements are there.

#include <bits/stdc++.h>
using namespace std;
int largestElementIndex(int array[],int size){
    int max=INT_MIN;
    int maxindex=-1;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
            maxindex=i;
        }
    }
    return maxindex;
}
int main(){
    int array[]={2,3,5,7,6,1,7};
    int indexoflargest=largestElementIndex(array,7);
    cout<<array[indexoflargest]<<endl;

    int largestelement= array[indexoflargest];
    for(int i=0;i<7;i++){
        if(array[i]==largestelement){
            array[i]=-1;
        }
    }

    int indexofsecondlargest=largestElementIndex(array,7);
    cout<<array[indexofsecondlargest]<<endl;
    return 0;
}


//  **********************     OR    *****************

#include<bits/stdc++.h>
using namespace std;
int SecondLargestElement(int array[],int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
     for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
     }

     for(int i=0;i<size;i++){
        if(array[i]>second_max && array[i]!=max){
            second_max=array[i];
        }
     }

     return second_max;
}

int main(){
    int array[]={2,3,5,7,6,1,7};

    cout<<SecondLargestElement(array,7);

    return 0;
}