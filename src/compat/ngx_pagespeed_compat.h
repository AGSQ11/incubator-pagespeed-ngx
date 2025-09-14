#ifndef NGX_PAGESPEED_COMPAT_H_
#define NGX_PAGESPEED_COMPAT_H_

#ifdef __cplusplus
extern "C" {
#endif

// Forward declarations for compatibility functions
extern char **sys_siglist;
extern int pthread_mutex_consistent_np(void *mutex);
extern int pthread_mutexattr_setrobust_np(void *attr, int robust);
extern int pthread_yield(void);

#ifdef __cplusplus
}
#endif

#endif  // NGX_PAGESPEED_COMPAT_H_