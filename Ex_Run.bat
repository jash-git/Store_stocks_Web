@echo off
set OperaDir=%cd%\Opera\profile\data
del /q /s /f "%OperaDir%" >>log.txt
rd /s /q "%OperaDir%" >>log.txt
.\Opera\73.0.3856.344\opera.exe "https://goodinfo.tw/StockInfo/ShowK_Chart.asp?STOCK_ID=0056&CHT_CAT2=DATE" "https://goodinfo.tw/StockInfo/StockDividendPolicy.asp?STOCK_ID=0056" "https://goodinfo.tw/StockInfo/StockDividendSchedule.asp?STOCK_ID=0056"
pause

@echo off
set OperaDir=%cd%\Opera\profile\data
del /q /s /f "%OperaDir%" >>log.txt
rd /s /q "%OperaDir%" >>log.txt
.\Opera\73.0.3856.344\opera.exe "https://goodinfo.tw/StockInfo/ShowK_Chart.asp?STOCK_ID=0050&CHT_CAT2=DATE" "https://goodinfo.tw/StockInfo/StockDividendPolicy.asp?STOCK_ID=0050" "https://goodinfo.tw/StockInfo/StockDividendSchedule.asp?STOCK_ID=0050"
pause