//
//  People.h
//  L03DemoC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#ifndef L03DemoC_People_h
#define L03DemoC_People_h

//typedef关键字 定义struct类型
typedef struct{
      int age;
      //虚构函数
      void (*sayHello)();
} People;


#endif
