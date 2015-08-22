//
//  main.c
//  L01HelloC
//
//  Created by gaoruishan on 15/8/6.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#include <stdio.h>

 //说明：参数1:传入的数量；参数2:传入的值
/*
 *1,打印格式换行，输入的内容中的空格标志，有空格的内容用加“”；printf("%s\n",argv[i]);
 */
int main(int argc, const char * argv[]) {
    // insert code here...
      
      for (int i=0;i<argc;i++) {
            //print-输出 f－格式化，默认格式化输出  s 字符串
            printf("%s\n",argv[i]);
      }
      
      /*
       *1, d或i 十进制整数（有符号）
       *2, x   十六进制整数（无符号）
       *3, f   十进制浮点小数，小写
       */
      printf("Hello,%d\n",100);
      
      //1,定义一个缓冲区，字符长度为100 －这是不安全的 当下面使用gets 时。
      char buf[100];
      
      //2,get 是等待控制台输入，用户回车后 执行下面的代码。
      gets(buf);
      
      //使用put－输出 s 字符串
//      puts("hello C\n");
      puts(buf);
      
      
      int a;
      //接受指定int 输入
      scanf("%d",&a);
      
      printf("%d\n",a);
      //调用－如果有警告修改项目bulide setting ->all ->C language dailect gnu89
      printf("%d\n",max(10, 12));
      
      return 0;
}
/*
 *定义方法调用
 */
int max(int a,int b){
      if (a>b) {
            return a;
      }else{
            return b;
      }
}
