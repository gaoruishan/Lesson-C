//
//  People.h
//  L06DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface People : NSObject{
     //定义一个变量 对get set 附加其他操作
     int _age;
     NSString *_name;
}

+(People*)peopleWithAge:(int)age andName:(NSString*)name;
-(id)initWithAge:(int)age andName:(NSString*)name;

-(int)getAge;
-(NSString*)getName;
//自动生成get set 方法
@property int age;

@end
