/*
1 – A empresa TERMAL conhecida pelos seus serviços de instalação de
banheiras solicitou um sistema que para somar os serviços feitos pelos seus
funcionários.Os serviços são :

Instalação – R$300.00
Limpeza – R$150.00
Manutenção – 499.99
Quando o cliente deverá pagar para a empresa ?
*/

/*
#include <iostream>

using namespace std;
int main() {
	int instalacao = 300;
	int limpeza = 150;
	double manutencao = 499.99;
	int resultado = instalacao + limpeza + manutencao;

	cout << "O cliente vai pagar " << resultado << " reais.";

	return 0;
}*/




/*
2 – Joaquim trabalha em uma empresa e recebe R$35.00 reais por hora e
trabalha 8 horas por dia. Ele solicitou um programa que calcule quanto ao final
de um dia ele deve receber
*/

/*
#include <iostream>

using namespace std;
int main() {
	int salario = 35;
	int horas = 8;
	int resultado = salario * horas;

	cout << "Ele vai receber " << resultado << " reais no dia.";

	return 0;
}
*/




/*
3 – Cada caixa de bombom vem 27 unidades, Pamela comprou 16 unidades da
caixa de bombom, quantos bombons ela tem?
*/

/*
#include <iostream>

using namespace std;
int main() {
	int unidades = 27;
	int caixa = 16;
	int resultado = unidades * caixa;

	cout << "Ela tem " << resultado << " bombons.";

	return 0;
}
*/



/*
4 – Uma loja vendeu 300 garrafas de água, cada caixa vem 20 garrafas,
quantas caixas eles usaram?
*/

/*
#include <iostream>

using namespace std;
int main() {
	int garrafas = 300;
	int caixa = 20;
	int resultado = garrafas / caixa;

	cout << "Eles usaram " << resultado << " caixas.";

	return 0;
}
*/




/*
5 – Uma loja comprou 120 camisetas e vendeu 80 delas, cada uma custou R$
30.00. E logo em seguida comprou mais 50 camisetas, quantas camisetas ele
tem agora e qual foi seu faturamento?
*/

/*
#include <iostream>

using namespace std;
int main() {
	int camisetas = 120;
	int venda = 80;
	int compra = 50;
	int valor = 30;
	int faturamento = venda * valor;
	int quantCamiseta = (camisetas - venda) + compra;

	cout << "Ele tem " << quantCamiseta << " camisetas e seu faturamento foi de " << faturamento << " reais.";

	return 0;
}
*/