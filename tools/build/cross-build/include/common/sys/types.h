#pragma once
#include_next <sys/types.h>
/*
 * elftoolchain includes sys/elf32.h which expects that uint32_t is defined
 * However, it only includes <sys/types.h> and not <stdint.h>
 */
#include <stdint.h>

#ifdef __linux__
typedef uintptr_t __uintptr_t;
#endif

/* needed for gencat */
typedef int __nl_item;

typedef size_t u_register_t;


/* capsicum compat: */
#ifndef _CAP_IOCTL_T_DECLARED
#define	_CAP_IOCTL_T_DECLARED
typedef	unsigned long	cap_ioctl_t;
#endif

#ifndef _CAP_RIGHTS_T_DECLARED
#define	_CAP_RIGHTS_T_DECLARED
struct cap_rights;

typedef	struct cap_rights	cap_rights_t;
#endif
