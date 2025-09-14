.text
.globl pthread_mutex_consistent_np
.globl pthread_mutexattr_setrobust_np
.globl pthread_yield

pthread_mutex_consistent_np:
    jmp pthread_mutex_consistent

pthread_mutexattr_setrobust_np:
    jmp pthread_mutexattr_setrobust

pthread_yield:
    jmp sched_yield