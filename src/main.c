#include <ultra64.h>

extern OSThread D_801524C0;
extern void Thread1_Idle(void *arg);
extern void *D_80154670;

void CreateThread(OSThread *thread, OSId id, void (*entry)(void *), void *arg, void *sp, OSPri pri) {
    thread->next = NULL;
    thread->queue = NULL;
    osCreateThread(thread, id, entry, arg, sp, pri);
}

void Main(void) {
    osInitialize();
    CreateThread(&D_801524C0, 1, Thread1_Idle, NULL, &D_80154670, 100);
    osStartThread(&D_801524C0);
}

// TODO: Thread1_Idle may be a part of this file, this showcases compiled matching code.
