#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Iteam{
    int weight;
    int value;
    double retio;
};
bool compare(Iteam &a,Iteam &b){
    //return (a.value/a.(double)weight) > (b.value/(double)b.weight);
    return a.retio>b.retio;
}

double knapsack(int w,Iteam *iteams,int n){
    double total=0.0;
            sort(iteams,iteams+n,compare);
            for(int i=0;i<n;i++){
                if(iteams[i].weight<=w){
                    total +=iteams[i].value;
                    w -=iteams[i].weight;
                }else{
                    total +=iteams[i].retio *w;
                    break;
                }
            }
            return total;
    }

int main(){
//    enter the number of iteam
       int n;
       cin>>n;
       //input for iteam weight and value
       Iteam iteams[n];
       for(int i=0;i<n;i++){
        cin>>iteams[i].weight;
        cin>>iteams[i].value;
        iteams[i].retio=(double)iteams[i].value/iteams[i].weight;
       }
       //maximum weight for bag to carry in knapsack
       int w;
       cin>>w;
       //calling knapsack
       cout<<"total knapsack "<<knapsack(w,iteams,n);
    return 0;
}

