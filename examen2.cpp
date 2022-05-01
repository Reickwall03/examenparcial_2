// examenparcial2_sql.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <mysql.h>
#include <iostream>
#include "examenparcial2_sql.h"
using namespace std;
int q_estado;


int main()
{
    MYSQL* conectar;
    conectar = mysql_init(0);
    conectar = mysql_real_connect(conectar, "localhost", "root", "1234", "db_estudiante", 3306, NULL, 0);
    if (conectar) {
        //cout << "conexion exitosa..." << endl;


        string carnet, nombre, apellidos, direccion, genero, fecha_nacimiento;
        cout << "ingrese estudiante";
        cin >> nombre;
        string insert = "insert into estudiante(nombre)values ('" + nombre + "')";
        const char* i = insert.c_str ();
        q_estado = mysql_query(conectar, i);
        if (!q_estado) {
            cout << "Ingreso Exitoso..." << endl;
        }

        else {
            cout << "Error al ingresar.." << endl;
        }

    }
    else {
        cout <<"error en la conexion..." << endl;

    }
    system("pause");
    return 0;
