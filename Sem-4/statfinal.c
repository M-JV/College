#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	struct stat sb;

    printf("File name:  stat3.c\n");

    printf("File Permissions: ");
    printf( (sb.st_mode & S_IRUSR) ? "read" : "-");
    printf( (sb.st_mode & S_IWUSR) ? " write " : "-");
    printf( (sb.st_mode & S_IXUSR) ? "execute" : "-");

    printf("\n");

	printf("Block size: %ld bytes\n",(long) sb.st_blksize);
	printf("File size:  %lld bytes\n",(long long) sb.st_size);
	printf("Blocks allocated:  %lld\n",(long long) sb.st_blocks);

	printf("Last status change:       %s", ctime(&sb.st_ctime));
	printf("Last file access:         %s", ctime(&sb.st_atime));
	printf("Last file modification:   %s", ctime(&sb.st_mtime));

	exit(EXIT_SUCCESS);
}
