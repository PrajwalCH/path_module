/*
 * Author      : Prajwal Chapagain <prajjwal2058@gmail.com>
 * Date        : Monday Sep 06, 2021 09:09:35 NPT
 * License     : MIT
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "path.h"


int main(int argc, char **argv)
{
    char *pathname = argv[1] ? argv[1] : "root/hello.txt";

    struct Path path = path_parse(pathname);
    path_dbgln(pathname, &path);
    path_free_mem(&path);
    return 0;
}

