//
//  Lab1calculator.c
//
//  Ett program som låter användaren skriva in två tal som sedan ska adderas, subtrahera, multiplicera eller dividera med varandra
//  och sedan fråga om man vill mata in nya tal eller avsluta programmet.
//
//  Created by Kj Drougge on 2012-08-31.
//  Copyright (c) 2012 Kj Drougge. All rights reserved.
//

#include <stdio.h>

int main()
{
    float tal1, tal2, summa;
    char operator, val;
    
    do
    {
        printf("Vad vill du räkna ut: ");
        scanf("%f %c %f", &tal1, &operator, &tal2);
        
        switch (operator)
        {
            case '+':
                summa = tal1 + tal2;
                printf("Summan av %.1f + %.1f = %.1f\n", tal1, tal2, summa);
                break;
            case '-':
                summa = tal1 - tal2;
                printf("Summan av %.1f - %.1f = %.1f\n", tal1, tal2, summa);
                break;
            case '/':
                if (tal2 == 0){
                    printf("DU KAN INTE DIVIDERA MED 0!\n");
                }
                else
                {
                    summa = tal1 / tal2;
                    printf("Summan av %.1f / %.1f = %.1f\n", tal1, tal2, summa);
                }
                break;
            case '*':
                summa = tal1 * tal2;
                printf("Summan av %.1f * %.1f = %.1f\n", tal1, tal2, summa);
                break;
                
            default:
                printf("Ingen giltig operator i detta program.\n");
                break;
        }
        
        printf("Vill du räkna nytt tal? (y/n)");
        //fångar upp entertryckningen / "rensar bufferten".
        getchar();
        scanf("%c", &val);
        
    } while (val != 'n');
    
    printf("Calculator avslutad.");
    
    
    return 0;
}

