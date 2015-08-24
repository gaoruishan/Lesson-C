//
//  Man.m
//  L08DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import "Man.h"

@implementation Man

//实现init方法 进行初始化
- (instancetype)init
{     //self 指代Man 这个类
      self = [super init];
      if (self) {
            //赋值为空
            self.delegate=nil;
            _age=20;
      }
      return self;
}

-(int)getAge{
      return _age;
}
-(void)setAge:(int)age{
      if (age!=_age) {
            //如果有值 传给delegate接口，回调给实现接口ManLisenter
            if(self.delegate){
                  [self.delegate onAgeChange:age];
            }
      }
      _age=age;
}
-(NSString*)getName{
      return @"ZhangSan ";
}
@end
