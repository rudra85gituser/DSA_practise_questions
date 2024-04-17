//most important question asked multiple time in amazon//
#include<iostream>
using namespace std;



int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int count=0;
    int total=16;

    int startingrow=0;
    int startingcol=0;
    int endingrow=3;
    int endingcol=3;
    int arr1[12];

    while(count<total){
        //printing starting row
        for(int index=startingcol;count<total && index<=endingcol;index++){
           arr1[count] = arr[startingrow][index];
           count++;
        }
        startingrow++;
        //printing ending column
        for(int index=startingrow; count<total && index<=endingrow;index++){
            arr1[count]=arr[index][endingcol];
            count++;
        }
         endingcol--;

        for(int index=endingcol;count<total && index>=startingcol;index--){
            arr1[count]=arr[endingrow][index];
            count++;
        }
       endingrow--;

        for(int index=endingrow;count<total && index>=startingrow;index--){
            arr1[count]=arr[index][startingcol];
            count++;
        }
        startingcol++;
    }

    for(int i=0;i<total;i++){
        cout<<arr1[i];
    }

    return 0;

}