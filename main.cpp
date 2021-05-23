//Gilson Luiz Pimentel Parpaiolla
//Programação Aplicada - Atividade 2
//Problema 1
#include <iostream>
#include <string>

using namespace std;
string  TrocarCaracteres(string *ponteiro1, char sub1 , char sub2, string *novaM){
string aux,aux2;
aux = *ponteiro1;
aux2 = *novaM;
for (int i =0; i < aux.length(); i++){
  if (aux[i] == sub1){
    aux2[i] = sub2;
  }else{
    aux2[i]=aux[i];
  }
}
novaM=&aux2;
return *novaM;
}

int ContarCaracteres(string *ponteiro1, int contador,char substituir1){
  contador = 0;
  string  aux;
  aux =*ponteiro1;
  for (int i =0; i <aux.length(); i++){
    if(substituir1 == aux[i]){
      contador = contador + 1;
    }
  }
  return contador;
}

int main() {
string mensagem,nMensagem,*p1,*p2;
char subst1 , subst2;
int cont,n;
n=1;
while(n == 1){
cout<<"Digite uma palavra para codificar:" << endl;
cin >> mensagem;
cout << "Digite o caractere que deseja substituir" << endl;
cin >> subst1;
cout << "Digite o caractere que vai entrar no lugar do substituido" << endl;
cin >> subst2;
p1=&mensagem;
nMensagem=mensagem;
cout << "Palavra Original: " <<TrocarCaracteres(&mensagem,subst1,subst2,&nMensagem) << endl;
cout << "Palavra Codificada: " << *p1 << endl;
cout <<"Caracteres Substituidos: " <<ContarCaracteres(&mensagem,cont,subst1) << endl;
cout << " Para continuar digite 1, para sair digite outro numero" << endl;
cin >> n;
}

}