#ifndef GRAFO_H
#define GRAFO_H

#include <unordered_map>
#include <memory>
#include "Vertice.h"

template <typename T, typename W>
class Grafo {
public:
    std::unordered_map<T, std::shared_ptr<Vertice<T, W>>> vertices; // Usa dos parámetros

    void agregarVertice(T dato);
    void agregarArista(T origen, T destino, W peso);
    void imprimirGrafo() const;

    int obtenerCantidadVertices() const;
    int obtenerCantidadAristas() const;
    std::shared_ptr<Vertice<T, W>> buscarVertice(T dato) const;
    bool buscarArista(T origen, T destino) const;
};

#include "Grafo.hxx"

#endif // GRAFO_H
