
int inserir (No *no_ant, Elemento novo_elemento, int chave) {

	No *aux, *anterior = no_cabeca;

	No *novo_no = (No *) calloc (1, sizeof (No));

	aux = buscar(no_cabeca, &anterior, chave);

	if((novo_no == NULL) || (aux != NULL)){
		return 0; // falha na inserção
	}
	else {
		novo_no -> elemento = novo_elemento;
		novo_no -> chave = chave;
		novo_no -> prox = anterior -> prox;
		anterior -> prox = novo_no;
		return 1; // inserção bem sucedida }
	}