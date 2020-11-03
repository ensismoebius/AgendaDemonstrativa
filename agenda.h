#ifndef AGENDA_H_
#define AGENDA_H_

#include <string>
#include <vector>

const int INSERIR_COMPROMISSO = 1;
const int EXIBIR_COMPROMISSOS = 2;

struct itemDaAgenda
{
		int dia = 0;
		int mes = 0;
		int ano = 0;
		std::string descricao;
};

int exibeMenu();
void mostrarItensDaAgenda(std::vector<struct itemDaAgenda> &lista);
void adicionarItemNaAgenda(std::vector<struct itemDaAgenda> &lista);

#endif /* AGENDA_H_ */
