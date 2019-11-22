#include "Test.h"
using namespace std;

void Test::test_isempty(){
    Queue que;
    que.enqueue(1);
    if (que.isEmpty()){
        cout<<"IsEmpty does not work when queue has one item in queue."<<'\n';
    }
    else{
        cout<<"IsEmpty works when queue has one item in queue."<<'\n';
    }

    que.dequeue();
    if (que.isEmpty()){
        cout<<"IsEmpty works when queue is empty."<<'\n';
    }
    else{
        cout<<"IsEmpty does not work when queue is empty."<<'\n';
    }
}

void Test::test_enqueue(){
    Queue que;
    que.enqueue(1);
    if (que.peekFront() == 1){
        cout<<"Enqueue works correctly when one item is in queue."<<'\n';
    }
    else{
        cout<<"Enqueue does not work when one item is in queue."<<'\n';
    }
    que.enqueue(2);
    que.enqueue(3);
    que.enqueue(4);
    if (que.peekFront() == 1){
        cout<<"Enqueue works correctly when multiple items are in queue."<<'\n';
    }
    else{
        cout<<"Enqueue does not work when multiple items are in queue."<<'\n';
    }
}

void Test::test_dequeue(){
    Queue que;
    que.enqueue(1);
    que.dequeue();
    if (que.isEmpty()){
        cout<<"Dequeue works correctly when there was one item in queue."<<'\n';
    }
    else{
        cout<<"Dequeue does not work correctly when there was one item in queueu."<<'\n';
    }
    Queue que2;
    que2.enqueue(1);
    que2.enqueue(2);
    que2.enqueue(3);
    que2.enqueue(4);
    que2.dequeue();
    if (que2.peekFront() == 2){
        cout<<"Dequeue works correctly when there was more than one item in queue."<<'\n';
    }
    else{
        cout<<"Dequeue does not work correctly when there was more than one item in queue."<<'\n';
    }
}

void Test::test_peekFront(){
    Queue que;
    try{
        que.peekFront();
    }
    catch(runtime_error){
        cout<<"PeekFront works correctly when the queue is empty."<<'\n';
    }

    que.enqueue(1);
    if (que.peekFront() == 1){
        cout<<"PeekFront works correctly when there is one item in queue."<<'\n';
    }
    else{
        cout<<"PeekFront does not work correclty when there is one item in queue."<<'\n';
    }

    que.enqueue(2);
    que.enqueue(3);
    que.enqueue(4);
    if (que.peekFront() == 1){
        cout<<"PeekFront works correctly when there are more than one item in queue."<<'\n';
    }
    else{
        cout<<"PeekFront does not work correclty when there is more than one item in queue."<<'\n';
    }
    
}

void Test::run_test(){
    test_isempty();
    test_dequeue();
    test_enqueue();
    test_peekFront();
}
