// Emma Bilhimer
// Busch SP24
//  Stack.cpp

// QUEUE UNIT TEST DRIVER

#include "Stack.hpp"

#include <iostream>


void testQueue() {
        // creates a queue of integers (max of 5)
    Stack<int> queue(5);

        // enqueue elements in the queue
    queue.push(10);
    queue.push(20);
    queue.push(30);

        // dequeue elements from the queue
    std::cout << "Dequeue elements: " << std::endl;
    std::cout << queue.pop() << std::endl;
    std::cout << queue.pop() << std::endl;

        // enqueue more elements into the queue (can handle elements)
    queue.push(40);
    queue.push(50);
    queue.push(60);

        // dequeue all elements from the queue
    std::cout << "Dequeue all elements: " << std::endl;
    while (!queue.isEmpty()) {
        std::cout << queue.pop() << std::endl;
    }

        // check if the queue is empty
    if (queue.isEmpty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue is not empty" << std::endl;
    }
}
// check if performed correctly
int main() {
    std::cout << "Testing Queue Implementation using Stack" << std::endl;
    testQueue();
    return 0;
}


/* What I did In this cpp:
 
initialize a queue (using a stack) of integers with a maximum size of 5-

adds elements (10, 20, and 30) into the queue using the push method-

removes elements from the queue using the pop method (on OneNote).

adds more elements (40, 50, and 60) into the queue. the queue can also handle these elements :)

continuously dequeues all elements from the queue until it becomes empty. This ensures that
 the queue correctly handles multiple enqueue and dequeue operations.

checks if the queue is empty after all elements have been dequeued- if empty, checks if elements were performed correctly.

 */
