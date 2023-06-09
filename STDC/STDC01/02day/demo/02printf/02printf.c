/*
 * 第一步：
 * 编程时的首要步骤，先把这部分内容写上，完成上半部分的内容。
#include <stdio.h>
int main () {
    return 0;
}
///////////////////////////////////////////////
/*
 * 第二步：
 * 上半部分内容的完成之后，再往里边儿添加函数调语句。
#include <stdio.h>
int main () {
    函数名称();  //先写函数名称，再写下一对小括号（），最后加上分号结束。  //添加函数调语句，并加上分号（；）结束。 //函数调语句的构成=由函数名称+一对小括号（）+ 表示结束的分号 ；
    return 0;
    // 这就是一个函数调语句的一个雏形。
}
//////////////////////////////////////////////
/*
 * 第三步：
 * 上半部分内容的完成之后，按照第二步所说的方法添加pritnf函数调语句。
#include <stdio.h>
int main () {
    printf();   //添加printf函数调语句，并加上分号（；）结束。
    return 0;
    // 这就是一个printf函数调语句的雏形。
}
/////////////////////////////////////////////
/*
 * 第四步：
 * 往printf函数里边儿添加内容。
 * printf函数演示
 * */
#include <stdio.h>
int main () { // 我想在屏幕上显示一个数字1，我怎么使用这个printf标准函数来实现呢？
//  printf("1" /*为了实现显示数字1呢、我就可以在这个小括号()里边写一对双引号" "，然后呢、把我想显示在屏幕上的内容写在双引号" "里,你在双引号里写的什么，计算机就会把什么显示在屏幕上。*/ ); // 好！这条语句就可以在屏幕上显示数字1。
//  printf("1\n" /*由于这个1呢，隐藏得很深。稍微一不留神就把它漏过去了(它所在的位置在我们命令行的最左侧位置，最左端--它出现在终端窗口的最左侧，最左端)。我们通常希望呢，我们在屏幕上显示的内容啊！尽可能的明显一些。怎么让它明显一些呢？我们可以在要显示的内容后边加上一个"\n"，这个反斜杠(\n)和这个n,它俩合起来代表一个字符。这个字符我们把它叫做换行字符。它的作用呢，就是让它前边儿的内容和它后边儿的内容出现在两行里。或者换句话说，就是它后边儿的内容不要和它前边儿的内容在一行里。这样儿，它前边儿的内容是不是要单独占一行了。对吧! 我们在1的后边儿呢，加上了这个"\n"(换行字符)以后呢，"1后边儿的内容不要和这个1同在一行里"。这样,1是不是单独占一行了。对吧!这样儿，不就明显了嘛！啊！这样,1是不是单独占一行了。对吧!这样儿，不就明显了嘛！啊！我们在屏幕上显示数字的时候，通常会这样做。我们再来执行一下这个程序，我们可以看到这样的一个结果："这回这个1是不是单独占了一行啊？对不对！嗯！"*/); // 隔行显示数字1。 
/*
 * 这就是最简单的使用printf标准函数，在屏幕上显示数字的方法。
 * */
////////////////////////////////////////////
/*
 * 那么、这种方法呢，它有一个缺陷。这个缺陷就在于你要想在屏幕上显示什么，你在写程序的时候就必须要知道你想显示的内容。对不对！你只有在写程序的时候知道要显示什么，你才能在双引号(" ")里写什么，才能最终显示出来嘛！对不对！
 * 那、如果我想显示是我编写程序的时候也不知道的东西该怎么办？这个时候、我们可以有一种高级的方式，来使用我们的printf标准函数。怎么做呢？我们可以把printf函数双引号(" ")里的数字啊，掇挪到双引号后边儿去。
 * */
// printf("\n", 1 /*刚才那条语句呢、可以在屏幕上显示1对不对！我们可以把这个双引号(" ")里的1呢，删除。把它掇挪到双引号(" ")后边儿去。我们的双引(" ")和1之间，把它用逗号(,)分开。但是、你这么做有一个问题。啊！你这么做的话呢，计算机就不知道这个1，应该放到双引号里哪个位置上去。最后、计算机就显示不了这个1了，对不对！ */); // 
// printf("%d\n", 1 /*所以呢、我们还需要在双引号(" ")里使用一种专门的符号。这个符号呢、我们把它就做占位符。嗯！它就是告诉计算机，双引号(" ")后边儿的东西应该放在哪那个位置上。它由:" %(百分号)+英文字母[a-z] " 构成。我们把这个占位符写在换行字符的前边儿。这就表示计算机在暗示的时候，应该先显示这个1，后显示这个"\n"。好！这个" %(百分号)和这个英文字母[a-z] " 合起来叫做一个占位符。好！那么这个占位符呢有很多，不是只有一个。啊！不同的占位符，要和不同类型的数字配合使用。例如:例子中这个" %d "这个占位符，就是用来和整数类型的数字配合使用的。以后、我们再见到其他类型数字的时候呢，我们再给大家介绍别的占位符。 */); // 将换行符前面的数字1，移到换行符后边去。
/*
 *
 * */
///////////////////////////////////////////
/*
 * 那、把数字挪到双引号(" "),后边儿有什么好处啊？双引号(" ")后边儿的数字，就不一定是一个固定的数字了。我们也可以写一个很复杂的公式。
 * 比如说、我写成9-8。双引号(" ")后边儿的数字，就不一定非得是你事先知道的数了。啊！可以写成你事先还不知道的数。
 * 我可以把1替换成9-8。我们谁都知道9-8的结果是1，对不对！但、既然我可以把这1替换成9-8，我是不是可以把它换成更复杂的公式。换成一个复杂到你事先都算不出结果的公式来。可以吧！啊！
 * 所以、我们只是把9-8写在这儿呢、作一个演示。既然、能换成9-8，我就可以换成别的任何复杂的公式了。
 * 这条语句同样可以把数字1，显示在屏幕上。只不过这个呢，不是我告诉计算机的是它自己算出来的。对不对!啊!
 * */
// printf("%d\n", 9-8); // 用占位符来表示数字1，而这个1呢，通过9-8计算出来，我们用9-8这个公式替换了这个1。
/*
 * 那么、刚才我们演示的时候，我们是在双引号(" ")里写的一个占位符，对不对！是吧！
 * 那么、其实我们是可以在双引号儿里(" ")写多个占位符的。
 * 比如说、我想在屏幕上显示a1b2c。上面这条语句:printf("a1b2c"); 和这条语句: printf("a1b2c\n"); 是可以实现的对不对！是吧！
 * 那么、这个显示结果里的1和2，它们可以掇挪到双引号(" ")后边儿去。啊！
 * 比如说、我把这个1掇挪到双引号(" ")后边儿去，为了把1挪过去，我是不是需要在1原来的位置上写一个占位符呀！我同样可以把这2挪过去，为了把2挪过去我要在2原来的位置上也写一个占位符。对吧！好！
 * 然后、我们就可以把1和2都挪到双引号(" ")后边儿去了。那么、相邻的两个内容中间我们都是要用逗号(,)把他们分开的！对不对！是吧！这条语句: printf("a%db%dc\n", 1,2); 就可以在屏幕上显示a1b2c。啊！
 * 你看、这条语句里，我们在双引号(" ")里使用了两个占位符。对吧！你使用十个都行。但是、你要注意，你在双引号(" ")使用了多少个占位符。双引号(" ")的后边儿就需要写多少个数字。数字的格式得与占位符的格式是一致的。啊！
 * */
// printf("a1b2c"); // 屏幕上显示a1b2c
// printf("a1b2c\n"); // 隔行显示a1b2c
// printf("a%db%dc\n"); //在双引号(" ")里引用两个占位符%d和%d来表示数字1和2，后边呢我什么都不加。我们得到的结果是，这个占位符里的数字是个变动的数字。啊！你每一次运行它都会出现不同的数值。
// printf("a%db%dc\n", 1,2); //在双引号(" ")里引用两个占位符%d和%d来表示数字1和2，那双引号后边儿呢得加上这个数字1和2，不然、这个占位符，它也不知道你到你要具体在a的后边儿和b的后边儿输出哪一个数值，这个时候呢、这个占位符里的数字是个变动的数字。啊！你每一次运行它都会出现不同的数值。所以、我们要在它的后边呢加上具体的两个数值1和2。
/*
 * 那、后边儿这个1和2呢，你也可以换成9-8和10-8这两个公式。啊！
 * */
   printf("a%db%dc\n", 9-8,10-8); //将后边是数字1和2，换成9-8和10-8这两个公式。


    return 0;
}
// 这就是关于printf标准函数的介绍！
