#define _GNU_SOURCE
#include <signal.h>

#ifdef __cplusplus
extern "C" {
#endif

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

#ifdef __cplusplus
}
#endif