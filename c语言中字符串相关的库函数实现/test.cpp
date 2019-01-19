//
// Created by yanpan on 2019/1/19.
//
#if 0
#include<iostream>
#include<string>

using namespace std;

int main()
{
    char s[]="lanzhihui is\0 a good boy!";
    char name[30];
    cout<<sizeof(s)<<endl;
    strcpy(name,s);//拷贝以'\0'结束

    cout<<name<<endl;//输出以'\0'结束

    strncpy(name,s,26);//拷贝以'\0'结束

    int n = sizeof(name) / sizeof(name[0]);
    cout<< "n: "<< n << endl;
    int i = 0;
    while(i < 25)
    {
        cout<<name[i];
        i++;
    }
    cout<<endl;
    return 0;
}
#endif