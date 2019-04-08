#ifndef TEST_LIB_H
#define TEST_LIB_H

typedef void (*asyncTestHandler_t)(void (*pass)(), void (*fail)(char* msg), char* msg);
typedef int (*syncTestHandler_t)();

int syncTest(char *testName, char *errMsg, int (*testCallback)());
void asyncTest(char *testName, char *errMsg, asyncTestHandler_t callback);

#endif
