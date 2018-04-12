#include"main.hpp"

int main()
{
    Cat cat1, cat2, cat3;
    cat1.setName("Muffy");
    cat2.setName("Ruffy");
    cat3.setName("Tuffy");

    cat1.setBreed("Siamese");
    cat2.setBreed("Bengal");
    cat3.setBreed("Persian");

    cat1.setAge(3);
    cat2.setAge(5);
    cat3.setAge(7);

    cat1.printInfo();
    cout<<"\n";
    cat2.printInfo();
    cout<<"\n";
    cat3.printInfo();
    cout<<"\n";

    return 0;
}
