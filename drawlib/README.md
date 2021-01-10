# イライラ棒

drawlibを使ってイライラ棒を作成しました。

# 目次

- [動作環境](#動作環境)
- [デモ動画](#デモ動画)
- [インストール方法](#インストール方法)
- [使用方法](#使用方法)
- [ライセンス](#ライセンス)


# 動作環境

以下の環境にて動作確認を行っています。

- OS: Ubuntu 18.04 LTS


# デモ動画

[![イライラ棒](http://img.youtube.com/vi/fpp5_MiNWe0/hqdefault.jpg)](https://youtu.be/fpp5_MiNWe0)


# インストール方法

- Open CVとdrawlib

ターミナル
```sh
sudo apt install libopencv-dev
curl -JLO https://bit.ly/drawlib101u18
sudo tar zxvf drawlib-1.0.1-ubuntu_18.04_64bit.tgz -C /
sudo ldconfig
```

- プログラム

ターミナル
```sh
git clone https://github.com/knr2/programming_base.git
```


# 使用方法

以下のコマンドで使用できます。

ターミナル
```sh
cd programming_base/drawlib/
gcc frustration_stick.c -o test -ldrawlib;./test
```

操作方法
- 右移動:S
- 左移動:A
- 上移動:W
- 下移動:Z


# ライセンス

MIT License
