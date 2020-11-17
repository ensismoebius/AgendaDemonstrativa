#ifndef AGENDA_H_
#define AGENDA_H_

#include <string>
#include <vector>

enum OPERACOES
{
	INSERIR_COMPROMISSO, EXIBIR_COMPROMISSOS, VER_COMPROMISSOS_DE_HOJE, SAIR
};

struct itemDaAgenda
{
		int dia = 0;
		int mes = 0;
		int ano = 0;
		std::string descricao;
};

OPERACOES exibeMenu();

void mostrarItensDaAgenda(std::vector<struct itemDaAgenda> &lista);

void adicionarItemNaAgenda(std::vector<struct itemDaAgenda> &lista);

std::vector<struct itemDaAgenda> recuperarCompromissosDeHoje(std::vector<struct itemDaAgenda> &lista);

#endif /* AGENDA_H_ */
