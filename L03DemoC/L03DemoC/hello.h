//
//  hello.h
//  L03DemoC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#ifndef L03DemoC_hello_h
#define L03DemoC_hello_h
#include "People.h"
void sayHello();
void PeoplesayHello();
People* PeopleInit(People *p,int age);
People* PeopleCreate();
void Peopledelete(People *p);
#endif
