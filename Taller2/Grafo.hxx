template <typename T, typename W>
void Grafo<T, W>::agregarVertice(T dato) {
    vertices[dato] = std::make_shared<Vertice<T, W>>(dato); // Usa dos parámetros
}

template <typename T, typename W>
void Grafo<T, W>::agregarArista(T origen, T destino, W peso) {
    if (vertices.find(origen) != vertices.end() && vertices.find(destino) != vertices.end()) {
        vertices[origen]->agregarArista(vertices[destino], peso);
    } else {
        std::cout << "Uno de los vértices no existe." << std::endl;
    }
}

template <typename T, typename W>
void Grafo<T, W>::imprimirGrafo() const {
    for (const auto& par : vertices) {
        par.second->imprimir(); // Usa dos parámetros
    }
}

template <typename T, typename W>
int Grafo<T, W>::obtenerCantidadVertices() const {
    return vertices.size();
}

template <typename T, typename W>
int Grafo<T, W>::obtenerCantidadAristas() const {
    int count = 0;
    for (const auto& par : vertices) {
        count += par.second->aristas.size(); // Usa dos parámetros
    }
    return count / 2; // Dividimos entre 2 porque el grafo es no dirigido.
}

template <typename T, typename W>
std::shared_ptr<Vertice<T, W>> Grafo<T, W>::buscarVertice(T dato) const {
    auto it = vertices.find(dato);
    if (it != vertices.end()) {
        return it->second;
    }
    return nullptr;
}

template <typename T, typename W>
bool Grafo<T, W>::buscarArista(T origen, T destino) const {
    auto verticeOrigen = buscarVertice(origen);
    auto verticeDestino = buscarVertice(destino);
    if (verticeOrigen && verticeDestino) {
        return verticeOrigen->buscarArista(verticeDestino);
    }
    return false;
}

