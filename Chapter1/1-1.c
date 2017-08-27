#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

void listAllDir(void)
{
    DIR *dp;
    struct dirent *dirp;
    if ((dp = opendir("/home/sunjunior/Projects")) == NULL)
    {
        perror("can't open the dir");
    }
    while ((dirp = readdir(dp)) != NULL)
    {
        printf("%s\n", dirp->d_name);
    }
}


int main()
{
    listAllDir();
    return 0;
}
