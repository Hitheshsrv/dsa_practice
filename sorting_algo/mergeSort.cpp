#include <iostream>
using namespace std;

/*
    -->mergesort function role
    merge sort primary function is to find sorted sub arrays
    
    -->merge function role
    combine 2 sorted arrays by comparing 1st ele of both array
    sub array is considered from (low->mid) and (mid+1->high)

    Time Complexity:O(n^2)
*/

void merge(int a[],int low,int mid,int high){
    int i,h,j;
    int b[100];
    i=low,h=low,j=mid+1;
    while(h<=mid && j<=high){
        if(a[h]<a[j]){
            b[i]=a[h];
            i++;
            h++;
        }
        else{
            b[i]=a[j];
            i++;
            j++;
        }
    }
    while(h<=mid){
        b[i]=a[h];
        i++;
        h++;
    }
    while(j<=high){
        b[i]=a[j];
        i++;
        j++;
    }
    int k;
    for(k=0;k<=high;k++){
        a[k]=b[k];
    }
}

void mergeSort(int a[],int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    mergeSort(a,low,mid);
    mergeSort(a,mid+1,high);
    merge(a,low,mid,high);
}

int main() {
    int a[]={10,2,34,13,7,8,19,4};
    int n=8;
    mergeSort(a,0,n-1);
    printf("Sorted elements are:\n");
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    cout<<"sorting successfull";
    return 0;
}