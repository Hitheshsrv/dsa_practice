#include<iostream>
#include<vector>
using namespace std;

/*  
    input will need to be always sorted array
    
    need to return the index of the searchkey if dont exist return -1

    find mid if array[mid] is equal to searchkey return mid
    or check if array[mid]<searchkey then low will be mid+1
    else array[mid] will be grater then searchkey then high will be mid-1

    Time Complexity=O(logn)
*/

int binarySearch(vector<int> arr,int key){
    int high=arr.size()-1;
    int low=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==key) return mid;
        if(arr[mid]<key) low=mid+1;
        else high=mid-1;
    }
    return -1;
}

int main(){
    int n,sKey;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> vec;
    cout<<"Enter the "<<n<<" sorted elememts"<<endl;
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        vec.push_back(item);
    }
    cout<<"Enter the search key"<<endl;
    cin>>sKey;
    int index=binarySearch(vec,sKey);
    if(index==-1) cout<<"search element not found";
    else cout<<"search key found at index "<<index<<endl;
    return 0;
}