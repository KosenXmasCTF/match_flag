# match_flag
![Genre: pwn](https://img.shields.io/badge/genre-pwn-brightgreen?style=for-the-badge)
![Difficulty: Beginner](https://img.shields.io/badge/difficulty-Beginner-blue?style=for-the-badge)
![Author: iwancof](https://img.shields.io/badge/author-iwancof-lightgrey?style=for-the-badge)

彼はフラグを隠し持っているらしい。
僕たちに直接教えてくはくれないが、フラグが正解かどうかは教えてくれるそうだ！
...どうやって聞き出そうか。

## Files
main.c

## Run
```
make
socat tcp-listen:10000,reuseaddr,fork, exec:./match_flag,stderr
```
## writeup
writeup.md を見てください

## Comment
