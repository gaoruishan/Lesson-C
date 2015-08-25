//
//  main.m
//  L06DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "People.h"

// Hello begin>>>>>>>>>>>>>>>>>>

@interface Hello : NSObject{
      //私有属性
      int num;
}
//重写init
-(id)init;
-(void)sayHello;
@end

@implementation Hello
//init 类似java中的构造方法
- (instancetype)init
{
      self = [super init];
      if (self) {
            num=100;
      }
      return self;
}
-(void)sayHello{
      NSLog(@"Hello OC Class");
      NSLog(@"num is %d",num);
}
@end

//Hello end <<<<<<<<<<<<<<<<<<<<<<


int main(int argc, char * argv[]) {
      
      //方式1:Hello 分配内存 继承NSObject 的init
      Hello *h = [[Hello alloc] init];
      // 执行方法
      [h sayHello];
      
      //方式2: 使用系统的get set 方法和重写
      People *p =[[People alloc] init];
      p.age = 10;
//      [p setAge:20];
      
      NSLog(@"age %d",p.age);
//      NSLog(@"age %d",[p age]);
      
      //方式3: 使用工厂方法
      People *p1 =[People peopleWithAge:20 andName:@"XiaoMing"];
      NSLog(@"p.age %d,p.name %@",[p1 getAge],[p1 getName]);

      @autoreleasepool {
          return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
      }
}
