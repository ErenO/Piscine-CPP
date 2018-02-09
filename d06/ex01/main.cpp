#include <iostream>
#include <ctime>
struct Data
{
    std::string s1;
    int n;
    std::string s2;
};

struct Serialize
{
    char s1[9];
    int n;
    char s2[9];
};

void rand_str(char *s)
{
    int i;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    i = 0;
    while (i < 8) {
        s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
        i++;
    }
    s[i] = '\0';
}

void *serialize(void)
{
    Serialize *ser = new Serialize;

    rand_str(ser->s1);
    ser->n = rand() % 999999;
    rand_str(ser->s2);
    return reinterpret_cast<void *>(ser);
}

Data *deserialize(void *ptr)
{
    Serialize *ser;
    Data *data = new Data;
    ser = reinterpret_cast<Serialize *>(ptr);
    data->s1 = static_cast<std::string>(ser->s1);
    data->n = static_cast<int>(ser->n);
    data->s2 = static_cast<std::string>(ser->s2);
    return (data);
}

int main()
{
    void *ser;
    Data *data;
    std::srand(std::time(NULL) + std::clock());
    ser = serialize();
    data = deserialize(ser);
    std::cout << "s1: " << data->s1 << std::endl;
    std::cout << "n: "<< data->n << std::endl;
    std::cout << "s2: " << data->s2 << std::endl;
    return 0;
}