#pragma once

#ifndef CONFIG_ASYNC_TCP_USE_WDT
#define CONFIG_ASYNC_TCP_USE_WDT 1 //if enabled, adds between 33us and 200us per event
#endif

//If core is not defined, then we are running in Arduino or PIO
#ifndef CONFIG_ASYNC_TCP_RUNNING_CORE
#define CONFIG_ASYNC_TCP_RUNNING_CORE -1 //any available core
#endif

#ifndef CONFIG_ASYNC_TCP_STACK_SIZE
#define CONFIG_ASYNC_TCP_STACK_SIZE (8192*2)
#endif

#ifndef CONFIG_ASYNC_TCP_PRIORITY
#define CONFIG_ASYNC_TCP_PRIORITY (3)
#endif

#ifndef CONFIG_ASYNC_TCP_EVENT_QUEUE_SIZE
#define CONFIG_ASYNC_TCP_EVENT_QUEUE_SIZE 32
#endif 

#ifndef CONFIG_ASYNC_TCP_BACKLOG
#define CONFIG_ASYNC_TCP_BACKLOG 5
#endif 

#define ASYNC_MAX_ACK_TIME 5000

