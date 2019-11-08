#include "../headerFiles/RepositoryControl.h"
using namespace std;

void RepositoryControl::create(string fileName){
    fstream fs;
    fs.open(fileName,fstream::out);
    fs.flush();
    fs.close();
}

void RepositoryControl::save(QWidget *p,QString fileName, QString buff){
    QFile file(fileName);

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(p, "Error", "file not open");
        return;
    }
    QTextStream out(&file);
    out << buff;
    file.flush();
    file.close();
}

void RepositoryControl::open(string fileName){

}

/*int main(){
    RepositoryControl *rc = new RepositoryControl();
    rc->create("333");
    string s = "ss";
    rc->save("333", &s);
}
*/
