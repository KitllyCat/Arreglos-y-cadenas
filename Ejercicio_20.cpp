/*Solicite al contador del almacén La Milagrosa el monto de las ventas mensuales de todo el año 2020. Luego, el contador desea obtener los siguientes resultados:
• Valor de la venta mensual promedio.
• Obtenga el porcentaje de los meses del año que cumplieron los siguientes niveles de ventas: (anexo en el pdf)
• Indique los nombres de los meses (enero, febrero, etc.) en los cuales la venta fue Excelente.*/
#include <iostream>
#include <string>
using namespace std;

string mes_nombre(int mes);

int main() {
    const int meses = 12;
    double ventas[meses];
    
    cout << "Ingrese las ventas mensuales del anio 2020 para La Milagrosa:\n" << endl;
    for (int i = 0; i < meses; ++i) {
        string nombre_mes;
        cout << "Venta de " << mes_nombre(i + 1) << ": ";
        cin >> ventas[i];
    }
    
    double total_anual = 0;
    for (int i = 0; i < meses; ++i) {
        total_anual += ventas[i];
    }
    double promedio_anual = total_anual / meses;
    double porcentajes[meses];
    for (int i = 0; i < meses; ++i) {
        porcentajes[i] = (ventas[i] / promedio_anual) * 100;
    }
    
    double venta_promedio = promedio_anual;

    string niveles[meses];
    int excelente_count = 0;
    int minimo_count = 0;
    int regular_count = 0;
    
    for (int i = 0; i < meses; ++i) {
        if (porcentajes[i] < 40) {
            niveles[i] = "Minimo :/";
            minimo_count++;
        } else if (porcentajes[i] >= 40 && porcentajes[i] <= 75) {
            niveles[i] = "Regular :)";
            regular_count++;
        } else {
            niveles[i] = "Excelente :D";
            excelente_count++;
        }
    }
    
    double porcentaje_minimo = (static_cast<double>(minimo_count) / meses) * 100;
    double porcentaje_regular = (static_cast<double>(regular_count) / meses) * 100;
    double porcentaje_excelente = (static_cast<double>(excelente_count) / meses) * 100;
    
    cout << "\nResultados:\n" << endl;
    cout << "El valor de la venta mensual promedio: $" << venta_promedio << endl;
    cout << "El porcentaje de los meses del anio que cumplieron los niveles de ventas:\n" << endl;
    cout << "  - Minimo (< 40% del promedio anual): " << porcentaje_minimo << "%\n";
    cout << "  - Regular (Entre 40% y 75% del promedio anual): " << porcentaje_regular << "%\n";
    cout << "  - Excelente (> 75% del promedio anual): " << porcentaje_excelente << "%\n";
    
    // Mostrar meses donde la venta fue Excelente
    cout << "\nMeses con ventas Excelentes:\n";
    for (int i = 0; i < meses; ++i) {
        if (niveles[i] == "Excelente") {
            cout << "  - " << mes_nombre(i + 1) << endl;
        }
    }
    return 0;
}

string mes_nombre(int mes) {
    switch(mes) {
        case 1: return "enero";
        case 2: return "febrero";
        case 3: return "marzo";
        case 4: return "abril";
        case 5: return "mayo";
        case 6: return "junio";
        case 7: return "julio";
        case 8: return "agosto";
        case 9: return "septiembre";
        case 10: return "octubre";
        case 11: return "noviembre";
        case 12: return "diciembre";
        default: return "mes invalido(inexistente)";
    }
}

