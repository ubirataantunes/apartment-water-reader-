#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main() {
	int N, apartamento, contadora, apartamentomaiorgasto;
	float gasto, resultado, maiorgasto;
		
	printf("Digite a quantidade de apartamentos que deseja fazer leitura ");
	scanf("%d", &N);
	
	system("cls");
	
	for (contadora = 1; contadora <= N; contadora++) {
		apartamento = contadora;
		printf("Digite a quantidade de litros de agua gastos pelo apartamento %d\n", apartamento);
		scanf("%f", &gasto);
		resultado = gasto/1000;
		printf("Quantidade de agua em metros cubicos gasta pelo apartamento: %.3f\n\n", resultado);
			if (maiorgasto < resultado) {
				apartamentomaiorgasto = apartamento;
				maiorgasto = resultado;
			}
		system("cls");
	}
	printf("Apartamento com maior gasto:  %d\n\n", apartamentomaiorgasto);
	printf("Quantia gasta em metros cubicos de agua pelo apartamento:  %.3f\n", maiorgasto);
	getche();
}


