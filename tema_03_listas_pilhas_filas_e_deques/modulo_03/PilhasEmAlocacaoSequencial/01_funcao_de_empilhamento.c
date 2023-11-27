
int push(Elemento elemento) {
	
	if(topo < (MAX_PILHA – 1)) {
		topo++;
	
		pilha [topo] = elemento;

		return 1; // sucesso
	} 
	else
		return 0; // falha
}