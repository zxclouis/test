void Giant(void);
int main()
{
	Giant();
	return 0;
}

void Giant(void)
{

#define FREQ_CNT 21 
#define QUARTER_SPEED 200  
	int main()
	{
		const DWORD Freq[FREQ_CNT + 1] = { 0,
			262, 294, 330, 349, 392, 440, 494,
			524, 588, 660, 698, 784, 880, 998,
			1048, 1176, 1320, 1396, 1568, 1760, 1976 };

		const DWORD PalmHeart_Freq[] = {
			16, 16, 18, 17, 15, 16, 16, 18, 17, 15,
			16, 18, 17, 16, 16, 15, 13, 15,
			16, 18, 17, 15, 16, 16, 18, 17, 15,
			16, 16, 18, 17, 15, 15, 15, 20, 19,
			16, 16, 18, 17, 15, 16, 16, 18, 17, 15,
			16, 18, 17, 16, 16, 15, 13, 15,
			16, 16, 18, 17, 15, 16, 16, 18, 17, 15,
			16, 18, 17, 16, 15, 16
		};

		const DWORD PalmHeart_Tempo[] = {
			2, 2, 2, 2, 4, 2, 2, 2, 2, 4,
			2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 4, 2, 2, 2, 2, 4,
			2, 2, 2, 2, 4, 4, 4, 2, 2,
			2, 2, 2, 2, 4, 2, 2, 2, 2, 4,
			2, 2, 2, 2, 2, 2, 2, 2,
			2, 2, 2, 2, 4, 2, 2, 2, 2, 4,
			2, 2, 2, 2, 4, 6

		};

		int i;

		for (i = 0; i != sizeof(PalmHeart_Freq) / sizeof(PalmHeart_Freq[0]); ++i) {
			if (PalmHeart_Tempo[i] == Freq[0]) Sleep(PalmHeart_Tempo[i] * QUARTER_SPEED);
			else Beep(Freq[PalmHeart_Freq[i]], PalmHeart_Tempo[i] * QUARTER_SPEED);
		}
	}