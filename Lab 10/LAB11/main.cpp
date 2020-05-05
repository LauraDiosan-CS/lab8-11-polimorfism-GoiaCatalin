#include <iostream>
#include "TestRepoFile.h"
#include <string>
#include "RepoFile.h"
#include "RepoFileTXT.h"
#include "RepoFileCSV.h"
#include "TestBilet.h"
#include "TestFilm.h"
#include "TestArtist.h"

using namespace std;

int main()
{
    TestBilet testBilet;
    testBilet.testAll();
    TestFilm testFilm;
    testFilm.testAll();
    TestArtist testArtist;
    testArtist.testAll();
    TestRepoFile testRepoFile;
    testRepoFile.testAll();
    cout << "Teste finalizalte cu succces";
}