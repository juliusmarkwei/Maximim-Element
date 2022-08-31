#include<iostream>
using namespace std;
int maximunValue(int arrayParam[], int lenght){
    int maxValue = arrayParam[0];
    for(int i = 0; i<lenght; i++){
        if(arrayParam[i] > maxValue){
            maxValue = arrayParam[i];
        }

  };
return maxValue;
};

int main(){
    int myarr[10] = {1, 3, 5, 7, 8, 76, 454, 232, 11, 0};
    int lengthOfArray = sizeof(myarr)/sizeof(int);
    cout<<maximunValue(myarr, lengthOfArray);

    return 0;
}