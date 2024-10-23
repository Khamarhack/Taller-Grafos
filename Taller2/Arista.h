#ifndef ARISTA_H
#define ARISTA_H

#include <memory>

template <typename T, typename W>
class Vertice; // Declaración anticipada con dos parámetros

template <typename T, typename W>
class Arista {
public:
    std::shared_ptr<Vertice<T, W>> destino; // Usa dos parámetros
    W peso;

    Arista(std::shared_ptr<Vertice<T, W>> dest, W peso);
};

#include "Arista.hxx"

#endif // ARISTA_H
