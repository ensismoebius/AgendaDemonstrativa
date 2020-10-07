// Matheus Oliveira
// Éric dos Santos Ferreira
// Francisco Neto
// Felipe Ferreira :)
// Eder Carvalho Barbosa
// Miqueias de Jesus da Silva
// André Furlan
#include <iostream>

int main(int argc, char **argv)
{
	int dia = 0;
	int mes = 0;
	int ano = 0;
	char *descricao = new char[100];

	std::cout << "Informe o dia:" << std::endl;
	std::cin >> dia;

	std::cout << "Informe o mes:" << std::endl;
	std::cin >> mes;

	std::cout << "Informe o ano:" << std::endl;
	std::cin >> ano;

	std::cout << "Descreva o compromisso:" << std::endl;
	std::cin >> descricao;

	// Exibe apenas o dia
	std::cout << dia << std::endl;

	// Exibe o dia, mes e ano separados por "-"
	std::cout << dia << "-" << mes << "-" << ano << std::endl;

	// Exibe o dia, mes e ano separados por "-" mais a descricao
	std::cout << dia << "-" << mes << "-" << ano << ": " << descricao << std::endl;
}
