#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include <KaeliLexer.h>
#include <KaeliParser.h>
#include <antlr4-runtime.h>
#include "myVisitor/KCVisitor.h"

using namespace std;
using namespace antlr4;

int abrirArchivo(int argc, char *argv[]){

    if (argc <= 1)
        return -1;

    string linea;
    vector<string> params, path_files;

    for (int i = 1; i < argc; i++) {
        string opcion = argv[i];
        if (opcion.length() > 0 && opcion[0] != '-') {
            path_files.push_back(opcion);
            continue;
        }
        params.push_back(opcion.substr(1));
    }

    if (!path_files.empty()) {
        ifstream file(path_files[0]);
        if (!file.good()) {
            printf("El archivo no existe, revise la ruta.\n");
            return EXIT_FAILURE;
        }

        ANTLRInputStream input(file);
        KaeliLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        KaeliParser parser(&tokens); 
        KaeliParser::ProgramContext* tree = parser.program();


        KCVisitor eval;
        eval.visitProgram(tree);
        eval.compile();
        
        cout << tree->toStringTree(&parser) << endl;
    }
    return 0;
}

int main(int argc, char *argv[]) {    
    int result = abrirArchivo(argc, argv);
    cout << "oki doki" << endl;
    if (result != -1) {
        return result;
    }
}