//
//  IPeople.h
//  L08DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//
#import <Foundation/Foundation.h>

//定义一个协议 相当于java中的接口
@protocol IPeople <NSObject>

//方法名不能带（）
-(int)getAge;
-(void)setAge:(int)age;
-(NSString*)getName;

@end