// ESTER BATISTELA NASCIMENTO
// LISNAIRA SOUZA DA SILVA
// Matheus Oliveira
// Paulo gazela
// João Gabriell 
// Carlos Queiroz
// Eberson Ferreira Rodrigues
// Raoni Henrique Santos do Nascimento
// Wender Silva
// Carlos Eduardo Bruzadin
// Mariana Pires Ribeiro
// Lucas Alixame
// Gabriel Fiaschi Ribeiro
// Victor Hugo
// Everton Ferreira Rodrigues
// Rafael Henrique de Oliveira
// Lucas Alixame
// Éric dos Santos Ferreira
// Francisco Neto
// Felipe Ferreira :)
// Eder Carvalho Barbosa
// Miqueias de Jesus da Silva
// André Furlan
// Junio Grigorio da Silva
// Fernando Gorzoni
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
