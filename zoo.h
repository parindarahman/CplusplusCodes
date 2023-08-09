#ifndef ZOO_H_INCLUDED
#define ZOO_H_INCLUDED
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


#endif // ZOO_H_INCLUDED
