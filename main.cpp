#include <iostream>
#include "CircularQueue.hpp"

int main() {
    //construindo uma fila de inteiro com 5 posicoes
    CircularQueue<int> queue(5);

    // Enfileirando alguns elementos
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);

    // Desenfileirando elementos
    std::cout << "Desenfileirado: " << queue.dequeue() << std::endl;
    std::cout << "Desenfileirado: " << queue.dequeue() << std::endl;

    // Enfileirando mais elementos
    queue.enqueue(4);
    queue.enqueue(5);

    // Verificando o tamanho atual da fila
    std::cout << "Tamanho atual da fila: " << queue.size() << std::endl;

    // Enfileirando um elemento adicional
    queue.enqueue(6);

    // Verificando se a fila está cheia
    std::cout << "Fila está cheia? " << (queue.isFull() ? "Sim" : "Não") << std::endl;

    return 0;
}