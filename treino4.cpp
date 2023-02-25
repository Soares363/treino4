#include <iostream>
#include <algorithm>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	int nHerois, nCombate, nPoderEspecial;
	
	cout << "Oh meu Deus! Thanos está atacando a Terra! Lanterna Verde (você) precisa detê-lo, escolha os heróis que você quer levar junto com você.\n";
	cout << "Quantos heróis você quer levar junto com você? (De 1 a 10)\n";
	cin >> nHerois;
	
	
	// Número de herois escolhidos
	while(nHerois < 1 || nHerois > 10){
		cout << "O número que você inseriu é inválido, tente novamente.\n";
		cin >> nHerois;
	}
	
	
	// Criar todas os int
	int combate[nHerois];
	int poderEspecial[nHerois];
	int forcaTotal[nHerois];
	
	// Avaliacao dos herois
	cout << "\nIremos chamar " << nHerois << " heróis para ajudá-lo, esteja preparado para avaliá-los.\n";
	for (int i = 0; i < nHerois; i++){
		cout << "\nAvalie o Herói " << (i+1) << "";
		
		// Habilidade de combate
		cout << "\nQual é o nível de combate do Herói " << (i+1) << "? (0 a 100) ";
		cin >> nCombate;
		
		while(nCombate < 0 || nCombate > 100){
		cout << "O número que você inseriu é inválido, tente novamente.\n";
		cin >> nCombate;
		}
		combate[i] = nCombate;
		
		// Poder especial
		cout << "\nQual é o nível de poderes especiais do Herói " << (i+1) << "? (0 a 100) ";
		cin >> nPoderEspecial;
		
		while(nPoderEspecial < 0 || nPoderEspecial > 100){
		cout << "O número que você inseriu é inválido, tente novamente.\n";
		cin >> nPoderEspecial;
		}
		poderEspecial[i] = nPoderEspecial;
	}
	
	cout << "Aqui está a força total de cada herói";
	for (int i = 0; i < nHerois; i++){
		cout << "\n\nHerói " << (i+1) << ":";
		cout << "\nForça de combate: " << combate[i];
		cout << "\nPoderes especiais: " << poderEspecial[i];
		forcaTotal[i] = (combate[i] + poderEspecial[i]);
		cout << "\nForça total: " << forcaTotal[i];
		}
	
	int tamTableForca = sizeof(forcaTotal)/sizeof(forcaTotal[0]);
	sort(forcaTotal, forcaTotal+tamTableForca, greater<int>());
	
	cout << "\n\nOrganizamos os heróis do mais forte ao mais fraco:";
	for (int i = 0; i < nHerois; i++){
	cout << "\n\n" << (i+1) << ". Pontuação: " << forcaTotal[i];
	}
}
