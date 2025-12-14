#include <iostream>
#include <sl.h>
#include <string>

using namespace std;

int main() {
	const char imgPath[] = "dragon/"; // Path gambar, sesuakan sendiri
	const int totalFrames = 9; // Total frame animasi
	int animationFrames[totalFrames];

	// Inisialisasi jendela
	slWindow(800, 600, "Animasi Naga Terbang", false);

	// Memuat semua frame tekstur naga
	for (int i = 0; i < totalFrames; i++)
	{
		// fungsi to_string mengubah integer ke string
		// contoh: "D:/exps/res/sprites/dragon/" + to_string(0) + ".png"
		// menjadi "D:/exps/res/sprites/dragon/0.png"
		string fileName = imgPath + to_string(i) + ".png";
		// Memuat tekstur dan menyimpannya dalam array
		animationFrames[i] = slLoadTexture(fileName.c_str());
	}

	int currentFrame = 0;
	double elapsedTime = 0;
	while (!slShouldClose())
	{
		slSetBackColor(1, 1, 1); // Putih

		// Menggambar frame animasi saat ini di tengah jendela
		slSprite(animationFrames[currentFrame], 400, 300, 192, 176);
		// Memperbarui waktu yang telah berlalu
		elapsedTime += slGetDeltaTime();

		// Jika sudah lebih dari 0.1 detik, ganti ke frame berikutnya
		if (elapsedTime >= 0.1)
		{
			currentFrame++;
			elapsedTime = 0;
		}
		// Jika sudah mencapai frame terakhir, kembali ke frame pertama
		if (currentFrame >= totalFrames)
		{
			currentFrame = 0;
		}

		slRender();
	}

	slClose();
}