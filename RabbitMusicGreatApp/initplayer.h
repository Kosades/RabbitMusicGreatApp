

class bassiniter
{
private:
	int deviceNumber,
		soundFreq,
		initFlags;
	HWND windowNumber;
public:
	bassiniter(int device, int freq, int flag, HWND window);
	~bassiniter();
	void runbass();
	void stopbass();

};