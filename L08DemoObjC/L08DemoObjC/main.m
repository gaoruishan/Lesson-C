//
//  main.m
//  L08DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Man.h"
#import "ManDelegate.h"

// 定义ManListener一个类来监听 实现ManDelegate 接口
@interface ManListener : NSObject<ManDelegate>

-(void)onAgeChange:(int)age;

@end

//实现方法 ManListener 重写onAgeChange
@implementation ManListener

-(void)onAgeChange:(int)age{
      NSLog(@"Age changed, Current age is %d",age);
}

@end

int main(int argc, char * argv[]) {
      
      //1,Man分配内存 初始化 执行Man.m 中 - (instancetype)init方法
      Man *m = [[Man alloc] init];
      //2,m对象指针 执行Man.h 中 @property id<ManDelegate> delegate;
      //将定义ManListener一个类来监听实体放入 setDelegate
      [m setDelegate:[[ManListener alloc]init]];
      //3,m对象指针 执行Man.m 中-(void)setAge:(int)age;
      //与初始化的不同，则回调给实现接口ManLisenter 执行onAgeChange打印log
      [m setAge:21];
      
      NSLog(@"%@",[m getName]);
      
      @autoreleasepool {
          return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
      }
}
