/*
 * =====================================================================================
 *
 *       Filename:  1-7.c
 *
 *    Description:  打印用户ID和组ID
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 22时18分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main()
{
    printf("uid = %d, gid = %d\n", getuid(), getgid());
    return 0;
}
