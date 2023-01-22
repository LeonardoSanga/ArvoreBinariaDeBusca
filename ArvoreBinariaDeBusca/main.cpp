#include <iostream>

using std::cout;
using std::endl;

#include "Node.hpp"

#include "ArvoreBinariaDeBusca.hpp"
#include "OperacoesNaoPrimitivasDaABB.hpp"

int main() {

	bool deuCerto;

	cout << "Criando uma Arvore Binaria de Busca" << endl;
	ArvoreBinaria R;
	cria(R);

	cout << "\nInserindo os elementos 50, 80, 96, 28, 12 e 39, sequencialmente, na Arvore" << endl;
	insere(R, 50, deuCerto);
	insere(R, 80, deuCerto);
	insere(R, 96, deuCerto);
	insere(R, 28, deuCerto);
	insere(R, 12, deuCerto);
	insere(R, 39, deuCerto);

	cout << "\nImprimindo os elementos da Arvore" << endl;
	imprimeTodos(R);
	cout << endl;

	cout << "\nBusca pelo 39";
	if (estaNaArvore(R, 39)) {

		cout << "\n39 esta na Arvore" << endl;

	}

	cout << "\nImprimindo os elementos da Arvore em ordem crescente" << endl;
	imprimeTodosCrescente(R);
	cout << endl;

	cout << "\nSoma dos elementos da Arvore = " << somaTodos(R) << endl;

	cout << "\nNumero de Nos com um unico No filho na Arvore = " << NosComUmUnicoFilho(R) << endl;

	if (arvoreBinariaDeBusca(R)) {

		cout << "\nConfirmacao de que a Arvore criada e uma ABB" << endl;

	}

	cout << "\nRemovendo o elemento 39 da Arvore" << endl;
	remove(R, 39, deuCerto);

	cout << "\nArvore: ";
	imprimeTodosCrescente(R);
	cout << endl;

	cout << "\nRemovendo o elemento 80 da Arvore" << endl;
	remove(R, 80, deuCerto);

	cout << "\nArvore: ";
	imprimeTodosCrescente(R);
	cout << endl;

	cout << "\nRemovendo o elemento 50 da Arvore" << endl;
	remove(R, 50, deuCerto);

	cout << "\nArvore: ";
	imprimeTodosCrescente(R);
	cout << endl;

	cout << "\nDestruindo a Arvore" << endl;
	destroi(R);

	return 0;
}