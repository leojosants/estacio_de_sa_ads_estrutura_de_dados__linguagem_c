/* libs */
#include <stdio.h>
#include <conio.h>

/* procedure */
float calculateAverage(){
	float grade_1, grade_2, average = 0;
	
	printf("\n----- Informe os dados do aluno -----\n");
	printf("Digite a primeira nota..: ");
	scanf("%f", &grade_1);
	
	printf("Digite a segunda  nota..: ");
	scanf("%f", &grade_2);
	
	average = (grade_1, grade_2) / 2;
	
	printf("\n----- Exibindo dados do aluno -----\n");
	printf("Media...................: %.2f\n", average);
}

/* main method */
int main(int argc, char *argv[]) {
	
	calculateAverage();
	
	getch();
}