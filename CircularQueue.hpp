#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

template <typename T>
class CircularQueue {

public:
    //constructor
    CircularQueue(int capacity);
    
    //destructor
    ~CircularQueue();
    
    //function verifica se esta vazio
    bool isEmpty() const;
    
    //function se esta cheia
    bool isFull() const;
    
    //function enfileirar
    void enqueue(const T& item);
    
    //function desenfileirar
    T dequeue();
    
    //funtion retorna o tamanho da fila
    int size() const;

private:
    int next;        // Índice do elemento da frente
    int behind;         // Índice do elemento de trás
    int capacity;    // Capacidade máxima da fila
    T* array;        // Vetor que armazena os elementos da fila
    // int size;      // Tamanho atual da fila
};

#endif // CIRCULARQUEUE_H