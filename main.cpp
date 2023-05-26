#include <iostream>
using namespace std;
template <class T>
void bubble(T arr[],int len){
    for (int i=0;i<len-1;i++){
        for (int j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1]){
            T temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;}
        }
    }
}
int main(){
    int a[4]={3,2,1,4};
    bubble(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    } 
    double b[5]={0.5,0.3,1.2,0.8,0.4};
    bubble(b, 5);
   for(int i=0;i<5;i++){
        cout<<b[i]<<endl;
    }
    return 0;
}