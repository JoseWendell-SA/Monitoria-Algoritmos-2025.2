import sys
import os


def criar_template_questao(numero):
    return f'''/*
==================================================
PROBLEMA {numero}
==================================================

*/

#include <stdio.h>
#include <stdlib.h>

int main() {{
    
    return 0;
}}
'''

def criar_arquivos_c(destino): 
    x = input("Digite as questões: [SEPARADAS POR VIRGULA]: ")
    questoes = list(map(int, x.split(',')))

    os.makedirs(destino, exist_ok=True)
    
    for numero in questoes:
        nome_arquivo = f"ex_{numero}.c"
        caminho_completo = os.path.join(destino, nome_arquivo)
        
        with open(caminho_completo, 'w', encoding='utf-8') as arquivo:
            arquivo.write(criar_template_questao(numero))
        
        print(f"Arquivo criado: {caminho_completo}")

    print(f"\n✅ {len(questoes)} arquivos criados em '{destino}'!")


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("❌ Você precisa passar o nome da pasta como argumento.")
        print("Exemplo: python3 arquivo.py S2")
    else:
        destino = sys.argv[1]
        criar_arquivos_c(destino)