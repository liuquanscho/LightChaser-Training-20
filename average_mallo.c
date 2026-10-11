#include <stdio.h>
#include <stdlib.h>                  /*	提供malloc、free、exit等*/

int main() {
    int n;          /*n用于后续计算组数*/
    double *arr;     /*arr此时作为指针*/
    double sum = 0;
    int i;

    printf("请输入数组元素个数：");
    scanf("%d", &n);

    arr = (double *)malloc(n * sizeof(double)); /*malloc“借内存”，(n * sizeof(double))为字节*/
    if (arr == NULL) {             /*可能申请失败的预设 防止程序崩溃*/
        printf("内存申请失败！\n");
        return 1;                  /*结束*/
    }

    printf("请输入 %d 个浮点数：\n", n);
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);  /*指针arr当成数组来用了arr[i]可理解为从arr存的地址开始，往后找i个位置，对应取出值*/
        sum = sum+arr[i];   /*编译器看到arr[i]会翻译成*arr+i*/
    }
    double avg = sum / n;
    printf("平均值 = %.lf\n", avg);    /*double，对应long*/
    free(arr);                      /*malloc和free成对出现*/

    return 0;
}