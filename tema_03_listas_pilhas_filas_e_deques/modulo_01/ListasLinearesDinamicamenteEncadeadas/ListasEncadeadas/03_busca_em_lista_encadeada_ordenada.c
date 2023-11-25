
No *buscar ( No *no_cabeca , No **aux, int chave ) {

	No *atual = no_cabeca -> prox;

	*aux = no_cabeca;

	while ( atual != NULL ) {

		if ( atual -> chave < chave ) {
			*aux = atual;
			atual = atual -> prox; 
		}
		else if ( atual -> chave == chave ) {
				return atual; 
		} // elemento encontrado
		else {
			return NULL; 
	} // elemento não encontrado
		
	return NULL; 
	} // lista vazia
}