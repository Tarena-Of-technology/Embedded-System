/*
 * 变量演示
 * */
include<stdio.h>
int main () {
    int val = 1;  //声明一个整形的变量，并对变量进行初始化。
    printf("%d", val);  //显示数字1
    val = val + 1;  //在变量原有的基础上加1，得到数字2.
    printf("%d", val);  //显示数字2
    val = val + 1;  //在变量原有的基础上加1，得到数字3.
    printf("%d", val);  //显示数字3
    val = val + 1;  //在变量原有的基础上加1，得到数字4.
    printf("%d", val);  //显示数字4
    val = val + 1;  //在变量原有的基础上加1，得到数字5.
    printf("%d\n", val);  //显示数字5
    return 0;
}
