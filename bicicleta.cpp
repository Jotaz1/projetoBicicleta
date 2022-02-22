/*Menu Principal 1 – Rotinas de Cadastros 2 – Rotinas para Atualizar Informações cadastradas 3 – Rotina para aluguel 4 – Relatórios 5 – Sair Menu Cadastros 1 – Cadastrar Clientes (cpf, nome, telefone, idade) 2 – Cadastrar Bicicletas (código, modelo, marca, cor, valor, status (ALUGADA, LIVRE)) 3 – Cadastrar Funcionários (matrícula, nome, salário) 4 – Voltar ao Menu Principal Menu Atualização 1 – Atualizar Clientes (nome, telefone, idade) 2 – Atualizar Bicicletas (modelo, marca, cor, valor, status) 3 – Atualizar Funcionários (nome, salário) 4 – Voltar ao Menu Principal Menu Rotina para Aluguel 1 – Registrar aluguel da bicicleta (código, cpf do cliente, código da bicicleta, matrícula funcionário, data do aluguel, quantidade de dias alugados) 2 – Finalizar o aluguel da bicicleta (Exibir em tela o total que o cliente irá pagar, atualizar o status da bicicleta para LIVRE) 3 – Voltar ao Menu Principal Menu Relatórios 1 – Bicicleta mais alugada (marca, modelo, total de aluguéis) 2 – Valor total de todas as bicicletas alugadas (cálculo para gerar o valor total) 3 – Valor total de todos os aluguéis por cpf do cliente (nome, total pago) 4 – Valor total de todos os aluguéis por funcionário (nome, total pago) 5 – Voltar ao Menu Principal*/

#include <iostream>
#include <stdlib.h>
#include <cstring>

    using namespace std;

    void menuPrincipal(){
        cout << "        | MENU PRINCIPAL |      " << endl;
        cout << "================================" << endl;
        cout << "1 - Rotinas de Cadastros        "<< endl;
        cout << "2 - Rotinas para Atualizar Informações cadastradas"<< endl;
        cout << "3 - Rotina para aluguel         "<< endl;
        cout << "4 - Relatórios                  "<< endl;
        cout << "5 - Sair                        "<< endl;
        cout << "================================" << endl;
        
    }

    void menuCadastro(){
        cout << "       | MENU CADASTROS |          " << endl;
        cout << "==================================" << endl;
        cout << "1 - Cadastrar Clientes           " << endl;
        cout << "2 - Cadastrar Bicicletas             " << endl;
        cout << "3 - Cadastrar Funcionários         " << endl;
        cout << "4 - Voltar ao Menu Principal        " << endl;
        cout << "==================================" << endl;
    }

    void menuAtualizacao(){
        cout << "       | MENU ATUALIZAÇÃO |          " << endl;
        cout << "==================================" << endl;
        cout << "1 - Atualizar Clientes           " << endl;
        cout << "2 - Atualizar Bicicletas            " << endl;
        cout << "3 - Atualizar Funcionários        " << endl;
        cout << "4 - Voltar ao Menu Principal      " << endl;
        cout << "==================================" << endl;
    }

    void menuRotina(){
        cout << "   | MENU ROTINA PARA ALUGUEL |    " << endl;
        cout << "==================================" << endl;
        cout << "1 - Registrar aluguel da bicicleta " << endl;
        cout << "2 - Finalizar o aluguel da bicicleta " << endl;
        cout << "3 - Voltar ao Menu Principal   " << endl;
        cout << "==================================" << endl;
    }

    void menuRelatorio(){
        cout << "       | MENU RELÁTORIOS |          " << endl;
        cout << "==================================" << endl;
        cout << "1 - Bicicleta mais alugada       " << endl;
        cout << "2 - Valor total de todas as bicicletas alugadas" << endl;
        cout << "3 - Valor total de todos os aluguéis por cpf do cliente " << endl;
        cout << "4 - Valor total de todos os aluguéis por funcionário" << endl;
        cout << "5 - Voltar ao Menu Principal      " << endl;
        cout << "==================================" << endl;
    }

    struct Cliente{
        string nome;
        int idade, cpf, telefone;
    };

    struct Bicicleta{
        int codigo;
        double valor;
        string status, modelo, marca, cor;
    };

    struct Funcionario{
        string nome;
        int matricula;
        double salario;
    }; 
    

