# Compatibility Fixes for Modern Systems

This directory contains compatibility files to address issues with:
1. C++20 template constructor/destructor compatibility
2. glibc 2.34+ symbol compatibility issues

## Files

- `ngx_pagespeed_compat.s` - Assembly file providing weak symbol aliases for pthread functions
- `ngx_pagespeed_siglist.c` - C implementation of sys_siglist for newer glibc versions
- `ngx_pagespeed_compat.h` - Header file with declarations

## Purpose

These files resolve linker errors when building with newer versions of glibc where:
- `pthread_mutex_consistent_np` was replaced with `pthread_mutex_consistent`
- `pthread_mutexattr_setrobust_np` was replaced with `pthread_mutexattr_setrobust`
- `pthread_yield` was replaced with `sched_yield`
- `sys_siglist` was removed or moved

The assembly file creates jump instructions to the new symbol names, and the C file provides a compatible implementation of sys_siglist.
