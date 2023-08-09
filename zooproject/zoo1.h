//Parinda Rahman-1931804042
#ifndef ZOO1_H_INCLUDED
#define ZOO1_H_INCLUDED
class ZooAnimal
{
private:
    char *name;
    int cageNumber;
    int weightDate;
    int weight;
public:
    void Create(char*,int,int,int);
    void Destroy();
    char* reptName();
    int daysSinceLastWeighed(int today);
};

#endif // ZOO1_H_INCLUDED
