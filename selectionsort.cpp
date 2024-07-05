#include<iostream>
#include<array>
using namespace std;
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void selectionsort(int arr[],int size){
for(int i = 0;i< size - 1;i++){
    for(int j = i + 1;j<size;j++){
       if(arr[j]<arr[i]){
        swap(arr[j],arr[i]);

       }  
    }
}
}
void printSorted(int arr[],int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
int arr[10]={6,8,4,9,5,90,36,75,2,64};
int size = 10;
cout<<"sorted array"<<endl;
selectionsort(arr,size);
printSorted(arr,size);
}