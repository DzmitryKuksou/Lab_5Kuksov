const int M = 100;
struct Tovar
{
public:
	Tovar(){};
	void SetTovar(char*, char*, char*, char*, char* ,char*);
	~Tovar();
	void DisplayTovar();
	Tovar InitTovar();
	void SetName(char*);
	void SetBrand(char*);
	void SetData(char*);
	void SetShelflife(char*);
	void SetStorageTime(char*);
	void SetCost(char*);
	char* GetName();
	char* GetBrand();
	char* GetData();
	char* GetShelife();
	char* GetStorageTime();
	bool operator ==(Tovar &c);
	char* GetCost();
private:
	
	char Name[M];
	char Cost[M];
	char ShelfLife[M];
	char Brand[M];
	char StorageTime[M];
	char Data[M];
};