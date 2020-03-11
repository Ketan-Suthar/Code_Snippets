#include <sys/types.h>
#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
	DIR *dp;
	struct dirent *dirp;
	if(argc != 2)
		printf("a single argument (dire name) required \n");

	if((dp = opendir(argv[1])) == NULL)
		printf("cant open file\n");

	while((dirp = readdir(dp)) != NULL)
		printf("%s\n", dirp->d_name);

	closedir(dp);
	exit(0);
}