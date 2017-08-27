/*
 * =====================================================================================
 *
 *       Filename:  1-6.c
 *
 *    Description:  strerror和perror使用方法
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 19时41分23秒
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
#include <string.h>
#include <errno.h>

int main(int argc, char *argv[])
{
    fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
    errno = ENOENT;
    perror(argv[0]);

    return 0;
}
