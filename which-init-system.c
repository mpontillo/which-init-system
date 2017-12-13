/*
 * which-init-system.c
 * 
 * Prints out the path of the executable of the init system in-use (PID 1).
 */


#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char* argv[]) {
    ssize_t result_size;
    char result[PATH_MAX+1];
    result_size = readlink("/proc/1/exe", result, PATH_MAX);
    if(result_size < 0) {
        perror("readlink");
        return errno;
    }
    result[result_size] = '\0';
    printf("%s\n", result);
    return 0;
}
