#include "tempo.h"

struct tm* recuperarDataAtual()
{
	// Variavel usada para armazenar a
	// quantidade de segundos para
	// representar uma data
	time_t tt;

	// Armazena a quantidade segundos que
	// se passaram desde as 0 horas de 1
	// de janeiro de 1970 no horario de
	// Greenwich
	time(&tt);

	// Transforma esses segundos em uma
	// estrutura que separa o dia, mes,
	// ano, etc. e a retorna.
	return localtime(&tt);
}

