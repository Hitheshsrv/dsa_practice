#include<iostream>
using namespace std;

/*
    compare adjacent elements if first ele is greater than 2nd swap both

    Time Complexity:O(n^2)
*/

void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}