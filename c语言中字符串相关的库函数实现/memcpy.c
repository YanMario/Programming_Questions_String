//
// Created by yanpan on 2019/1/18.
//

#if 0

#include <stdio.h>
#include <string.h>

void* mymemcpy(void *str, const void* src, int len)
{
    //对参数进行判断，判断是不是合法参数
    if(str == NULL || src == NULL)
        return NULL;

    char *adress_str;
    const char *adress_src;

    //判断str 与 src的位置关系，复制的时候不能把即将要复制的内容覆盖
    if(str > src + len || str < src)
    {
        adress_str = (char*)str;
        adress_src = (char*)src;
        while(len--)
            *adress_str++ = *adress_src++;
    }
    //如果从低地址复制的时候会被覆盖，就要从高地址开始复制
    else
    {
        adress_str = (char*)(str + len -1);
        adress_src = (char*)(src + len -1);
        while(len--)
            *adress_str-- = *adress_src--;
    }
    //返回str的起始位置
    return str;
}


int main()
{
    char str[] = "hello";
    char src[] = "world";
    mymemcpy(str, src, strlen(src));
    printf("%s\n", str);
    return 0;
}

#endif