#include <iostream>

using std::cout;
using std::endl;

#include "OperacoesNaoPrimitivasDaABB.hpp"

void imprimeTodos(ArvoreBinaria& R) {

	int soma = 0;

	if (R != NULL) {

		cout << R->Info << " ";
		imprimeTodos(R->Esq);
		imprimeTodos(R->Dir);

	}

}

void imprimeTodosCrescente(ArvoreBinaria& R) {

	// Ordem Crescente

	if (R != NULL) {

		imprimeTodosCrescente(R->Esq); // Só para quando chegar em NULL, ou seja, no ultimo elemento da esquerda(menor valor)
		cout << R->Info << " ";
		imprimeTodosCrescente(R->Dir);

	}

}

int somaTodos(ArvoreBinaria& R) {

	if (R == NULL) {

		return 0;

	}

	return R->Info + somaTodos(R->Dir) + somaTodos(R->Esq);
}

int NosComUmUnicoFilho(ArvoreBinaria& R) {

	if (R == NULL) {

		return 0;

	}

	if ((R->Dir == NULL && R->Esq != NULL) || (R->Dir != NULL && R->Esq == NULL)) {

		return 1 + NosComUmUnicoFilho(R->Esq) + NosComUmUnicoFilho(R->Dir);

	}
	else {

		return 0 + NosComUmUnicoFilho(R->Esq) + NosComUmUnicoFilho(R->Dir);

	}

}

bool iguais(ArvoreBinaria& R1, ArvoreBinaria& R2) {

	if (R1 == NULL && R2 == NULL) {

		return true;

	}

	if ((R1 == NULL && R2 != NULL) || (R1 != NULL && R2 == NULL)) {

		return false;

	}

	if (R1->Info == R2->Info && iguais(R1->Dir, R2->Dir) && iguais(R1->Esq, R2->Esq)) {

		return true;

	}

}

bool arvoreBinariaDeBusca(ArvoreBinaria& R) {

	if (R == NULL) {

		return true;

	}
	else if ((R->Dir != NULL) && (R->Esq != NULL) && (R->Info < R->Esq->Info || R->Info > R->Dir->Info)) {

		return false;

	}
	else if (arvoreBinariaDeBusca(R->Dir) && arvoreBinariaDeBusca(R->Esq)) {

		return true;

	}
	else {

		return false;

	}
}