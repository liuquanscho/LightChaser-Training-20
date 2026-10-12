#include<stdio.h>

int main(){
    int i=1;
    int sum=0;
    for(i=1;i<=100;i++){               /*循环语句g*/
        if(i%2==1){                       /*%在此作用为取余数，保证i为奇数，偶数则不加入sum*/
            sum += i;             /*不要以数学方法看这个式子，相当于下一个sum在这一个sum加了i，sum一直在加*/
        }
    }
    printf("1-100的奇数和为:%d",sum);    /*结果为：2500*/
    return 0;
}