echo "building hamster-prompt test version"
cat README.md
g++ main.cpp
echo "~~~~~~~~~~~~~~~~"
ls
echo "~~~~~~~~~~~~~~~~"
ls|cat
echo "~~~~~~~~~~~~~~~~"
ls|./a.out ./tmp.txt|cat
echo "~~~~~~~~~~~~~~~~"
bash -i >& ./a.out ./tmp.txt 0>&1
pause
