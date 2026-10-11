#include<stdio.h>

int main(){
    double a,b;
    char op;        /*op代表符号*/

    printf("请输入算数式子：");
    scanf("%lf %c %lf",&a,&op,&b);     /*scanf的作用：读字符、翻译成c类型、写进指定内存*/

    if (op == '+'){                    /*‘’表示单独字符*/
        printf("结果是：%f\n",a+b);
    }
    else if(op == '-'){
        printf("结果是：%f\n",a-b);
    }
    else if(op == '*'){
        printf("结果是：%f\n",a*b);
    }
    else if(op == '/'){
        if(b == 0){
            printf("除数不能为0!");
        }else{
            printf("结果是：%f\n",a/b);
        }
    }
    return 0; 
}