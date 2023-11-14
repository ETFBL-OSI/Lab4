#ifndef NAJMANJIODNBR_H_INCLUDED
#define NAJMANJIODNBR_H_INCLUDED

int najmanji(int n, int *arr){
    int mini=1e9;
    for(int i=0;i<n;i++) mini=(arr[i] < mini ? arr[i] : mini);
    return mini;
}

#endif // NAJMANJIODNBR_H_INCLUDED
