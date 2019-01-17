//
// Created by yanpan on 2019/1/17.
//

#if 0

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//返回char * 可以链式拷贝
char *mystrcpy(char *str, const char* src)
{
    if(str == NULL || src == NULL)
        return NULL;

    //记录str的起始地址，返回这个起始地址
    char *addres = str;

    //将src的字符拷贝到str中，当遇到'\0'时则停止拷贝
    while((*(str++) = *(src++)) != '\0');

    return addres;
}
void show(const char *str)
{
    if(str == NULL)
        return;
    while(*str != '\0')
    {
        printf("%c", *str);
        str++;
    }
    printf("\n");
}
int main()
{
    const char *src = "world";
    char str[] = "hello world";
    char * p = mystrcpy(str, src);
    show(p);
    return 0;
}

#endif