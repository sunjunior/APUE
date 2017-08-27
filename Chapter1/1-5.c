/*
 * =====================================================================================
 *
 *       Filename:  1-5.c
 *
 *    Description:  从标准输入读取命令并且执行
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 18时25分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    char buf[128];
    pid_t pid;
    int status;
    printf("$ ");
    while (fgets(buf, 128, stdin) != NULL)
    {
        if (buf[strlen(buf) - 1] == '\n')
        {
            buf[strlen(buf) - 1] = 0;
        }
        if ((pid = fork()) < 0)
        {
            perror("fork error");
        }
        else if (pid == 0) //子进程
        {
            status = execlp(buf, buf, (char*)0);
            if (status == -1)
            {
                perror("couldn't execute");
                exit(-1);
            }
        }
        /* parent */
        if ((pid = waitpid(pid, &status, 0)) < 0)
        {
            perror("waitpid error");
        }
        printf("$");

    }


    return 0;
}
