//
//  main.c
//  L03DemoC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 带<>引入一般是库文件;“”引入的是自定义的
#include "hello.h"

//使用typedef关键字 定义没有返回值和参数的指针类型函数Func
typedef void (*Func) ();
int main(int argc, const char * argv[]) {
    
      //方式1
      People p;
      
      p.age=10;
      printf("Hello, World!=%d\n",p.age);
      
      //方式2
      Func f=sayHello;
      f();
      
      //方式3
      People *p1 =PeopleInit(PeopleCreate(),20);
      p1->sayHello();
      Peopledelete(p1);
      
      //引入自定头文件
      sayHello();
      
      //定义缓冲区长度80 然后进行拼接字符串
      char str[80];
      strcpy(str,"these ");
      strcat(str, "strings ");
      puts(str);
      
      char buf[100];
      memset(buf,0, 100);
      //将不同类型的数据进行拼接
      sprintf(buf, "say %d%f%s", 100,1.2,"hello");
      printf("%s\n",buf);
    return 0;
}
