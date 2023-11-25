
remover(No *no_cabeca, int chave) {

	No *aux, *anterior = no_cabeca;

	aux = buscar(no_cabeca, &anterior, chave );

	if(aux != NULL) {
		anterior -> prox = aux -> prox;
		free ( aux );
		return 1; // remoção bem sucedida
	} 
	else {
		return 0; // falha remoção
	}
}
