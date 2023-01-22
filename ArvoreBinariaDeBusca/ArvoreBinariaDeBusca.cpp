#include <iostream>

#include "ArvoreBinariaDeBusca.hpp"

using std::cout;
using std::endl;

bool estaNaArvore(ArvoreBinaria& R, int X) {

	if (R == NULL) {

		return false;

	}

	if (X == R->Info) {

		return true;

	}

	if (X < R->Info) {

		return estaNaArvore(R->Esq, X);

	}

	if (X > R->Info) {

		return estaNaArvore(R->Dir, X);

	}

}

void insere(ArvoreBinaria& R, int X, bool& deuCerto) {

	ArvoreBinaria Aux = new Node;

	if (R == NULL) {

		Aux->Info = X;
		Aux->Dir = NULL;
		Aux->Esq = NULL;

		R = Aux;

		deuCerto = true;

		Aux = NULL;
	}
	else if (R->Info == X) {

		deuCerto = false;

	}
	else if (R->Info < X) {

		insere(R->Dir, X, deuCerto);

	}
	else if (R->Info > X) {

		insere(R->Esq, X, deuCerto);

	}

}
void remove(ArvoreBinaria& R, int X, bool& deuCerto) {

	if (R == NULL) {

		R = NULL;
		deuCerto = false;

	}
	else if (R->Info == X) {

		deuCerto = true;

		ArvoreBinaria Aux;

		if (R->Dir == NULL && R->Esq == NULL) {

			delete R;
			R = NULL;

		}
		else if ((R->Dir == NULL && R->Esq) != (NULL || R->Dir != NULL && R->Esq == NULL)) {

			Aux = R;
			R = (R->Dir == NULL) ? R->Esq : R->Dir;

			delete Aux;
		}
		else if (R->Dir != NULL && R->Esq != NULL) {

			Aux = R;

			R = R->Dir;
			R->Esq = Aux->Esq;

			delete Aux;

		}

		Aux = NULL;

	}
	else if (R->Info < X) {

		remove(R->Dir, X, deuCerto);

	}
	else if (R->Info > X) {

		remove(R->Esq, X, deuCerto);

	}

}

void cria(ArvoreBinaria& R) {

	R = NULL;

}

bool vazia(ArvoreBinaria& R) {

	if (R == NULL) {

		return true;

	}

	return false;
}

void destroi(ArvoreBinaria& R) {

	bool deuCerto;

	if (R != NULL) {

		int X = R->Info;
		remove(R, X, deuCerto);
		destroi(R);

	}

}