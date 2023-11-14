#ifndef RACUNANJE_FAKTORIJELA_H_INCLUDED
#define RACUNANJE_FAKTORIJELA_H_INCLUDED

int racunanje_faktorijela(int x)
{
    int fakt=1;
    for(int i=1; i<=x;i++)
    {
        fakt=fakt*i;
    }
    return fakt;
}



#endif // RACUNANJE_FAKTORIJELA_H_INCLUDED
