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
