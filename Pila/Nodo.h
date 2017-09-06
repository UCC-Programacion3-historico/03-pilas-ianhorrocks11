//
// Created by Ian Horrocks on 6/9/17.
//

#ifndef INC_02_LISTAS_NODO_H
#define INC_02_LISTAS_NODO_H

template <class T>
class Nodo{
private:
    T dato;
    Nodo<T> *next;
public:

    Nodo(T dato){
        this->dato = dato;
        next = NULL;
    }
    Nodo(T dato, Nodo<T> *next) : dato(dato), next(next) {

    }

    T getDato() const {
        return dato;
    }

    void setDato(T dato) {
        Nodo::dato = dato;
    }

    Nodo<T> *getNext() const {
        return next;
    }

    void setNext(Nodo<T> *next) {
        Nodo::next = next;
    }


};

#endif //INC_02_LISTAS_NODO_H
