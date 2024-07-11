#include<iostream>
#include<vector>
using namespace std;

/*
    normal brute force approach where whole array traversed linearly to find the searchkey
    
    Time Complexity=O(n)
*/

int sequentialSearch(vector<int> a,int key){
    int n=a.size();
    int i=0;
    while(a[i]!=key){
        i=i+1;
    }
    if(i<n) return i;
    else return -1;
}

int main(){
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"Enter the "<<n<<" elements of array"<<endl;
    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        arr.push_back(item);
    }
    int sKey;
    cout<<"Enter the search element"<<endl;
    cin>>sKey;
    int index=sequentialSearch(arr,sKey);
    if(index==-1) cout<<"search key not found";
    else cout<<"search key found at index "<<index<<endl;
    return 0;
}