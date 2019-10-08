
#include "xen/init.h"

extern char Load$$_text$$Base[];
extern char Load$$_text$$Limit[];
extern char Load$$_init_text$$Base[];
extern char Load$$_init_text$$Limit[];

//void * __section(".dummy.data") linker_symbols[] = {};
void * linker_symbols[] = {Load$$_text$$Base, Load$$_text$$Limit, Load$$_init_text$$Base, Load$$_init_text$$Limit};

//int __section(".dummy.text") somefunc (void)
int somefunc (void)
{
    return sizeof(linker_symbols);
}

