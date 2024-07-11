#include <iostream>
using namespace std;

void quickSort(int a[],int low,int high){
    int l=low,r=high;
    int pivot=a[r];
    
}

int partition(int a[],int low,int high,int pivot){
    
}

int main() {
    int a[]={10,2,34,13,7,8,19,4};
    int n=8;
    quickSort(a,0,n-1);
    printf("Sorted elements are:\n");
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}