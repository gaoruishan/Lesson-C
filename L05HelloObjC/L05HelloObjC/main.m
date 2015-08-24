//
//  main.m
//  L05HelloObjC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
//#include "Hi.h"
#import "Hi.h"

int main(int argc, char * argv[]) {
      //继承于 NSObject的都可以用％@ 代替
      NSString *str = @"Hello ObjC";

      printf("Hello C\n");
      printf("The number is %d\n",100);
      printf("Hello %s\n","XiaoMing");
      //Obj-C 输出NSLog,@是强制类型转换
      NSLog(@"Hello Object-C");
      NSLog(@"The number is %d\n",111);
      NSLog(@"Hello %s\n","ZhangSan");
      
      NSLog(@"%@",str);
      //NSObject init 获得一个Object 调用description 返回String
      NSLog(@"NSObject %@",[[[NSObject alloc] init ] description]);
      
      //方法调用: 1,兼容C; 2,NSString静态方法:前面是调用的目标，后面是调用的名字，最后是传参数，调用过程用［］括起来
      NSString  *str1= [NSString stringWithFormat:@"Hello %d",100];
      NSLog(@"%@",str1);
      
      //引入头文件
      sayHi();
      
      //默认启动设备
      @autoreleasepool {
          return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
      }
}
