#include <stdio.h>
int main(){
    char grade;
    printf("请输入你的评级:");
    scanf("%c",&grade);
    switch(grade){
            case 'A':printf("你的成绩非常优秀");break;
            case 'B':printf("你的成绩还可以哦");break;
            case 'C':printf("你的成绩中等吧");break;
            case 'D':printf("加油！");break;
            default:printf("什么鬼？");break;
    }
    return 0;
}    