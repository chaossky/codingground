#include <iostream>
using namespace std;

int main(){
    int num;
    int* pT;
    
    cout<<"How many students' score are you going to type in?\n ";
    
    cin>>num;
    
    pT=new int[num];
    
    cout<<"Type "<<num<<" persons' score.\n";
    
    for(int i=0;i<num;i++){
        cin>>pT[i];
        
    }
    for (int j=0;j<num;j++){
        cout<<j+1<<"th person's score is"<<pT[j]<<"\n";
    }
    
    delete[] pT;
    
    return 0;
}
