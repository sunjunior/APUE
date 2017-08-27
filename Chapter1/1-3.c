/*
 * =====================================================================================
 *
 *       Filename:  1-3.c
 *
 *    Description:  标准输入输出的程序实例
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 18时08分13秒
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

int main()
{
    int c;
    while ((c = getc(stdin)) != EOF)
    {
        if (putc(c,stdout) == EOF)
        {
            perror("output error");
        }
        if (c == '\n')
        {
            break;
        }
    }



    return 0;
}
