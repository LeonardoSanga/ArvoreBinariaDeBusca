#pragma once

#ifndef ARVOREBINARIADEBUSCA_HPP

#define ARVOREBINARIADEBUSCA_HPP

#include "Node.hpp"

bool estaNaArvore(ArvoreBinaria& R, int X);

void insere(ArvoreBinaria& R, int X, bool& deuCerto);

void remove(ArvoreBinaria& R, int X, bool& deuCerto);

void cria(ArvoreBinaria& R);

bool vazia(ArvoreBinaria& R);

void destroi(ArvoreBinaria& R);

#endif // !ARVOREBINARIADEBUSCA_HPP
