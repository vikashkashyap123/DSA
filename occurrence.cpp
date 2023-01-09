// find the last occurence of an element x in the given array.
// 1 2 3 1 6 1        here x=1.  so,output will be 5.
 #include <iostream>
 #include <vector>
 using namespace std;
 int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];
    }
    cout<<"Enter x:";
    int x;
    cin>>x;

    int occurrence=-1;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurrence=i;
        }
    }
                //  OR.........
    // for(int i=v.size()-1;i>=0;i--){
    //     if(v[i]==x){
    //         occurrence=i;
    //         break;
    //     }
    // }
    cout<<occurrence<<endl;
   return 0;
 }