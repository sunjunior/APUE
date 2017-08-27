/*
 * =====================================================================================
 *
 *       Filename:  1-2.c
 *
 *    Description:  将标准输入复制到标准输出
 *    
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 17时49分59秒
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

#define BUFFSIZE 4096

int main()
{
    int n;
    char buf[BUFFSIZE];
    while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
    {
        if (write(STDOUT_FILENO, buf, n) != n)
        {
            perror("write error");
        }

        if (buf[0] == '\n')
        {
            break;
        }
    }

    if (n < 0)
    {
        printf("read error");
    }

    return 0;
}
