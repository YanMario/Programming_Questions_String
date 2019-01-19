//
// Created by yanpan on 2019/1/19.
//

/**********************************strncpy**********************************/
//拷贝n个字节的字符到str指向的数组中，当遇到'/0'时，会继续拷贝'\0'字符到str数组中，直到拷贝了n个字符

#if 1

#include <stdio.h>
#include <string.h>

char* mystrncpy(char* str,const char* src, int n)
{
    if(str == NULL || src == NULL)
        return NULL;
    char *addres_str;
    const char *addres_src;
    addres_str = str;
    int i = 0;

    //当复制的n个字节的字符遇到了'\0'时 就不再复制'\0'字符后边的字符了，接下来填充'\0'字符直到填到n个字符
    while(i < n && *src != '\0')
    {
        *addres_str++ = *src++;
        i++;
    }

    //接下来填充'\0'字符直到填到第n个字符
    while(i < n)
    {
        *addres_str++ = '\0';
        i++;
    }

    return str;
}

int main()
{
    char *src = "yanpan ,\0hhaha";
    char name[30];
    mystrncpy(name, src, sizeof(name));
    printf("%s\n", name);
    int i = 0;
    while(i < 30)
    {
        printf("%c", name[i]);
        i++;
    }

    return 0;
}

#endif


