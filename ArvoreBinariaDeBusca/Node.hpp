#pragma once

#ifndef NODE_HPP

#define NODE_HPP

struct Node {

	int Info;
	Node* Dir;
	Node* Esq;

};

typedef Node* ArvoreBinaria; // definindo um novo tipo para ser o ponteiro para o nó raiz de uma arvore

#endif // !NODE_HPP