
int enfileirar(Elemento elemento) {

	if(!(((inicio == 0) && (fim == MAX_FILA - 1)) || (inicio == fim + 1))) {

		if((fim == MAX_FILA - 1) || (fim == -1)) {

			fila [0] = elemento;

			fim = 0;

			if(inicio == -1)

				inicio = 0;
			} 
			else {
				
				fila [++fim] = elemento;

				return 1; // sucesso
		} 
		else
			return 0; // falha
	}
}