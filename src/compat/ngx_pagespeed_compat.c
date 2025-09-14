#define _GNU_SOURCE
#include <signal.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
#include <sched.h>

#ifdef __cplusplus
extern "C" {
#endif

// Provide compatibility symbols for newer glibc versions
// In glibc 2.34+, these symbols were moved from libpthread to libc or have different names

// Define sys_siglist directly with string literals
const char *const sys_siglist[32] = {
    "Unknown signal",           /* 0 */
    "Hangup",                   /* 1 SIGHUP */
    "Interrupt",                /* 2 SIGINT */
    "Quit",                     /* 3 SIGQUIT */
    "Illegal instruction",      /* 4 SIGILL */
    "Trace/breakpoint trap",    /* 5 SIGTRAP */
    "Aborted",                  /* 6 SIGABRT */
    "Bus error",                /* 7 SIGBUS */
    "Floating point exception",  /* 8 SIGFPE */
    "Killed",                   /* 9 SIGKILL */
    "User defined signal 1",    /* 10 SIGUSR1 */
    "Segmentation fault",       /* 11 SIGSEGV */
    "User defined signal 2",    /* 12 SIGUSR2 */
    "Broken pipe",              /* 13 SIGPIPE */
    "Alarm clock",              /* 14 SIGALRM */
    "Terminated",               /* 15 SIGTERM */
    "Stack fault",              /* 16 SIGSTKFLT */
    "Child exited",             /* 17 SIGCHLD */
    "Continued",                /* 18 SIGCONT */
    "Stopped (signal)",         /* 19 SIGSTOP */
    "Stopped",                  /* 20 SIGTSTP */
    "Stopped (tty input)",      /* 21 SIGTTIN */
    "Stopped (tty output)",     /* 22 SIGTTOU */
    "Urgent I/O condition",     /* 23 SIGURG */
    "CPU time limit exceeded",  /* 24 SIGXCPU */
    "File size limit exceeded", /* 25 SIGXFSZ */
    "Virtual timer expired",    /* 26 SIGVTALRM */
    "Profiling timer expired",  /* 27 SIGPROF */
    "Window changed",           /* 28 SIGWINCH */
    "I/O possible",             /* 29 SIGIO */
    "Power failure",            /* 30 SIGPWR */
    "Bad system call",          /* 31 SIGSYS */
};

// Define the missing pthread functions that are expected by the older PSOL library
// These map to the newer glibc functions

// pthread_mutex_consistent_np maps to pthread_mutex_consistent
int pthread_mutex_consistent_np(pthread_mutex_t *mutex) {
    return pthread_mutex_consistent(mutex);
}

// pthread_mutexattr_setrobust_np maps to pthread_mutexattr_setrobust
int pthread_mutexattr_setrobust_np(pthread_mutexattr_t *attr, int robust) {
    return pthread_mutexattr_setrobust(attr, robust);
}

// pthread_yield maps to sched_yield
int pthread_yield(void) {
    return sched_yield();
}

#ifdef __cplusplus
}
#endif