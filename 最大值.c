//
//  最大值.c
//  
//
//  Created by 贺鑫帅 on 2023/7/31.
//

#include <stdio.h>
int main(void){
    int num[10];
    int i;
    for(i=0;i<10;i++)
        scanf("%d",&num[i]);
    int max=num[0];
    for(i=0;i<10;i++)
    {if (num[i]>max)
        max=num[i];}
    printf("最大值是%d\n",max);
    return 0;
}

