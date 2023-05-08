/*
 * 变量演示
 * */
include <stdio.h>
int main () {
    int val = 0, val1 = 0;        //变量声明语句
    val =/*赋值操作符*/ 10;       //赋值语句
    val = 5+7;
    val + 3;      //把变量当作数字使用可以获得存储区里的数字
    printf("val是%d\n", val);
    val = val;
    printf("&val是%p\n", &val);
    return 0;
}
