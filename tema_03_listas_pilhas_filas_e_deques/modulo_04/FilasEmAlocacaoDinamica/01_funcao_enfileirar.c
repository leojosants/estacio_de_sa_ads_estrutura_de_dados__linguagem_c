
int enfileirar(Elemento elemento) {

	No *novo_no = (No*) calloc(1 ,sizeof(No));

	novo_no -> elemento = elemento;

	novo_no -> prox = NULL;

	if(novo_no != NULL) {

		if(fim != NULL)  {

			fim -> prox = novo_no;

		}
		else {

			inicio = novo_no;

			fim = novo_no;

			return 1; // sucesso
		}
	}
	else
		
		return 0; // falha
}