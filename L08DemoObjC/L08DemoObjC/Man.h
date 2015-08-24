//
//  Man.h
//  L08DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IPeople.h"
#import "ManDelegate.h"

//定义一个对象Man , 使Man 继承NSObject  同时实现接口IPeople 多个使用 ,分开
@interface Man : NSObject<IPeople>{
      int _age;
}
//对ID init方法
-(id)init;

//实现IPeople接口中的方法
-(int)getAge;
-(void)setAge:(int)age;
-(NSString*)getName;

//任意一个实现(<>)了ManDelegate类型的对象,id 指代系统分配的ID
@property id<ManDelegate> delegate;

@end
