//
//  hello.c
//  L03DemoC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "People.h"

void sayHello(){
      printf("Hello C\n");
}

void PeoplesayHello(){
      printf("PeoplesayHello\n");
}
/*面向对象思想 */
// 初始化
People* PeopleInit(People *p,int age){
      p->age=age;
      p->sayHello=PeoplesayHello;
      return p;
}
//创建对象
People* PeopleCreate(){
      return malloc(sizeof(People));
}
//删除对象
void Peopledelete(People *p){
      free(p);
}