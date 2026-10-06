#include<iostream>
using namespace std;
int main(){
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++){
          cout<<"Enter value:";
    cin>>arr[i];
        sum=sum+arr[i];
    }
        float average=(float)sum / 5;
        cout<<"Average ="<<average;    
}

