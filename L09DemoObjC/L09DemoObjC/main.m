//
//  main.m
//  L09DemoObjC
//
//  Created by gaoruishan on 15/8/23.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"

// 类 A
@interface A : NSObject

@end
@implementation A

@end
//类 AA
@interface AA : A

@end
@implementation AA

@end
//类 B
@interface B : NSException

@end
@implementation B

@end
int main(int argc, char * argv[]) {
      
      A *a = [[A alloc] init];
      
      //一 ,判读类型 isKindOfClass 是否属于后面的类; 1代表true ,0代表false
      NSLog(@"%d",[a isKindOfClass:[B class]]);//0
      
      //二, 异常处理
      @try {
            @throw [B  exceptionWithName:@"My Error" reason:nil userInfo:nil];
      }
      @catch (NSException *exception) {
            NSLog(@"%@",exception);
      }
      @finally {
            NSLog(@"run");
      }
      
      @autoreleasepool {
          return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
      }
}
