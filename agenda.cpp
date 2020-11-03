#include "agenda.h"

#include <string>
#include <vector>
#include <iostream>

int exibeMenu()
{
	std::cout << "Escolha o que deseja fazer:" << std::endl;
	std::cout << INSERIR_COMPROMISSO << " - Inserir um compromisso" << std::endl;
	std::cout << EXIBIR_COMPROMISSOS << " - Exibir compromissos" << std::endl;

	int escolha = 0;

	std::cin >> escolha;

	return escolha;
}

void adicionarItemNaAgenda(std::vector<struct itemDaAgenda> &lista)
{
	struct itemDaAgenda novoItem;

	std::cout << "Informe o dia:" << std::endl;
	std::cin >> novoItem.dia;

	std::cout << "Informe o mes:" << std::endl;
	std::cin >> novoItem.mes;

	std::cout << "Informe o ano:" << std::endl;
	std::cin >> novoItem.ano;

	std::cin.ignore();

	std::cout << "Descreva o compromisso:" << std::endl;
	std::getline(std::cin, novoItem.descricao);

	lista.push_back(novoItem);
}

void mostrarItensDaAgenda(std::vector<struct itemDaAgenda> &lista)
{
	// i eh a variavel que indica a posicao que queremos
	// acessar dentro de nossa lista
	for (int i = 0; i < lista.size(); i++)
	{
		// Exibe o dia, mes e ano separados por "-" mais a descricao
		std::cout << lista[i].dia << "-" << lista[i].mes << "-" << lista[i].ano << ": " << lista[i].descricao << std::endl;
	}
}
