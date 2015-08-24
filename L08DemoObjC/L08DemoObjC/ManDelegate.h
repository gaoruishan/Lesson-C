//
//  ManDelegate.h
//  L08DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <foundation/foundation.h>

//定义一个接口来监听age变化
@protocol ManDelegate <NSObject>

-(void)onAgeChange:(int)age;

@end