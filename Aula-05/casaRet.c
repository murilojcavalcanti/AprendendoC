/*
Crie um programa que calcula a area de uma cabana com uma sala de 10m de comprimento 
e 10m de largura e dois comodos com 5m de largura e 7m de comprimento
*/
#include <stdio.h>
	#include <math.h>
#define PI 3.14159 
/*
Definindo uma constante Uma padronização é definir uma 
constante com letras maiuscula
*/
int main(){
printf("Programa para calculo da area da casa\n");

	double areap = areaPiscina(2);
	areaCasa();

    return 0;
}
 void areaCasa(){
	float larguraSala = 10;
	float ComprimentoSala = 10;
	float areaSala = larguraSala*ComprimentoSala;
	printf("area da sala %f \n",areaSala);
	

	float larguraQuarto = 5;
	float ComprimentoQuarto = 7;
	float areaQuarto = larguraQuarto*ComprimentoQuarto;
	printf("area da quarto: %.2f \n",areaQuarto);
	

	float larguraBanheiro = 5;
	float ComprimentoBanheiro = 7;
	float areaBanheiro = larguraBanheiro*ComprimentoBanheiro;
	printf("area da banheiro: %fm \n",areaQuarto);

	float areaTotal= areaBanheiro+areaQuarto+areaSala;
	printf("area Total: %.2fm \n",areaTotal);

 }
 double areaPiscina(double raio ){
		//raio piscina 

	double areaPiscina = PI *raio*raio;

	//outra forma usando função
	//double areaPiscina = PI *pow(raio,2);
	
	//printf("Area dapiscina: %f\n",areaPiscina);
	
	return  PI *pow(raio,2);
 }