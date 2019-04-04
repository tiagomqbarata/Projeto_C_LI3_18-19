#include <glib.h>

typedef struct cli* Cliente;	//define uma estrutura de Clientes

//Funcao de que dado um codigo de cliente, gera um cliente
Cliente criaCliente(char* codCli);

//Funcao que dado um cliente, retorna o codigo desse mesmo cliente
char* getCodCli(Cliente c);

//Funcao que verifica semanticamente o codigo do cliente
gboolean verificaCliente(Cliente codigo);

//Funcao que imprime o codigo do cliente
void printCliente(Cliente c);