/*
 * =====================================================================================
 *
 *       Filename:  1-4.c
 *
 *    Description: 打印进程ID 
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 18时22分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    printf("hello world from process ID %d\n", getpid());

    return 0;
}
