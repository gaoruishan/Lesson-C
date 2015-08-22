//
//  main.c
//  L04DemoC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//文件写入
void writeFile(char *filename){
      //在当前目录 创建data.txt, w写入Hello C, 关闭文件
      FILE *f=fopen(filename, "w");
      fprintf(f, "Hello C\n");
      fclose(f);
}
//文件读取
void readFile(char *filename){
      FILE *f1=fopen(filename, "r");
      //将指针读取到文件末尾
      fseek(f1, 0, SEEK_END);
      long size=ftell(f1);
      printf("%ld\n",size);
      char buf[size+1];
      //在写入buf前将指针回到开始位置
      fseek(f1, 0, SEEK_SET);
      fread(buf,sizeof(unsigned char), size, f1);
      buf[size]='\0';
      fclose(f1);
      printf("%s",buf);
}

char *FILENAME ="data.txt";

int main(int argc, const char * argv[]) {
      
//      writeFile(FILENAME);
//      readFile(FILENAME);
      
      srand((int)time(NULL));
      
      //默认随机种子开始
      int randNum = rand()%100;
      
      printf("输入一个0到100的数值\n");
      int userInput;
      while (1){
            scanf("%d",&userInput);
            if (userInput<randNum) {
                  printf("数值过小\n");
            }else if(userInput<randNum){
                  printf("数值过大\n");
            }else{
                  printf("正确\n");
                  break;
            }
                  
      }
      //exit 退出程序  
      printf("exit\n");
    return 0;
}
