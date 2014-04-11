#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

string obtenerPalabraYRecortar (string &linea)
{
    int indice = 0;
    bool empezar = false;
    string palabra;
    for (int i=0; i < linea.size(); i++){

        if (empezar == true && (linea[i] == ',' || linea[i] == ' '))
            break;
        else if (linea[i] != ',' && linea[i] != ' ')
            empezar = true;
        if (empezar == true)
            palabra.push_back(linea[i]);

        indice++;
    }

    linea.erase(linea.begin(), linea.begin() + indice);
    return palabra;
}
vector < string > obtenerFila(string linea) {

    vector <string> elVector;

    while (linea.size() != 0) {

        string palabra = obtenerPalabraYRecortar(linea);
        elVector.push_back(palabra);

    }

    return elVector;

}

int main()
{

	ifstream archivo ("elterriblearchivo.txt");
	while(archivo.eof() == false)
	{
        string linea;
        getline (archivo, linea);
	}

	string pene=", el pene, tiene, porte  mas penes";
    vector <string> elVector = obtenerFila(pene);

    for (int i = 0; i < elVector.size(); i++)
        cout << elVector[i] << " asdjkh\n";


	return 0;
}
