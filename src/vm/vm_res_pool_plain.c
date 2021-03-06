/* Virtual Machine : Resource Management : Plain Pool
 * Copyright(C) 2013-2014 Cheryl Natsu

 * This file is part of multiple - Multiple Paradigm Language Emulator

 * multiple is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * multiple is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 */

#include "selfcheck.h"

#include <stdlib.h>

#include "vm_res_pool_plain.h"

/* Initialize and release pool */
void *virtual_machine_resource_pool_plain_init(size_t size)
{
    /* Do nothing */
    (void)size;

    return NULL;
}

int virtual_machine_resource_pool_plain_uninit(void *pool_ptr)
{
    (void)pool_ptr;

    return 0;
}

/* Allocate and deallocate memory */
void *virtual_machine_resource_pool_plain_malloc(void *pool_ptr, size_t size)
{
    (void)pool_ptr;

    return malloc(size);
}

int virtual_machine_resource_pool_plain_free(void *pool_ptr, void *ptr)
{
    (void)pool_ptr;

    free(ptr);
    return 0;
}

/* Lack */
int virtual_machine_resource_pool_plain_lack(void *pool_ptr)
{
    (void)(pool_ptr);

    return 0;
}

