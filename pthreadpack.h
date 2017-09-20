/*************************************************************************
	> File Name: pthreadpack.h
	> Author: 
	> Mail: 
	> Created Time: 2017年09月20日 09时03分27秒 PDT
 ************************************************************************/

#ifndef _PTHREADPACK_H
#define _PTHREADPACK_H
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<assert.h>

#define MAXNUM 10
#define BUFLEN 1024
#define _RAND(max, min) (rand()%((max)- (min)) + min)

typedef struct event//线程实例结构体
{
    pthread_attr_t attr;//线程属性
    pthread_mutex_t mutex;//线程锁
    pthread_cond_t cond;//条件变量
}event_t;

typedef struct item//红包属性结构体
{
    int number; //红包数目
    int total; //红包总额
}item_t;
static item_t item = {0};

//函数声明
static void* _grab(void *args);

#endif
