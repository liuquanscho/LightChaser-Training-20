#include<stdio.h>

void swap(int*p1,int*p2){          /*此片段相当于自定义一个函数swap，（）内是两个指针，才能实现指针所指的互换*/
    int temp=*p1;                  /*引入中间量temp*/
    *p1=*p2;
    *p2=temp;
}

int main(){
    int a=666;
    int b=999;
    printf("交换前:a=%d,b=%d\n",a,b);           /*结果：a=666 b=999*/

    swap(&a,&b);
    printf("交换后:a=%d,b=%d\n",a,b);           /*结果：a=999 b=666*/
    return 0;
}