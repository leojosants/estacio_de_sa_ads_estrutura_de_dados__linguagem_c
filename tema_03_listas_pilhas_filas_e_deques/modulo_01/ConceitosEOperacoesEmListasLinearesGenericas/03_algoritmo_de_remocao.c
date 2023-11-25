int remover ( chave )
	se n > 0
		int i = busca ( chave )
			se i < n + 1
				para a = i até a < n
					Lista [ i ] = Lista [ i + 1 ]
						n = n -1
			senão retornar -1
	senão 
		retornar “Erro: lista vazia”