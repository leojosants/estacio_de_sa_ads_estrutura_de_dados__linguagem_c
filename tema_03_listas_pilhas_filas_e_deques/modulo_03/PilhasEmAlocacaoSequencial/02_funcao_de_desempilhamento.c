
Elemento pop (void) {

	Elemento valor_recuperado;

	if(topo >= 0) {
		valor_recuperado = pilha [topo];
		topo--;
		return valor_recuperado;
	} 
	else
		return NULL; // falha
}