#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *pf00;
    FILE *pf01;
    int i=0;
    int j=0;
    char buf0[10];
    char buf1[513];
    pf00=fopen("Run.bat","w");
    pf01=fopen("List.txt","r");
    while(fgets(buf0,10,pf01) != NULL)
    {
        for(j=0;j<10;j++)
        {
            if(buf0[j]=='\n')
            {
                buf0[j]='\0';
                break;
            }
        }
        int n=sprintf (buf1, ".\\Opera\\73.0.3856.344\\opera.exe \"https://goodinfo.tw/StockInfo/ShowK_Chart.asp?STOCK_ID=%s&CHT_CAT2=DATE\" \"https://goodinfo.tw/StockInfo/StockDividendSchedule.asp?STOCK_ID=%s\" \"https://goodinfo.tw/StockInfo/StockDividendPolicy.asp?STOCK_ID=%s\"", buf0,buf0,buf0);
        fprintf(pf00,"@echo off\n");
        fprintf(pf00,"set OperaDir=%%cd%%\\Opera\\profile\\data\n");
        fprintf(pf00,"del /q /s /f \"%%OperaDir%%\" >>log.txt\n");
        fprintf(pf00,"rd /s /q \"%%OperaDir%%\" >>log.txt\n");
        fprintf(pf00,"%s\npause\n\n\n",buf1);
        i++;
    }
    fclose(pf00);
    fclose(pf01);
    system("Run.bat");
    return 0;
}
