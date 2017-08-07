/* Contador de palavras- Brenda Braga
 * Ra 164930
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */


 #include <stdio.h>
 #include <string.h>
 
 int main() {
 	char frase[200];
 	int tam, i=0;
	int num=0; 
 	
 	scanf("%[^\n]s", frase);
 	tam = strlen(frase); 
 	
 	while(i <= tam){
 		
 		if((frase[i] == ' ')||(frase[i] == '.')||(frase[i] == ',')||(frase[i] == '-')||(frase[i] == '!') || (frase[i] == '\0')){
		 	i = i+1;
			while((frase[i] == ' ')||(frase[i] == '.')||(frase[i] == ',') || (frase[i] == '-') || (frase[i] == '!') ){		
 				i++;
			}
			
			if(frase[i-1] == '.' || frase[i-1]==','){
					if(47 < frase[i] && frase[i] < 58){
						num= num - 1;
					}	
			} 
			num = num +1; 
		 }
		i++;
	 }
	printf("%d\n", num);
	return 0;
 }
 
 