int main(){

    Cliente cliente1, cliente2, cliente3;
    Bicicleta bicicleta1, bicicleta2, bicicleta3;
    Funcionario funcionario1, funcionario2, funcionario3;

    double respEsp, resp, soma, contador=0, dataAluguel1, dataAluguel2, dataAluguel3, total;
    int resposta, respostaEsp, diasAlugados1, diasAlugados2, diasAlugados3;
    string codigo;
    


    

    do{
    	menuPrincipal();
    	cin >> resposta;

    switch (resposta){
        case 1 : 
        do {
			menuCadastro();
        	cin>>respostaEsp;

        		if(respostaEsp == 1){
                cout << "Deseja cadastrar o cliente 1, 2 ou 3? ";
                cin >> resp;

                    if(resp == 1){
                    cout << "Cadastrar Cliente: 2 " << endl;
                    cout << "==================================" << endl;
                    
                    cout << "Digite o nome: "<<endl;
                    cin >> cliente1.nome;
                    cout << "Digite a idade: "<<endl;
                    cin >> cliente1.idade;
                    cout << "Digite o cpf: "<<endl;
                    cin >> cliente1.cpf;
                    cout << "Digite o telefone: "<<endl;
                    cin >> cliente1.telefone;
                    }

                    if(resp == 2){
                    cout << "Cadastrar Cliente: 2 " << endl;
                    cout << "==================================" << endl;
                    
                    cout << "Digite o nome:  "<<endl;
                    cin >> cliente2.nome;
                    cout << "Digite a idade: "<<endl;
                    cin >> cliente2.idade;
                    cout << "Digite o cpf: "<<endl;
                    cin >> cliente2.cpf;
                    cout << "Digite o telefone: "<<endl;
                    cin >> cliente2.telefone;
                    }

                    if(resp == 3){
                    cout << "Cadastrar Cliente: 3 " << endl;
                    cout << "==================================" << endl;
                    
                    cout << "Digite o nome: "<<endl;
                    cin >> cliente3.nome;
                    cout << "Digite a idade: "<<endl;
                    cin >> cliente3.idade;
                    cout << "Digite o cpf: "<<endl;
                    cin >> cliente3.cpf;
                    cout << "Digite o telefone: "<<endl;
                    cin >> cliente3.telefone;
                    }
                }


				if(respostaEsp == 2){
                    cout << "Deseja cadastrar a bicicleta 1, 2 ou 3? ";
                    cin >> resp;
  
                    if(resp == 1){
                    cout << "Cadastrar Bicicleta 1: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Código: "<<endl;
                    cin >> bicicleta1.codigo;
                    cout << "Digite o Modelo: "<<endl;
                    cin >> bicicleta1.modelo;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta1.marca;
                    cout << "Digite a Cor: "<<endl;
                    cin >> bicicleta1.cor;
                    cout << "Digite o Valor: "<<endl;
                    cin >> bicicleta1.valor;
                    cout << "Digite o Status: "<<endl;
                    cin >> bicicleta1.status;
                    }

                    if(resp == 2){
                    cout << "Cadastrar Bicicleta 2: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Código: "<<endl;
                    cin >> bicicleta2.codigo;
                    cout << "Digite o Modelo: "<<endl;
                    cin >> bicicleta2.modelo;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta2.marca;
                    cout << "Digite a Cor: "<<endl;
                    cin >> bicicleta2.cor;
                    cout << "Digite o Valor: "<<endl;
                    cin >> bicicleta2.valor;
                    cout << "Digite o Status: "<<endl;
                    cin >> bicicleta2.status;
                    }

                    if(resp == 3){
                    cout << "Cadastrar Bicicleta 3: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Código: "<<endl;
                    cin >> bicicleta3.codigo;
                    cout << "Digite o Modelo: "<<endl;
                    cin >> bicicleta3.modelo;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta3.marca;
                    cout << "Digite a Cor: "<<endl;
                    cin >> bicicleta3.cor;
                    cout << "Digite o Valor: "<<endl;
                    cin >> bicicleta3.valor;
                    cout << "Digite o Status: "<<endl;
                    cin >> bicicleta3.status;
                    }
                }


				if(respostaEsp == 3){
                    cout << "Deseja cadastrar o funcionário 1, 2 ou 3? ";
                    cin >> resp;

                    if(resp == 1){
                    cout << "Cadastrar Funcionário 1: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite a matrícula: "<<endl;
                    cin >> funcionario1.matricula;
                    cout << "Digite o nome: "<<endl;
                    cin >> funcionario1.nome;
                    cout << "Digite o salário: "<<endl;
                    cin >> funcionario1.salario;
			        }    
                    if(resp == 2){
                    cout << "Cadastrar Funcionário 2: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite a matrícula: "<<endl;
                    cin >> funcionario2.matricula;
                    cout << "Digite o nome: "<<endl;
                    cin >> funcionario2.nome;
                    cout << "Digite o salário: "<<endl;
                    cin >> funcionario2.salario;
			        }   

                    if(resp == 3){
                    cout << "Cadastrar Funcionário 3: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite a matrícula: "<<endl;
                    cin >> funcionario3.matricula;
                    cout << "Digite o nome: "<<endl;
                    cin >> funcionario3.nome;
                    cout << "Digite o salário: "<<endl;
                    cin >> funcionario3.salario;
			        }
                }


				if(respostaEsp == 4){
					main();
				}
	   		
			}while(respEsp ==1);
				

        case 2 : 
        do {
		menuAtualizacao();
        cin>>respostaEsp;
        		
                if(respostaEsp == 1){
                cout << "Deseja atualizar o cliente 1, 2 ou 3? ";
                cin >> resp;   

                    if(resp == 1){
                    cout << "Atualizar Cliente 1: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o nome: "<<endl;
                    cin >> cliente1.nome;
                    cout << "Digite a idade: "<<endl;
                    cin >> cliente1.idade;
                    cout << "Digite o cpf: "<<endl;
                    cin >> cliente1.cpf;
                    cout << "Digite o telefone: "<<endl;
                    cin >> cliente1.telefone;
                    }

                    if(resp == 2){
                    cout << "Atualizar Cliente 2: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o nome: "<<endl;
                    cin >> cliente2.nome;
                    cout << "Digite a idade: "<<endl;
                    cin >> cliente2.idade;
                    cout << "Digite o cpf: "<<endl;
                    cin >> cliente2.cpf;
                    cout << "Digite o telefone: "<<endl;
                    cin >> cliente2.telefone;
                    }

                    if(resp == 3){
                    cout << "Atualizar Cliente 3: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o nome: "<<endl;
                    cin >> cliente3.nome;
                    cout << "Digite a idade: "<<endl;
                    cin >> cliente3.idade;
                    cout << "Digite o cpf: "<<endl;
                    cin >> cliente3.cpf;
                    cout << "Digite o telefone: "<<endl;
                    cin >> cliente3.telefone;
                    }
                }

	
				if(respostaEsp == 2){
                cout << "Deseja atualizar a bicicleta 1, 2 ou 3? ";
                cin >> resp;  
                
        		if(resp == 1){
                    cout << "Atualizar Bicicleta 1: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Codigo: "<<endl;
                    cin >> bicicleta1.codigo;
                    cout << "Digite o Modelo: "<<endl;
                    cin >> bicicleta1.modelo;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta1.marca;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta1.cor;
                    cout << "Digite o Valor: "<<endl;
                    cin >> bicicleta1.valor;
                    cout << "Digite o Status (Alugado ou Livre): "<<endl;
                    cin >> bicicleta1.status;
                    }

        		if(resp == 2){
                    cout << "Atualizar Bicicleta 2: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Codigo: "<<endl;
                    cin >> bicicleta2.codigo;
                    cout << "Digite o Modelo: "<<endl;
                    cin >> bicicleta2.modelo;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta2.marca;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta2.cor;
                    cout << "Digite o Valor: "<<endl;
                    cin >> bicicleta2.valor;
                    cout << "Digite o Status (Alugado ou Livre): "<<endl;
                    cin >> bicicleta2.status;
                    }

        		if(resp == 3){
                    cout << "Atualizar Bicicleta 3: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Codigo: "<<endl;
                    cin >> bicicleta3.codigo;
                    cout << "Digite o Modelo: "<<endl;
                    cin >> bicicleta3.modelo;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta3.marca;
                    cout << "Digite a Marca: "<<endl;
                    cin >> bicicleta3.cor;
                    cout << "Digite o Valor: "<<endl;
                    cin >> bicicleta3.valor;
                    cout << "Digite o Status (Alugado ou Livre): "<<endl;
                    cin >> bicicleta3.status;
                    }
                }
        if(respostaEsp == 3){
                cout << "Deseja atualizar o funcionário 1, 2 ou 3? ";
                cin >> resp;  
                
                    if(resp == 1){
                    cout << "Atualizar Funcionário 1: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Nome: ";
                    cin >> funcionario1.nome;
                    cout << "Digite o Salário: ";
                    cin >> funcionario1.salario;
                    }
                    
                    if(resp == 2){
                    cout << "Atualizar Funcionário 2: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Nome: ";
                    cin >> funcionario2.nome;
                    cout << "Digite o Salário: ";
                    cin >> funcionario2.salario;
                    }

                    if(resp == 3){
                    cout << "Atualizar Funcionário 3: " << endl;
                    cout << "==================================" << endl;
                    cout << "Digite o Nome: ";
                    cin >> funcionario3.nome;
                    cout << "Digite o Salário: ";
                    cin >> funcionario3.salario;
                    }
                }   	
					
				
				if(respostaEsp == 4){
					main();
                }

			}while(respEsp ==1);
        	break;


        case 3:
        	do{
        	menuRotina();
        	cin>>respostaEsp;

            
        		if(respostaEsp == 1){
                cout << "Deseja Registrar o Aluguel da Bicicleta 1, 2 ou 3? ";
                cin >> resp;  
                
                    if(resp == 1){
                        bicicleta1.status = "ALUGADA";
                        cout << "     bicicleta: "<< endl;
                        cout << "========================"<< endl;
                        cout << bicicleta1.cor << endl;
                        cout << bicicleta1.marca << endl;
                        cout << bicicleta1.modelo << endl;
                        cout << bicicleta1.codigo << endl;
                        cout << bicicleta1.valor << endl;
                        cout << bicicleta1.status << endl;
                        cout << "==========================" << endl;
                        
                        cout << "Qual cliente deseja alugar 1, 2 ou 3? " << endl;
                        cin >> resp; 
                            if(resp == 1){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente1.nome << endl;
                            cout << cliente1.cpf << endl;
                            cout << cliente1.idade << endl;
                            cout << cliente1.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel1;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados1;
                                }
                            }
                            
                            if(resp == 2){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente2.nome << endl;
                            cout << cliente2.cpf << endl;
                            cout << cliente2.idade << endl;
                            cout << cliente2.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel1;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados1;
                                }
                            }

                            if(resp == 3){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente3.nome << endl;
                            cout << cliente3.cpf << endl;
                            cout << cliente3.idade << endl;
                            cout << cliente3.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel1;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados1;
                                }
                            }

                        }
                        if(resp == 2){
                        bicicleta2.status = "ALUGADA";
                        cout << "     bicicleta: "<< endl;
                        cout << "========================"<< endl;
                        cout << bicicleta2.cor << endl;
                        cout << bicicleta2.marca << endl;
                        cout << bicicleta2.modelo << endl;
                        cout << bicicleta2.codigo << endl;
                        cout << bicicleta2.valor << endl;
                        cout << bicicleta2.status << endl;
                        cout << "==========================" << endl;
                        
                        cout << "Qual cliente deseja alugar 1, 2 ou 3? " << endl;
                        cin >> resp; 
                            if(resp == 1){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente1.nome << endl;
                            cout << cliente1.cpf << endl;
                            cout << cliente1.idade << endl;
                            cout << cliente1.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel2;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados2;
                                }
                            }
                            
                            if(resp == 2){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente2.nome << endl;
                            cout << cliente2.cpf << endl;
                            cout << cliente2.idade << endl;
                            cout << cliente2.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel2;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados2;
                                }
                            }

                            if(resp == 3){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente3.nome << endl;
                            cout << cliente3.cpf << endl;
                            cout << cliente3.idade << endl;
                            cout << cliente3.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel2;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados2;
                                }
                            }

                        }

                        if(resp == 3){
                        bicicleta3.status = "ALUGADA";
                        cout << "     bicicleta: "<< endl;
                        cout << "========================"<< endl;
                        cout << bicicleta3.cor << endl;
                        cout << bicicleta3.marca << endl;
                        cout << bicicleta3.modelo << endl;
                        cout << bicicleta3.codigo << endl;
                        cout << bicicleta3.valor << endl;
                        cout << bicicleta3.status << endl;
                        cout << "==========================" << endl;
                        
                        cout << "Qual cliente deseja alugar 1, 2 ou 3? " << endl;
                        cin >> resp; 
                            if(resp == 1){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente1.nome << endl;
                            cout << cliente1.cpf << endl;
                            cout << cliente1.idade << endl;
                            cout << cliente1.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel3;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados3;
                                }
                            }
                            
                            if(resp == 2){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente2.nome << endl;
                            cout << cliente2.cpf << endl;
                            cout << cliente2.idade << endl;
                            cout << cliente2.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel3;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados3;
                                }
                            }

                            if(resp == 3){
                            cout << "     Cliente: "<< endl;
                            cout << "========================"<< endl;
                            cout << cliente3.nome << endl;
                            cout << cliente3.cpf << endl;
                            cout << cliente3.idade << endl;
                            cout << cliente3.telefone << endl;
                            cout << "==========================" << endl;

                            cout << "Qual funcionário está alugando 1, 2 ou 3? " << endl;
                                if(resp == 1){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario1.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 2){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario2.matricula << endl;
                                    cout << "==========================" << endl;
                                    }
                                if(resp == 3){
                                    cout << "     Funcionário: "<< endl;
                                    cout << "========================"<< endl;
                                    cout << funcionario3.matricula << endl;
                                    cout << "==========================" << endl;
                                    cout << "Digite a data do aluguel(Apenas Números): " << endl;
                                    cin >> dataAluguel3;
                                    cout << "Quantos dias alugados: ";
                                    cin >> diasAlugados3;
                                }
                            }
                        }
                }	
				if(respostaEsp == 2){
                    cout << "De qual bicicleta deseja finalizar o aluguel 1, 2 ou 3? ";
                    cin >> resp;

                        if (resp == 1){
                        cout << "Finalizar aluguel da bicicleta 1: " << endl;
                        cout << "==================================" << endl;
                        cout<<"Valor total é: R$" << bicicleta1.valor + diasAlugados1;
                        }
                        if (resp == 2){
                        cout << "Finalizar aluguel da bicicleta 2: " << endl;
                        cout << "==================================" << endl;
                        cout<<"Valor total é: R$" << bicicleta2.valor + diasAlugados2;
                        }
                        if (resp == 2){
                        cout << "Finalizar aluguel da bicicleta 3: " << endl;
                        cout << "==================================" << endl;
                        cout<<"Valor total é: R$" << bicicleta3.valor + diasAlugados3;
                        }
                    }
            
				if(respostaEsp == 3){
					main();
		        }

			} while (respEsp !=1);
        	break;


            case 4:
        	do{
        	menuRelatorio();
        	cin>>respostaEsp;
        		if(respostaEsp == 1){
			   	
				}
				if(respostaEsp == 2){
                total = (bicicleta1.valor * diasAlugados1) + (bicicleta2.valor * diasAlugados2) + (bicicleta3.valor * diasAlugados3);
                cout << "A soma total dos alugueis é: " << total;

				}

				if(respostaEsp == 3){
    				
					
				}
				if(respostaEsp == 4){
        		
				}
				if(respostaEsp == 5){
					main();
				}
        	
       	    }while(respEsp ==1);
        	break;

        	case 5:
        		break;
    }  
    }
while(respEsp==1);
}