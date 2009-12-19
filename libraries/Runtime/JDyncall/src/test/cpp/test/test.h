// Le bloc ifdef suivant est la fa�on standard de cr�er des macros qui facilitent l'exportation 
// � partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compil�s avec le symbole TEST_EXPORTS
// d�fini sur la ligne de commande. Ce symbole ne doit pas �tre d�fini dans les projets
// qui utilisent cette DLL. De cette mani�re, les autres projets dont les fichiers sources comprennent ce fichier consid�rent les fonctions 
// TEST_API comme �tant import�es � partir d'une DLL, tandis que cette DLL consid�re les symboles
// d�finis avec cette macro comme �tant export�s.
#ifdef TEST_EXPORTS
#define TEST_API __declspec(dllexport)
#else
#define TEST_API __declspec(dllimport)
#endif

// Cette classe est export�e de test.dll
class TEST_API Ctest {
public:
	Ctest(void);
	virtual int testAdd(int a, int b);
	// TODO�: ajoutez ici vos m�thodes.
};

extern TEST_API int ntest;
TEST_API Ctest* createTest();

TEST_API double _cdecl sinInt(int);
TEST_API double _cdecl testSum(const double *values, size_t n);
TEST_API double _cdecl testSumi(const double *values, int n);
TEST_API long long _cdecl testSumll(const double *values, int n);
TEST_API int _cdecl testSumInt(const double *values, int n);
TEST_API void _cdecl testInPlaceSquare(double *values, size_t n);