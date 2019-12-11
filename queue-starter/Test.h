#ifndef TEST_H
#define TEST_H
#include "Queue.h"
#include <iostream>

class Test {
    public: 
        void test_isempty();
        void test_enqueue();
        void test_dequeue();
        void test_peekFront();
        void run_test();
};

#endif