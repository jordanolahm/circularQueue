#include "CircularQueue.hpp"

template <typename T>
CircularQueue<T>::CircularQueue(int capacity) {
    this->capacity = capacity;
    this->next = this->behind = -1;
    this->array = new T[capacity];
}

template <typename T>
CircularQueue<T>::~CircularQueue() {
    delete[] array;
}

template <typename T>
bool CircularQueue<T>::isEmpty() const {
    return next == -1;
}

template <typename T>
bool CircularQueue<T>::isFull() const {
    return (behind + 1) % capacity == next;
}

template <typename T>
void CircularQueue<T>::enqueue(const T& item) {
    if (isFull()) {
        // Fila está cheia, não podemos enfileirar mais elementos.
        return;
    }
    if (isEmpty()) {
        next = behind = 0;
    } else {
        behind = (behind + 1) % capacity;
    }
    array[behind] = item;
}

template <typename T>
T CircularQueue<T>::dequeue() {
    if (isEmpty()) {
        // Fila está vazia, não podemos desenfileirar.
        return T();
    }
    T item = array[next];
    if (next == behind) {
        // Último elemento na fila.
        next = behind = -1;
    } else {
        next = (next + 1) % capacity;
    }
    return item;
}

template <typename T>
int CircularQueue<T>::size() const {
    if (isEmpty()) {
        return 0;
    }
    return (capacity - next + behind + 1) % capacity;
}