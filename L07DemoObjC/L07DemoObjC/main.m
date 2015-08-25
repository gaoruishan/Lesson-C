//
//  main.m
//  L07DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

// 定义代码块  使用^ 币包函数
int (^max)(int,int);
//定义一个类型的代码块: 无返回值和无参数
typedef void (^sayHello)();

int main(int argc, char * argv[]) {
      
      //一，String 字符串 方式1:使用NSString;  方式2:使用格式输出 指定％d占位符 后面赋值;
      //方式3:使用URL 网页的字符串
      NSString *str=@"Hello OC";
      NSString *str1=[NSString stringWithFormat:@"This num is %d",100];
      
      NSString *str2=[NSString stringWithContentsOfURL:[NSURL URLWithString:@"http://www.baidu.com"] encoding:NSUTF8StringEncoding error:nil];
      NSLog(@"%@,%@,%@",str,str1,str2);
      
      // 二，Array 数组 方式1:使用NSArray;  方式2:使用arrayWithObjects 必须以nil 结尾
      // 方式3:使用arrayWithContentsOfFile 指定数据和类型
//      NSArray *arr =@[@"Hell0",@"Object-C"];
//      NSArray *arr = [NSArray arrayWithObjects:@"Hello",@"Object-C", nil];
      NSArray *arr = [NSArray arrayWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"data" ofType:@"plist"]];
      for (int i=0; i<[arr count]; i++) {
            NSLog(@"%@",[arr objectAtIndex:i]);
      }
      
      //三，可变数组
      NSMutableArray *arrm = [[NSMutableArray alloc] init];
      
      for (int i=0; i<100 ; i++) {
            [arrm addObject:[NSString stringWithFormat:@"Item %d",i]];
      }
      NSLog(@"%@",arrm);
      
      //四，字典 相当于java中的Map 是一种键值对形式
//      NSDictionary *dict = @{
//                             @"name":@"zhangsan",
//                             @"sex":@"男"
//                             };
      NSDictionary *dict = [NSDictionary dictionaryWithContentsOfFile:[[NSBundle mainBundle] pathForResource:@"data_dict" ofType:@"plist"]];
      //objectForKey 根据key 找到值
      NSLog(@"%@,%@",[dict objectForKey:@"name"],[dict objectForKey:@"sex"]);
      
      // 五，可变字典 可以修改内容长度不固定
      NSMutableDictionary *dictm = [[NSMutableDictionary alloc] init];
      [dictm setObject:@"Object-C" forKey:@"lesson"];
      NSLog(@"%@",[dictm objectForKey:@"lesson"]);
      
      //六，代码块
      max = ^(int a, int b){
            return a>b?a:b;
      };
      NSLog(@"max is %d\n",max(2,3));
      
      //实现并调用
      sayHello sh = ^(){
            NSLog(@"Hello ObjC Block");
      };
      sh();
      
      @autoreleasepool {
          return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
      }
}
