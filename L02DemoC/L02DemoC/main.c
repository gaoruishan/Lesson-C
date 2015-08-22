//
//  main.c
//  L02DemoC
//
//  Created by gaoruishan on 15/8/22.
//  Copyright (c) 2015年 gaoruishan. All rights reserved.
//

#include <stdio.h>
//引入标准库
#include <stdlib.h>
//定义宏 在编译阶段执行，运行速度快
#define MATH_PI 3.14

//定义宏方法 1,加 \把多行当作一行对待;2, 不需要指定类型

#define MAX(A,B) \
 A>B?A:B


void test(int score){
      if (score>=90) {
            printf("优秀\n");
      }else if (score>=80){
            printf("良好\n");
      }else if (score>=60){
            printf("及格\n");
      }else{
            printf("不及格");
      }
}

void test1(int score){
      switch (score/10) {
            case 9:
                  printf("优秀\n");
                  break;
            case 8:
                  printf("良好\n");
                  break;
            case 7:
            case 6:
                  printf("及格\n");
                  break;
            default:
                  printf("不及格");
                  break;
      }
}

//结构体
struct People{
      int age;
      char *name;
};

//函数指针  方法名赋值给指针函数，然后调用
void sayHello(){
      printf("sayHello");
}
int main(int argc, const char * argv[]) {
      // insert code here...
      printf("Hello, %f\n",MATH_PI);
      printf("宏方法计算最大值,%d\n",MAX(10,20));
     
     // test(80);
      test1(67);
      for ( int i=0; i<10; printf("数字：%d\n",i++)) {
            //方法体 在迭代变量前执行
            printf(">>>\n");
      }
      //1,普通结构体
      struct People p;
      p.age=10;
      p.name="小米";
      
      printf("People:%s\n",p.name);
      
      struct People p1=p;
      //注：在此修改p不会改变p1
      p.age=15;
      printf("People1:%d\n",p1.age); //10
      
      //2,结构体指针， 指针用 * 访问用 -> ;使用malloc 分配内存 要free();
      struct People * p2 = malloc(sizeof(struct People));
      p2->age =13;
      p2->name = "xiaoming";
      
      printf("People2:%s\n",p2->name);

      struct People *p3=p2;
      //注：在此修改p2会改变p3 因为指向同一内存地址
      p2->age = 11;
      printf("People3:%d\n",p3->age);//11
      
      //释放内存
      free(p2);
      
      //void 没有返回值,() 没有参数的 指针*s
      void (*s)();
      s=sayHello;
      s();
      return 0;
}
