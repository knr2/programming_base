# 指定した写真をdrawlibで描画をする

drawlibを使って写真を描画しました。

# 目次

- [動作環境](#動作環境)
- [インストール方法](#インストール方法)
- [使用方法](#使用方法)
- [ライセンス](#ライセンス)


# 動作環境

以下の環境にて動作確認を行っています。

- OS: Ubuntu 18.04 LTS


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
cd programming_base/drawlib/improved_version/
g++ reading_rgb_from_picture.cpp -o test `pkg-config --cflags opencv` `pkg-config --libs opencv`;./test
gcc photo.c -o test -ldrawlib;./test
```

- 画像を変更する場合はreading_rgb_from_picture.cppのℓ26を変更してください。(同一ファイル内に写真を置く必要あり)

- ℓ12,13のサイズも変更してください。

# ライセンス

MIT License

# リンク

画像はいらすとや様よりお借りしました。
[リンク](https://www.irasutoya.com/2020/01/blog-post_554.html)
