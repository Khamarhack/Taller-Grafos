#ifndef VERTICE_H
#define VERTICE_H

#include <vector>
#include <memory>
#include <iostream>
#include "Arista.h"

template <typename T, typename W>
class Vertice {
public:
    T dato;
    std::vector<std::shared_ptr<Arista<T, W>>> aristas; // Usa dos parámetros

    Vertice(T dato);
    void agregarArista(std::shared_ptr<Vertice<T, W>> destino, W peso);
    void imprimir() const;
    bool buscarArista(std::shared_ptr<Vertice<T, W>> destino) const;
};

#include "Vertice.hxx"

#endif // VERTICE_H


