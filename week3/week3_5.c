#include <stdio.h>
char convertGrade(float);

int main()
{

    float numberGrade;
    char letterGrade;
    printf("enter your number grade: ");
    scanf("%f", &numberGrade);
    letterGrade = convertGrade(numberGrade);
    printf("%f number grade is %c", numberGrade, letterGrade);


    return 0;
}
//implement
char convertGrade(float numberGrade)
{
    char letterGrade;
    if(numberGrade >=.0 && numberGrade < 1.0)
    {
        letterGrade = 'F';
    }
    else if (numberGrade < 2.0)
    {
        letterGrade = 'D';
    }
    else if(numberGrade < 2.5)
    {
        letterGrade = 'C';
    }
    else if (numberGrade < 3.0)
    {
        letterGrade = 'B';
    }
	// burada birisi 4'ten büyük olursa derse
	else if (numberGrade<=4.0) //kosulu yazıp A'ya eşitleyelim
	{
	    letterGrade = 'A';
	}
	// else icinse letterGrade = 'N' gibi anlamsız bir deger icin
	// geçersiz sonucu döndürelim
    else
    {
            printf("geçesiz bir sonuç girdiniz");
        //letterGrade = 'A';
    }
    return letterGrade;
}