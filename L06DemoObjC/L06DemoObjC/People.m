//
//  People.m
//  L06DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import "People.h"

@implementation People

+(People*)peopleWithAge:(int)age andName:(NSString*)name{
      return [[People alloc] initWithAge:age andName:name];
}
- (instancetype)initWithAge:(int)age andName:(NSString *)name
{
      self = [super init];
      if (self) {
            _age=age;
            _name=name;
      }
      return self;
}
//重写
-(void)setAge:(int)age{
      NSLog(@"set age");
      _age=age;
}
-(int)getAge{
      NSLog(@"get age");
      return _age;
}
-(NSString*)getName{
      NSLog(@"get name");
      return _name;
}
@end
