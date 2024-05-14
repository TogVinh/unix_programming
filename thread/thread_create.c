#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <pthread.h>

pthread_t thread_id1, thread_id2;

typedef struct 
{
    char name[32];
    char msg[32];
}thr_data_t;

static void *thr_handle(void *args)
{
    pthread_t tid = pthread_self();
    thr_data_t *data = (thr_data_t *)args;

    if (pthread_equal(tid, thread_id1))
    {
        /* code */
        printf("this is thread 1\n");
    }
    else
    {
        printf("this is thread 2 \n\n");
        printf("Hi %s - join |%s|", data->name, data->msg);
    }
    
}

static void *thr_handle2 (void *args)
{
    printf("Hi, this is thread handle 2");
}

int main(int argc, char const *argv[])
{
    int ret;
    thr_data_t data = {0};

    strncpy(data.name, "KaneTong", sizeof(data.name));
    strncpy(data.msg, "thread programming", sizeof(data.msg));

    if(ret = pthread_create(&thread_id1, NULL, &thr_handle, NULL))
    {
        printf("Fail to create thread |%d|", ret);
        return -1;
    }

    sleep(2);

    if(ret = pthread_create(&thread_id2, NULL, &thr_handle, &data))
    {
        printf("Fail to create thread |%d|", ret);
        return -1;
    }

    sleep(5);


    return 0;
}
