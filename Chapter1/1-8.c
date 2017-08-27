/*
 * =====================================================================================
 *
 *       Filename:  1-8.c
 *
 *    Description:  从标准输入读入命令行
 *
 *        Version:  1.0
 *        Created:  2017年08月27日 22时32分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <string.h>
#include <signal.h>

static void sig_int(int signo)
{
    printf("interrupt comming\n");
}

int main()
{
    char buf[128];
    pid_t pid;
    int status;

    if (signal(SIGINT, sig_int) == SIG_ERR)
    {
        perror("signal error");
    }
    printf("$");
    while (fgets(buf, 128, stdin)!= NULL)
    {
        if (buf[strlen(buf) - 1] == '\n')
        {
            buf[strlen(buf) - 1] = 0;
        }

        if ((pid = fork()) < 0)
        {
            perror("fork error");
        }
        else if (pid == 0)
        {
            execlp(buf, buf, (char*)0);
            printf("couldn't execute:%s", buf);
            exit(127);
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
