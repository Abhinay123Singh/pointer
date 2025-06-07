#include<iostream>
using namespace std;
bool ispalindrome(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        if(arr[s]!=arr[e])
        return false;
        s++;
        e--;
    }
    return true;
}
int main(){
 int arr[]= {1,2,3,2,1};
 int n=sizeof(arr)/sizeof(arr[0]);
 if(ispalindrome(arr,n))
 cout<<"array is paslindrome"<<endl;
 else
 cout<<"arrays is not palinrome"<<endl;
 return 0;
}