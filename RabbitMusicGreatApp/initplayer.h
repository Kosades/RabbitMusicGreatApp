

class bassiniter
{
private:
	int deviceNumber,
		soundFreq,
		initFlags;
	HWND windowNumber;
	void bassupdate();
public:
	bassiniter(int device, int freq, int flag, HWND window);
	~bassiniter();
	void runbass();
	void stopbass();
	void checkbassversion();
};