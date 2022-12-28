//
// Created by ziya on 22-7-15.
//

#include "../include/unistd.h"

_syscall3(int, write, int, fd, const char *, buf, int, count)