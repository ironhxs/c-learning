//
//  倒数分组求和.c
//  
//
//  Created by 贺鑫帅 on 2023/7/31.
//

#include <stdio.h>
int main (void){
    int i;
    int t1=0;
    int t2=0;
    for(i=1;i<100;i+=2)
        t1+=1/i;
    for(i=2;i<101;i+=2)
        t2+=1/i;
    printf("%d\n",t1-t2);
    return 0;
}
