#ifndef __DEBUG_LOG_H__
#define __DEBUG_LOG_H__
#if DEBUG_LOGS
    #define LOG(f_ , ...) printf((f_), ##__VA_ARGS__)
#else
    #define LOG(f_ , ...) do {} while (0)
#endif
#endif /* __DEBUG_LOG_H__ */