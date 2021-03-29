#include "20210224_10.h"
float avg(float x,float y){
    return (x+y)/2;
}
float avgD(float x,float y){
    int count=0;
    int sum=0;
    for(int i=x;i<y;i++){
        sum+=i;
        count++;
    }
    return sum/count;
}
int p(int x,int y){
    int result=1;
    for(int i=0;i<y;i++){
        result*=x;
    }
    return result;
}