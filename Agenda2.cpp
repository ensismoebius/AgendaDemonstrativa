#include <iostream>

#include "agenda.h"

std::vector<struct itemDaAgenda> listaDoItensDaAgenda;

int main(int argc, char **argv)
{
	while (true)
	{
		int escolha = exibeMenu();

		switch (escolha)
		{
			case INSERIR_COMPROMISSO:
				adicionarItemNaAgenda(listaDoItensDaAgenda);
				break;
			case EXIBIR_COMPROMISSOS:
				mostrarItensDaAgenda(listaDoItensDaAgenda);
				break;
			default:
				std::cout << "Opcao invalida" << std::endl;
				break;
		}
	}
}
