#include <iostream>
#include <algorithm>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	int nHerois, nCombate, nPoderEspecial;
	
	cout << "Oh meu Deus! Thanos est� atacando a Terra! Lanterna Verde (voc�) precisa det�-lo, escolha os her�is que voc� quer levar junto com voc�.\n";
	cout << "Quantos her�is voc� quer levar junto com voc�? (De 1 a 10)\n";
	cin >> nHerois;
	
	
	// N�mero de herois escolhidos
	while(nHerois < 1 || nHerois > 10){
		cout << "O n�mero que voc� inseriu � inv�lido, tente novamente.\n";
		cin >> nHerois;
	}
	
	
	// Criar todas os int
	int combate[nHerois];
	int poderEspecial[nHerois];
	int forcaTotal[nHerois];
	
	// Avaliacao dos herois
	cout << "\nIremos chamar " << nHerois << " her�is para ajud�-lo, esteja preparado para avali�-los.\n";
	for (int i = 0; i < nHerois; i++){
		cout << "\nAvalie o Her�i " << (i+1) << "";
		
		// Habilidade de combate
		cout << "\nQual � o n�vel de combate do Her�i " << (i+1) << "? (0 a 100) ";
		cin >> nCombate;
		
		while(nCombate < 0 || nCombate > 100){
		cout << "O n�mero que voc� inseriu � inv�lido, tente novamente.\n";
		cin >> nCombate;
		}
		combate[i] = nCombate;
		
		// Poder especial
		cout << "\nQual � o n�vel de poderes especiais do Her�i " << (i+1) << "? (0 a 100) ";
		cin >> nPoderEspecial;
		
		while(nPoderEspecial < 0 || nPoderEspecial > 100){
		cout << "O n�mero que voc� inseriu � inv�lido, tente novamente.\n";
		cin >> nPoderEspecial;
		}
		poderEspecial[i] = nPoderEspecial;
	}
	
	cout << "Aqui est� a for�a total de cada her�i";
	for (int i = 0; i < nHerois; i++){
		cout << "\n\nHer�i " << (i+1) << ":";
		cout << "\nFor�a de combate: " << combate[i];
		cout << "\nPoderes especiais: " << poderEspecial[i];
		forcaTotal[i] = (combate[i] + poderEspecial[i]);
		cout << "\nFor�a total: " << forcaTotal[i];
		}
	
	int tamTableForca = sizeof(forcaTotal)/sizeof(forcaTotal[0]);
	sort(forcaTotal, forcaTotal+tamTableForca, greater<int>());
	
	cout << "\n\nOrganizamos os her�is do mais forte ao mais fraco:";
	for (int i = 0; i < nHerois; i++){
	cout << "\n\n" << (i+1) << ". Pontua��o: " << forcaTotal[i];
	}
}
