#include<iostream>
using namespace std;

/*
    in selection sort at each step the i'th is placed at its correct position
    its done by placing the smallest ele at first

    Time Complexity:O(n^2)
*/

void selectionSort(int a[],int n){
    int min_index;
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min_index]){
                min_index=j;
            }
        }
        if(i!=min_index){
            int temp=a[i];
            a[i]=a[min_index];
            a[min_index]=temp;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" array elements to sort"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionSort(int arr,0,n-1);
    cout<<"sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}