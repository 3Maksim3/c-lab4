#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
    int var;
    cout << "Choose lvl(1 - easy, 2 - middle, 3 - high) " << endl;
    cin >> var;
    switch (var)
    {
        case 1:
        {
            // Условие задания:
            // В заданной строке поменять местами первый и последний символ
            const int N = 200;
            char S[N], type;
            cout << "Fill the string with characters:" << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(S, N);
            type = S[0];
            S[0] = S[strlen(S) - 1];
            S[strlen(S) - 1] = type;
            cout << S <<  endl;
            break;
        }
        case 2:
        {
            // Условие задания:
            // В заданной строке посчитать количество слов
            // Разделителем слов считается один или несколько пробелов
            const int N = 200;
            char S[N];
            cout << "Fill the string with characters:" << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(S, N);
            if (S[0] == ' ' || S[strlen(S) - 1] == ' ')
            {
                cout << "String cannot start or end with a space!" << endl;
                break;
            }
            int i = 1, k, b = 0, n = 0;
            char c = S[0];
            while (S[i] != '\0')
            {
                if (S[i] == c)
                {
                    for (k = i; k < (strlen(S) - 1); k++)
                        S[k] = S[k + 1];
                    S[k] = '\0';
                    i--;
                }
                c = S[i];
                i++;
            }
            while (S[n] != '\0')
            {
                if(S[n] == ' ')
                    b++;
                n++;
            }
            cout << " Amount words: " << b + 1 << endl;
            break;
        }
        case 3:
        {
            // Условие задания:
            // Заданы две строки
            // Построить новую строку, состоящую из символов, которые входят как в одну, так и в другую строку 
            char S1[30], S2[30], S3[60];
            cout << "Fill the first string with characters:" << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(S1, 30);
            
            cout << "Fill the second string with characters:" << endl;
            cin.ignore(cin.rdbuf()->in_avail());
            cin.getline(S2, 30);
            
            S3 == strcat(S1, S2);
            cout << S3 << endl;
            break;
        }
        default:
        {
            cout << "Input again" << endl;
            break;
        }
    }
}

