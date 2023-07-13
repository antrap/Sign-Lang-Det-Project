//Check Duplicate elemensts in an array
#include<iostream>
using namespace std;
//Brute force
bool duplicate(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            return true;
        }
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<duplicate(arr,n);

    return 0;
}

//Using sorting
/*bool duplicate(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
        return true;
    }
    return false;
}

//usin*/