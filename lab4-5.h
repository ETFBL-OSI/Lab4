#ifndef LAB4-5_H_INCLUDED
#define LAB4-5_H_INCLUDED

int oduzminbrojeva(int n, int brojevi[]){
    int rezultat=brojevi[0];
    for(int i=1;i<n; i++){
        rezultat-=brojevi[i];
    }
        return rezultat;
}


#endif // LAB4-5_H_INCLUDED
