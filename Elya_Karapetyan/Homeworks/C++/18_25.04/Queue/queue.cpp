#include "queue.hpp"

Queue::Queue() : m_array(nullptr)
               , m_size(0)
               , m_front(0)
               , m_rear(0) {}

Queue::Queue(const int size) : m_size(size)
                             , m_front(0)
                             , m_rear(0) {
    m_array = new int[m_size];
}

Queue::Queue(const Queue& object) {
    m_size = object.m_size;
    m_array = new int [m_size];
    m_front = object.m_front;
    m_rear = object.m_rear;
    for (int i = 0; i < m_size; ++i) {
        m_array[i] = object.m_array[i];
    }
}

Queue::~Queue() {
    delete[] m_array;
    m_array = nullptr;
}

bool Queue::isEmpty() const {
    return m_front == m_rear;
}

bool Queue::isFull() const {
    return  m_rear == m_size;
}

int Queue::getSize() const {
    return m_rear - m_front;    
}


void Queue::push(const int value) {
    if (isFull()) {
        std::cout << "\nQueue is full! Can not add any element!\n" << std::endl;
        return;
    }
    m_array[m_rear] = value;
    ++m_rear;
}

void Queue::pop() {
    if (isEmpty()) {
        std::cout << "\nQueue is empty! Can not delete any elemet!\n" << std::endl;
        return;
    }
    if (m_front == m_rear) {
        m_front = m_rear = -1;
        return;
    }
    ++m_front;
}

int& Queue::front() {
    if (isEmpty()) {
        std::cout << "\nQueue is empty! Ther isn't front value!\n" << std::endl;
        return m_rear;
    }
    return m_array[m_rear - 1];
}

int& Queue::back() {
    if (isEmpty()) {
        std::cout << "\nQueue is empty! Ther isn't back value!\n" << std::endl;
        return m_front;
    }
    return m_array[m_front];
}


void Queue::print() const {
    if (isEmpty()) {
        std::cout << "\nQueue is empty!\n" << std::endl;
        return;
    }
    std::cout << "\nQueue --> ";
    for (int i = m_front; i < m_rear; ++i) {
        std::cout << m_array[i] << " ";
    }
    std::cout << std::endl << std::endl;
}
