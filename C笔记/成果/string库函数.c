#include <stdio.h>
int mstrlen(const char* str){
    int num = 0;
    for(int i = 0; str[i] != '\0'; i++){
        num++;
    }
    return num;
}
char* mstrcat(char* destination, const char* resource){
    int sub = mstrlen(destination);
    int resultsub = sub;
    for(int i = 0; resource[i] != '\0'; i++){
        destination[sub] = resource[i];
        sub++;
        resultsub++;
    }
    destination[resultsub + 1] = '\0';
    return destination;
}
char* mstrcpy(char* destination, const char* resource){
    int resultsub = 0;
    for(int i = 0; resource[i] != '\0'; i++){
        destination[i] = resource[i];
        resultsub++;
    }
    destination[resultsub] = '\0';
}
int mstrcmp(const char* str1, const char* str2){
    if(mstrlen(str1) > mstrlen(str2)) 
        return 1;
    else if(mstrlen(str1) < mstrlen(str2))
        return -1;
    else if(mstrlen(str1) == mstrlen(str2)){
        int rightnum = 0;
        for(int i = 0; str1[i] != '\0'; i++){
            if(str1[i] == str2[i])
                rightnum++;
        }
        if(rightnum == mstrlen(str1))
            return 0;
    }
    return 0;
}
int main(){
    char demo[15] = "HelloWorld";
    char str[3] = "ME";
    char demo2[15] = "HelloWorld";
    char str2[3] = "ME";
    int result_len = mstrlen(demo);
    int result_cmp1 = mstrcmp(demo, str);
    int result_cmp2 = mstrcmp(str, demo);
    int result_cmp = mstrcmp(demo, demo);
    mstrcat(demo, str);
    mstrcpy(demo2, str2);
    printf("%d %d %d %d %s %s %s %s", result_len, result_cmp1, result_cmp2, result_cmp, demo, str, demo2, str2);
}