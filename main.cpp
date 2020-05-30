
//Создать класс «Конвейер сборки летательных аппаратов», в результате работы
//которого мы можем получить : пассажирский самолет, боевой самолет, вертолет,
//квадрокоптер.
//Использовать паттерн «Строитель».
//Результат создания летательных аппаратов и все их характеристики
//    (военный или гражданский, тип
//    военного аппарата, тип гражданского аппарата, взлетная масса, тип двигателей,
//    число двигателей, количество крыльев, расположение крыльев, тип шасси,
//    скорость полета, по типу взлета и посадки, способ управления, экипаж(число
//    человек), год производства, тип вооружения) записываются в разные выходные
//    файлы, разделенные по типу летательного аппарата.
//Пользователь может вводить
//    данные из консоли и загружать из файлов.

#include <iostream>
#include <fstream>
#include "Director.h"

using namespace std;

int main()
{
    Director dir;
    CivilAviationBuilder ca_builder;
    ArmyAviationBuilder aa_builder;

    Aviation* ca = dir.createAviation(ca_builder);
    Aviation* aa = dir.createAviation(aa_builder);

    int n;
    try {
        while (1) {
            system("cls");

            cout << "Select input options:" << endl;
            cout << "1. File" << endl;
            cout << "2. Console" << endl;
            cin >> n;
            if (n == 1) //File
            {
                system("cls");
                string path_in;
                ifstream in;
                in.open("input.txt");
                try {
                    while (!in.eof())
                    {
                        string class_avia;
                        int num_of_plane;
                        getline(in, class_avia);
                        if (class_avia == "Civil aviation")
                        {
                            in >> num_of_plane;
                            if (num_of_plane <= 0) {
                                string e = "Error (num_of_plane)";
                                throw e;
                            }
                            for (int i = 0; i < num_of_plane; i++)
                            {
                                getline(in, class_avia);
                                string type_avia;
                                getline(in, type_avia);
                                if (type_avia == "Passenger plane" || type_avia == "Helicopter" || type_avia == "Quadrocopter")
                                {
                                    dir.add(ca_builder, in, type_avia);
                                }
                                else
                                {
                                    string e = "Error reding file1";
                                    throw e;

                                }
                            }
                        }
                        else if (class_avia == "Army aviation")
                        {
                            in >> num_of_plane;
                            for (int i = 0; i < num_of_plane; i++)
                            {
                                getline(in, class_avia);
                                string type_avia;
                                getline(in, type_avia);
                                if (type_avia == "Battle plane" || type_avia == "Helicopter" || type_avia == "Quadrocopter")
                                {
                                    dir.add(aa_builder, in, type_avia);
                                }
                                else
                                {
                                    string e = "Error reding file2";
                                    throw e;

                                }
                            }
                        }
                        else
                        {
                            string e = "Error reding file3";
                            throw e;

                        }
                        getline(in, class_avia);
                    }
                }
                catch (string e)
                {
                    cout << e << endl;
                    system("pause");
                    exit(1);
                }

                in.close();
                break;
            }
            else if (n == 2) //Console
            {
                system("cls");
                int class_avia;
                int num_of_plane;

                while (1) {
                 system("cls");
                cout << "Enter class aviation: " << endl;
                cout << "1. Civil aviation" << endl;
                cout << "2. Army aviation" << endl;
                cin >> class_avia;
                    if (class_avia != 1 && class_avia != 2) {
                        cin.clear();
                        cin.ignore();
                        cout << "Error"<<endl;
                    }
                    else break;
                }

                if (class_avia == 1)
                {
                    cout << "Enter number of planes: ";
                    cin >> num_of_plane;
                    for (int i = 0; i < num_of_plane; i++)
                    {
                        int type_avia;
                        cout << "Select plane:" << endl;
                        cout << "1. Passenger plane" << endl;
                        cout << "3. Helicopter" << endl;
                        cout << "4. Quadrocopter" << endl;
                        cin >> type_avia;

                        while (1)
                        {
                            if (type_avia == 1 || type_avia == 3 || type_avia == 4)
                            {
                                break;
                            }
                            else
                            {
                                cout << "You choose wrong plane. Please write again " << endl;
                                cin >> type_avia;
                            }
                        }

                        dir.add(ca_builder, type_avia);

                    }
                }
                else if (class_avia == 2)
                {
                    cout << "Enter number of planes: ";
                    cin >> num_of_plane;
                    for (int i = 0; i < num_of_plane; i++)
                    {
                        int type_avia;
                        cout << "Select plane:" << endl;
                        cout << "2. Battle plane" << endl;
                        cout << "3. Helicopter" << endl;
                        cout << "4. Quadrocopter" << endl;
                        cin >> type_avia;

                        if (type_avia == 2 || type_avia == 3 || type_avia == 4)
                        {
                            dir.add(aa_builder, type_avia);
                        }
                        else
                        {
                            cout << "You choose wrong plane. Please write again " << endl;
                            cin >> type_avia;
                        }
                        dir.add(ca_builder, type_avia);


                    }
                }
                
                break;
            }

        }
    }
    catch (string e)
    {
        cout << e << endl;
        system("pause");
        exit(1);
    }

    while (1) //menu
    {
        system("cls");
        cout << "Select option:" << endl;
        cout << "1. Add" << endl;
        cout << "2. Change" << endl;
        cout << "3. Delete" << endl;
        cout << "4. Print" << endl;
        cout << "5. Exit" << endl;
        cin >> n;
        if (n == 1)  //add 
        {
            system("cls");
            int class_avia;
            while (1) {
                system("cls");
                cout << "Enter class aviation: " << endl;
                cout << "1. Civil aviation" << endl;
                cout << "2. Army aviation" << endl;
                cin >> class_avia;
                if (class_avia != 1 && class_avia != 2) {
                    cin.clear();
                    cin.ignore();
                    cout << "Error" << endl;
                }
                else break;
            }
            if (class_avia == 1)
            {
                int type_avia;
                
                while (1) {
                    system("cls");
                    cout << "Type of aviation plane:";
                    cout << "1. Passenger plane" << endl;
                    cout << "3. Helicopter" << endl;
                    cout << "4. Quadrocopter" << endl;
                    cin >> type_avia;
                    if (type_avia == 1 || type_avia == 3 || type_avia == 4)
                    {
                        dir.add(ca_builder, type_avia);
                    }
                    else
                    {
                        cin.clear();
                        cin.ignore();
                        cout << "You choose wrong plane" << endl;
                    }
                }
            }
            else if (class_avia == 2)
            {
                system("cls");
                int type_avia; while (1) {
                system("cls");
                cout << "Type of aviation plane:";
                cout << "2. Battle plane" << endl;
                cout << "3. Helicopter" << endl;
                cout << "4. Quadrocopter" << endl;
                cin >> type_avia;

                if (type_avia == 2 || type_avia == 3 || type_avia == 4)
                {
                    dir.add(aa_builder, type_avia);
                }
                else
                {
                    cin.clear();
                    cin.ignore();
                    cout << "You choose wrong plane" << endl;
                }
            }
            }

        }
        else if (n == 2)//change
        {
            system("cls");
            int class_avia;
            string name;
            while (1) {
                system("cls");
                cout << "Enter class aviation: " << endl;
                cout << "1. Civil aviation" << endl;
                cout << "2. Army aviation" << endl;
                cin >> class_avia;
                if (class_avia != 1 && class_avia != 2) {
                    cin.clear();
                    cin.ignore();
                    cout << "Error" << endl;
                }
                else break;
            }
            if (class_avia == 1)

            {
                ca->print();
                int opt;
                cout << "Enter name of plane:";
                cin >> name;
                if (ca->search_name(name))
                {
                    while (1) {
                        cout << "Select option for change:" << endl;
                        cout << "1. Name" << endl;
                        cout << "2. Weight" << endl;
                        cout << "3. Type of engine" << endl;
                        cout << "4. Number of engines" << endl;
                        cout << "5. Number of wings" << endl;
                        cout << "6. Type of wings" << endl;
                        cout << "7. Type of chassis" << endl;
                        cout << "8. Speed of flight" << endl;
                        cout << "9. Type of takeoff" << endl;
                        cout << "10. Type of control method" << endl;
                        cout << "11. Crew" << endl;
                        cout << "12. Year of production" << endl;
                        cout << "13. Type of weapon" << endl;

                        cin >> opt;
                        if (opt > 13 || opt < 0)
                        {
                            cout << "You choose wrong option" << endl;
                        }
                        else break;
                    }
                        switch (opt)
                        {
                        case 2:
                        case 4:
                        case 5:
                        case 8:
                        case 11:
                            int i_data;
                            cout << "Enter new data: ";
                            cin >> i_data;
                            dir.change(ca, name, opt, i_data);
                            break;
                        case 1:
                        case 3:
                        case 6:
                        case 7:
                        case 9:
                        case 10:
                        case 12:
                        case 13:
                            string s_data;
                            cout << "Enter new data: ";
                            cin >> s_data;
                            dir.change(ca, name, opt, s_data);
                            break;
                        }
                }
                else
                {
                    cout << "You enter wrong name" << endl;
                }
            }
            else if (class_avia == 2)
            {
                system("cls");
                aa->print();
                cout << "Enter name of plane:";
                cin >> name;
                if (aa->search_name(name))
                {
                    cout << "Select option for change:" << endl;
                    cout << "1. Name" << endl;
                    cout << "2. Weight" << endl;
                    cout << "3. Type of engine" << endl;
                    cout << "4. Number of engines" << endl;
                    cout << "5. Number of wings" << endl;
                    cout << "6. Type of wings" << endl;
                    cout << "7. Type of chassis" << endl;
                    cout << "8. Speed of flight" << endl;
                    cout << "9. Type of takeoff" << endl;
                    cout << "10. Type of control method" << endl;
                    cout << "11. Crew" << endl;
                    cout << "12. Year of production" << endl;
                    cout << "13. Type of weapon" << endl;
                    int opt;
                    cin >> opt;
                    if (opt > 13 || opt < 0)
                    {
                        cout << "You choose wrong option" << endl;
                    }
                    else
                    {
                        switch (opt)
                        {
                        case 2:
                        case 4:
                        case 5:
                        case 8:
                        case 11:
                            int i_data;
                            cout << "Enter new data: ";
                            cin >> i_data;
                            dir.change(aa, name, opt, i_data);
                            break;
                        case 1:
                        case 3:
                        case 6:
                        case 7:
                        case 9:
                        case 10:
                        case 12:
                        case 13:
                            string s_data;
                            cout << "Enter new data: ";
                            cin >> s_data;
                            dir.change(aa, name, opt, s_data);
                            break;
                        }
                    }
                }
                else
                {
                    cout << "You enter wrong name" << endl;
                }
            }
        }
        else if (n == 3) //Delete
        {
            int class_avia;
            string name;
            while (1) {
                system("cls");
                cout << "Enter class aviation: " << endl;
                cout << "1. Civil aviation" << endl;
                cout << "2. Army aviation" << endl;
                cin >> class_avia;
                if (class_avia != 1 && class_avia != 2) {
                    cin.clear();
                    cin.ignore();
                    cout << "Error" << endl;
                }
                else break;
            }
            if (class_avia == 1)
            {
                ca->print();
                cout << "Enter name of plane:";
                cin >> name;
                if (ca->search_name(name))
                {
                    dir.del(ca, name);
                }
                else
                {
                    cout << "You enter wrong name" << endl;
                }
            }
            else if (class_avia == 2)
            {
                aa->print();
                cout << "Enter name of plane:";
                cin >> name;
                if (aa->search_name(name))
                {
                    dir.del(aa, name);
                }
                else
                {
                    cout << "You enter wrong name" << endl;
                }
            }
            else
            {
                cout << "You choose wrong class aviation" << endl;
            }
        }
        else if (n == 4)//Print
        {
            while (1) {
                cout << "Select output options:" << endl;
                cout << "1. File" << endl;
                cout << "2. Console" << endl;
                cin >> n;
                if (n == 1)
                {
                    string path_out;
                    int class_avia;
                    cout << "Enter class aviation: " << endl;
                    cout << "1. Civil aviation" << endl;
                    cout << "2. Army aviation" << endl;
                    cin >> class_avia;
                    if (class_avia == 1)
                    {
                        path_out += "Civil_";
                        ca->print(path_out);
                    }
                    else if (class_avia == 2)
                    {
                        path_out += "Army_";
                        aa->print(path_out);
                    }
                    else
                    {
                        cout << "You choose wrong class aviation" << endl;
                    }
                    break;
                }
                else if (n == 2)
                {
                    int class_avia;
                    cout << "Enter class aviation: " << endl;
                    cout << "1. Civil aviation" << endl;
                    cout << "2. Army aviation" << endl;
                    cin >> class_avia;
                    if (class_avia == 1)
                    {
                        ca->print();
                    }
                    else if (class_avia == 2)
                    {
                        aa->print();
                    }
                    else
                    {
                        cout << "You choose wrong class aviation" << endl;
                    }
                    break;
                }
                else
                {
                    cin.clear();
                    cin.ignore();
                    cout << "You choose wrong options" << endl;
                }
            }
        }
        else if (n == 5)
        {
            break;
        }
        system("pause");
    }

    return 0;
}