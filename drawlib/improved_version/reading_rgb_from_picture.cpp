#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

// 抽出する画像の輝度値の範囲を指定
#define R_MIN 0
#define R_MAX 255
#define G_MIN 0
#define G_MAX 255
#define B_MIN 0
#define B_MAX 255
#define height_MAX 500
#define width_MAX 500

int main(int argc, char *argv[])
{
    FILE *rgb;
    if ((rgb = fopen("png_rgb.txt", "w")) == NULL)
    {
        fprintf(stderr, "Can not find png.rgb.txt\n");
        exit(1);
    }

    // 同一フィルにある場合(１つの画像のみ)
    
    std::string input_file = "train_arashiyama_torokko_kouyou.png";　// 相対パスを記入
    cv::Mat input_image_rgb = cv::imread(input_file, CV_LOAD_IMAGE_COLOR);
    
    // RGBを保存
    for(int height = 0;height < height_MAX;height++)
    {
        for(int width = 0;width < width_MAX;width++)
        {
            cv::Vec3b bgr = input_image_rgb.at<cv::Vec3b>(cv::Point(height, width));
            fprintf(rgb, "%d\t%d\t%d\t%d\t%d\n", height, width, (int)bgr[2], (int)bgr[1], (int)bgr[0]);
            std::cout << (int)bgr[0] << " " << (int)bgr[1] << " " << (int)bgr[2] << std::endl;
        }
    }

    /*
    // 別ファイルにある場合(複数可能)

    // パスを指定(拡張子は除く)
    const std::string base = "/home/nakamura/Git/programming_base/drawlib/improved_version/train_arashiyama_torokko_kouyou";
    std::vector<std::string> files;

    // 使用されている拡張子を1つ指定
    files.push_back(base + ".bmp"); // Windows bitmaps (bmp, dib)
    files.push_back(base + ".jpg"); // JPEG files (jpg, jpeg, jpe)
    files.push_back(base + ".jp2"); // JPEG 2000 files (jp2)
    files.push_back(base + ".png"); // Portable Network Graphics (png)
    files.push_back(base + ".pbm"); // Portable image format (pbm:raw)
    files.push_back(base + "_ascii" + ".pbm"); // Portable image format (pbm:ascii)
    files.push_back(base + ".pgm"); // Portable image format (pgm:raw)
    files.push_back(base + "_ascii" + ".pgm"); // Portable image format (pgm:ascii)
    files.push_back(base + ".ppm"); // Portable image format (ppm:raw)
    files.push_back(base + "_ascii" + ".ppm"); // Portable image format (ppm:ascii)
    files.push_back(base + ".ras"); // Sun rasters (ras, sr)
    files.push_back(base + ".tiff"); // TIFF files (tiff, tif)

    // 表示するウィンドウ名を指定
    cv::namedWindow("image1", CV_WINDOW_AUTOSIZE|CV_WINDOW_FREERATIO);
    cv::namedWindow("image2", CV_WINDOW_AUTOSIZE|CV_WINDOW_FREERATIO);
    cv::namedWindow("image3", CV_WINDOW_AUTOSIZE|CV_WINDOW_FREERATIO);
    
    std::vector<std::string>::iterator input_filename = files.begin();

    for(;input_filename!=files.end(); ++input_filename)
    {
        std::cout << *input_filename << std::endl;
        // 画像を3チャンネル(BGR)で読み込む
        cv::Mat input_image_rgb = cv::imread(*input_filename, CV_LOAD_IMAGE_COLOR);
        // グレースケール画像として読み込む．
        cv::Mat img2 = cv::imread(*input_filename, 0);
        // 画像をそのまま読み込む．ただし，アルファチャンネルは無視される．
        cv::Mat img3 = cv::imread(*input_filename, -1);

        // RGBを保存
        for(int height = 0;height < height_MAX;height++)
        {
            for(int width = 0;width < width_MAX;width++)
            {
                cv::Vec3b bgr = input_image_rgb.at<cv::Vec3b>(cv::Point(height, width));
                fprintf(rgb, "%d\t%d\t%d\t%d\t%d\n", height, width_MAX - width, (int)bgr[2], (int)bgr[1], (int)bgr[0]);
                std::cout << (int)bgr[0] << " " << (int)bgr[1] << " " << (int)bgr[2] << std::endl;
            }
        }
        
        // 表示するウィンドウ数を指定 
        cv::imshow("image1", input_image_rgb);
        cv::imshow("image2", img2);
        cv::imshow("image3", img3);

        if(cv::waitKey(0)==27) break;
    }
    */

    fclose(rgb);
}
