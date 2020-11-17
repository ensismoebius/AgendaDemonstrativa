#include <iostream>
#include "agenda.h"

std::vector<struct itemDaAgenda> listaDoItensDaAgenda;

int main(int argc, char **argv)
{
	std::vector<itemDaAgenda> compromissosDeHoje;

	while (true)
	{
		OPERACOES escolha = exibeMenu();

		switch (escolha)
		{
			case INSERIR_COMPROMISSO:
				adicionarItemNaAgenda(listaDoItensDaAgenda);
				break;
			case EXIBIR_COMPROMISSOS:
				mostrarItensDaAgenda(listaDoItensDaAgenda);
				break;
			case VER_COMPROMISSOS_DE_HOJE:
				// Recupera os compromissos de hoje
				compromissosDeHoje = recuperarCompromissosDeHoje(listaDoItensDaAgenda);
				// Mostra os compromissos
				mostrarItensDaAgenda(compromissosDeHoje);
				break;
			case SAIR:
				// Retorna ao sistema operacional
				return 0;
			default:
				std::cout << "Opcao invalida" << std::endl;
				break;
		}
	}
}
