for /d %%X in (*) do "D:\7-Zip\7z.exe" a "%%X.7z" "%%X\" -m0=LZMA2 -mx=9
pause