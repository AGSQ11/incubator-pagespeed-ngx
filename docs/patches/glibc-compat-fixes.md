# glibc 2.34+ Compatibility Fixes

## Issue

When building on systems with glibc 2.34 or newer, linker errors occur due to symbol changes:
```
undefined reference to `pthread_mutex_consistent_np`
undefined reference to `pthread_mutexattr_setrobust_np`
undefined reference to `pthread_yield`
undefined reference to `sys_siglist`
```

## Solution

Created compatibility files in `src/compat/` that provide the missing symbols by:
1. Creating assembly jump instructions for pthread functions
2. Providing a C implementation of sys_siglist

## Files

- `src/compat/ngx_pagespeed_compat.s` - Assembly file with jump instructions
- `src/compat/ngx_pagespeed_siglist.c` - C implementation of sys_siglist
- `src/compat/ngx_pagespeed_compat.h` - Header file

## Changes to Build System

Modified the build process to include the compatibility object files when linking.
