#include <iostream>
#include <string>
#include <limits>
#include <algorithm>
#include <vector>
#include <cmath>

int CheckIntCin() // Usado en lugar de cin >> (int) para asegurarse que es un int correcto y no ocurra el Cin Infinite Loop
{
    int newNum;
    std::cin >> newNum;
    bool invalido = cin.fail();
    while (invalido)
    {
        if (std::cin.fail())
        {
            std::cout << "Por favor ingrese un numero valido" << endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> newNum;
        }
        else 
        {
            invalido = false;
        }
    }
    return newNum;
}

using namespace std;

int main()
{
    bool loop = true;
    while (loop)
    {
        std::cout << 
        "Ingrese un numero:\n" <<
        "1. Alta de Usuario\n" << 
        "2. Alta de Hostal\n" << 
        "3. Alta de Habitacion\n" <<
        "4. Asignar Empleado a Hostal\n" <<
        "5. Registrar Reserva\n" << 
        "6. Consulta top 3 de Hostales\n" << 
        "7. Registrar Estadia\n" << 
        "8. Finalizar Estadia\n" << 
        "9. Calificar Estadia\n" << 
        "10. Comentar Calificacion\n" << 
        "11. Consulta de Usuario\n" << 
        "12. Consulta de Hostal\n" << 
        "13. Consulta de Reserva\n" << //no esta aun
        "14. Consulta de Estadia\n" << 
        "15. Baja de Reserva\n" << //no esta aun
        "16. Subscribirse a notificaciones \n" <<
        "17. Consultar notificaciones\n" << 
        "18. Eliminar suscripcion\n"<< 
        "19. Salir\n" << 
        endl <<
        "DEBUG:\n"
        "20. Cargar Datos de Prueba\n" << 
        "21. Ajustar Fecha\n";
        

        int num = CheckIntCin();
        switch (num)
        {
            case 1: 
            {      
                break;
            }  

            case 2: 
            {
                break;


            }

            case 4: 
            {
                break;
            }
            case 5:
            {
                break;
            }
            case 6:
            {
                break;
            }
            case 7:
            {
                break;
            }
            case 8:
            {
                break;
            }
            case 9:
            {
                break;
            }
            case 10:
            {
                break;
            }
            case 11:{
                break;
            }
            case 12:
            {
                break;
            }
            case 13:{
                break;
            }
            case 14:
            {
                break;
            }
            case 15:
            {
                break;
            }
            case 16:
            {
            break;
            }
            case 17:
            {
            break;
            }
            case 18:
            {
                break;
            }
            case 19:
                {
                    loop = false;
                    break;
            }

            case 20:
            {
                
                break;
            }

            case 21:
            {
                break;
            }
            
            default:
            {
                cout << "Por favor ingrese un numero valido" << endl;
                cin.clear();
                cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                break;
            }
        }
    }
    return 0;
}
