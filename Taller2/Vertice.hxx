#include "Vertice.h"

template <typename T, typename W>
Vertice<T, W>::Vertice(T dato) : dato(dato) {}

template <typename T, typename W>
void Vertice<T, W>::agregarArista(std::shared_ptr<Vertice<T, W>> destino, W peso) {
    aristas.push_back(std::make_shared<Arista<T, W>>(destino, peso)); // Usa dos parámetros
}

template <typename T, typename W>
void Vertice<T, W>::imprimir() const {
    std::cout << "Vértice: " << dato << " tiene aristas a: ";
    for (const auto& arista : aristas) {
        std::cout << arista->destino->dato << " (peso: " << arista->peso << "), ";
    }
    std::cout << std::endl;
}

template <typename T, typename W>
bool Vertice<T, W>::buscarArista(std::shared_ptr<Vertice<T, W>> destino) const {
    for (const auto& arista : aristas) {
        if (arista->destino == destino) {
            return true;
        }
    }
    return false;
}

