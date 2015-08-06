//
//  main.c
//  L01HelloC
//
//  Created by gaoruishan on 15/8/6.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#include <stdio.h>
 //说明：参数1:传入的数量；参数2:传入的值
/*
 1,打印格式换行，输入的内容中的空格标志，有空格的内容用加“”；printf("%s\n",argv[i]);
 */
int main(int argc, const char * argv[]) {
    // insert code here...
      for (int i=0;i<argc;i++) {
            printf("%s\n",argv[i]);
      }
    return 0;
}
