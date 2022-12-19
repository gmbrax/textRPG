# TextRPG

TextRPG é linguagem de programação para criação rápida de jogos de aventura de texto

O manual da linguagem será adicionado nesse repositório em breve, assim como o manual de uso da linguagem 

## Instalação

No momento o projeto está em fase de desenvolvimento porém o projeto pode ser compilado para testes usando os seguintes procedimentos

**Github:**

```bash
git clone git@github.com:gmbrax/textRPG.git
cd textRPG
mkdir -p out/data #devido à como os arquivos são gerados pela aplicação é requerido esse passo
cmake -S . -B ./out/build #Assim com citado acima é requerido que a pasta seja essa 
cd out/build
make
```

## Uso
No momento o programa não está pronto para uso porém após ser compilado o programa gerará um binario na pasta ```out/build```
para rodar o binário gerado basta seguir o seguinte procedimento:
```bash
cd out/build # Esse passo somente é necessário caso não já nao esteja na pasta
./TextRPG
```

## Roadmap
No momento o foco é implementar o funcionamento básico da linguagem, sendo planos futuros a adição de um motor de runtime, e ferramentas de desenvolvido para a criação de um toolchain para a linguagem