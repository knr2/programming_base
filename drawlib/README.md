Ubuntu 18.04 LTS

sudo apt install libopencv-dev
curl -JLO https://bit.ly/drawlib101u18
sudo tar zxvf drawlib-1.0.1-ubuntu_18.04_64bit.tgz -C /
sudo ldconfig

gcc -o test test.c -ldrawlib; ./test
