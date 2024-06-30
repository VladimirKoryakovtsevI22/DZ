#include <cstdio>
#include <cctype>

int main() {
    const int MAX_SIZE = 100;
    char words[MAX_SIZE] = "hello world!";
    char current_word[MAX_SIZE];
    int index = 0;

    for (int i = 0; i < MAX_SIZE; i++) {
        char current_char = words[i];

        if (isalpha(current_char)) {
            current_word[index++] = current_char;
        }
        else {
            current_word[index] = '\0'; // Добавляем завершающий нулевой символ
            index = 0;

            switch (current_char) {
            case ' ':
                printf("Probel naiden %s\n", current_word);
                break;
            case '.':
            case ',':
            case '!':
                printf("Znak naiden %s\n", current_word);
                break;
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                printf("4iclo %s\n", current_word);
                break;
            default:
                switch (tolower(current_word[0])) {
                case 'a':
                case 'b':
                case 'c':
                    printf("Clovo c zag b %s\n", current_word);
                    break;
                    // Добавьте остальные буквы для проверки регистра по необходимости
                default:
                    // Действия для слов, начинающихся с других букв
                    break;
                }
                break;
            }
        }
    }

    return 0;
}