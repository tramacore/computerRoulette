@echo off
if exist haip.txt (
    echo Те повезло еще раз >> haip.txt
) else (
    echo Те повезло > haip.txt
)
