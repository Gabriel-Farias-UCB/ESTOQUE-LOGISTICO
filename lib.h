#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int boolean;

typedef struct
{
    int dia;
    int mes;
    int ano;
} data;

struct Funcionario 
{
    char nome[100];
    char codigo[7];
    char cpf[15];
    data nascimento;
    char senha[26];
    char contato[12];
} funcionario[300];

struct Produto
{
    char nome[100];
    char codigo[7];
    float preco;
} produto[300];

struct Produto_entrada
{
    char nome[100];
    int quantidade;
    float preco_de_compra;
} produto_entrada[300];

struct Produto_venda
{
    char nome[100];
    int quantidade;
    float preco_vendido;
} produto_venda[300];

char senha_adm[7]; // senha que ficara num arquivo separado para quando entrarem pela primeira vez nao precisarem de cadastro

int produtos_existentes = 0; //tem a quantidade de produtos já cadastrados, essa quantidade é calculada no recuperar_entrada_produto() e aumentada/diminuida no cadastrar/excluir produto
int produtos_comprados = 0;
int produtos_vendidos = 0;
int funcionarios_existentes = 0; //tem a quantidade de funcionarios já cadastrados, essa quantidade é calculada no recuperar_funcionario() e aumentada/diminuida no cadastrar/excluir funcionario

void recuperar_senha_adm(); // vai procurar a senha de adm no arquivo dela *feito
void recuperar_funcionario(); // vai procurar os funcionarios no arquivo que eles estao cadastrados *feito
void recuperar_produto(); // vai procurar os produtos no arquivo que eles estao cadastrados *feito
void recuperar_entrada_produto(); // vai procurar as entradas de produtos no arquivo que eles estao cadastrados *feito
void recuperar_venda_produto(); // vai procurar as vendas de produtos no arquivo que eles estao cadastrados *feito
void menu_login(); // menu inicial onde voce pode entrar pelo seus dados de funcionario ou senha de adm *feito
void login_funcionario(); // login se quiser entrar como funcionario *feito
void login_adm(); // login se quiser entrar como adm *feito
void menu_funcionario(); // menu se entrar como funcionario (nao pode excluir/cadastrar funcionarios) *feito
void menu_adm(); // menu se entrar como adm (pode excluir/cadastrar funcionarios) *feito
void menu_cadastro_e_exclusao_funcionario(); // menu que so aparece para adms *feito
void cadastro_funcionario(); // autoexplicativo *feito
void salvar_funcionario(); // funcao para cadastrar os novos funcionarios no arquivo *feito
void exclusao_funcionario(); // autoexplicativo *feito
void menu_cadastro_e_exclusao_produto(); // autoexplicativo *feito
void consulta_produto();
void cadastro_produto(); // autoexplicativo *feito
void salvar_produto(); // funcao para cadastrar os novos produtos no arquivo *feito
void exclusao_produto(); // autoexplicativo *feito
void entrada_produto(); // autoexplicativo *feito
void salvar_entrada_produto(); // funcao para cadastrar a entrada de produtos no arquivo *feito
void venda_produto(); // autoexplicativo *feito
void salvar_venda_produto(); // funcao para cadastrar a venda de produtos no arquivo *feito
void extrato(); // autoexplicativo *feito
