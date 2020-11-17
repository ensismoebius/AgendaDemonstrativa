#include "agenda.h"
#include "tempo.h"

#include <string>
#include <vector>
#include <iostream>

OPERACOES exibeMenu()
{
	std::cout << "Escolha o que deseja fazer:" << std::endl;
	std::cout << INSERIR_COMPROMISSO << " - Inserir um compromisso" << std::endl;
	std::cout << EXIBIR_COMPROMISSOS << " - Exibir todos os compromissos" << std::endl;
	std::cout << VER_COMPROMISSOS_DE_HOJE << " - Exibir compromissos de hoje" << std::endl;
	std::cout << SAIR << " - Sair do programa" << std::endl;

	int escolha = 0;

	std::cin >> escolha;

	return (OPERACOES) escolha;
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
	for (unsigned int i = 0; i < lista.size(); i++)
	{
		// Exibe o dia, mes e ano separados por "-" mais a descricao
		std::cout << lista[i].dia << "-" << lista[i].mes << "-" << lista[i].ano << ": " << lista[i].descricao << std::endl;
	}
}

std::vector<struct itemDaAgenda> recuperarCompromissosDeHoje(std::vector<struct itemDaAgenda> &lista)
{
	auto data = recuperarDataAtual();

	std::vector<struct itemDaAgenda> resultado;

	for (unsigned int i = 0; i < lista.size(); i++)
	{
		if (data->tm_year + 1900 != lista[i].ano) continue;
		if (data->tm_mon + 1 != lista[i].mes) continue;
		if (data->tm_mday != lista[i].dia) continue;

		resultado.push_back(lista[i]);
	}

	return resultado;
}

