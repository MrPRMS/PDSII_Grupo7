#include "Util.h"
#include <cstring>

int validaCPF(char *CPF)
    {
    int teste=1,i,soma1=0,soma2=0;
    if(strlen(CPF)>11)
        return (teste-1);
    for(i=0;i<8;i++,CPF++);
    for(i=2;i<=10;i++,CPF--)
        soma1+=(*CPF-48)*i;
    for(i=0;i<10;i++,CPF++);
    for(i=2;i<=11;i++,CPF--)
        soma2+=(*CPF-48)*i;
    if(soma1%11==0||soma1%11==1)
        {
        if(CPF[10]!='0')
            return (teste-1);
        }
    else
        if(CPF[10]-48!=11-(soma1%11))
            return (teste-1);
    if(soma2%11==0||soma2%11==1)
        {
        if(CPF[11]!='0')
            return (teste-1);
        }
    else
        if(CPF[11]-48!=11-(soma2%11))
            return (teste-1);
    return (teste);
    }
	
/*char * removeMascara(char *palavra, char *mascara ){
	int tam=strlen(palavra);
	int comp=strlen(mascara);
	char aux[tam]="";
	for(int l = 0; l < tam;++l){
		bool temMascara=false;
		for(int i=0; i < comp;++i)
			if(palavra[l]==mascara[i]){
				temMascara=true;
				break;
			}
		if(!temMascara)
			strncat(aux, &palavra[l], 1);
	}
	return aux;
}

void append(char* s, char c) {
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

bool AppendCharToCharArray( char *array, size_t n, char c )
{
    size_t sz = std::strlen( array );

    if ( sz + 1 < n ) 
    {
        array[sz] = c;
        array[sz + 1] = '\0';
    }       

    return ( sz + 1 < n );
} 
*/