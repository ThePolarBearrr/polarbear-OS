//
// Created by ziya on 22-6-26.
//

#ifndef ZIYA_OSKERNEL_TEACH_TTY_H
#define ZIYA_OSKERNEL_TEACH_TTY_H

#include "types.h"

void console_init(void);
int console_write(char *buf, u32 count);

#endif //ZIYA_OSKERNEL_TEACH_TTY_H
