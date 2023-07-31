//
//  main.c
//  九九乘法表
//
//  Created by 贺鑫帅 on 2023/7/31.
//

#include <stdio.h>
int main(void){
    int i,t;
    for (i=1;i<10;i++){
        for(t=1;t<10;t++)
        printf("%d*%d=%d\n",i,t,i*t);
    }
    
    return 0;
};
