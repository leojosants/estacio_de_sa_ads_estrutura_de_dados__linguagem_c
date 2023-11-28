
Elemento desenfileirar(void) {

	int elemento_recuperado;

	No *aux = inicio;

	if(inicio != NULL) {

		inicio = inicio -> prox;

		if(inicio == NULL) {
		
			fim = NULL;

		}

		elemento_recuperado = aux -> elemento;

		free(aux);

		return elemento_recuperado; // sucesso
	} 
	else

		return NULL; // falha
}