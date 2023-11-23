#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	// 'v_num' eh a variavel que sera apontada pelo pnteiro
	int v_num = 10;
	
	// declaracao de variavel ponteiro
	int *ptr;
	
	// atribuindo o endereco da variavel 'v_num' ao ponteiro
	ptr = &v_num;
	
	printf("Utilizando ponteiros:\n");
	printf("Conteúdo da variável 'v_num': %d \n", v_num);
	printf("Endereço da variável 'v_num': %x \n", &v_num);
	printf("Conteúdo da variável ponteiro 'ptr': %x", ptr);
	
	getch();
	
	return 0;
}