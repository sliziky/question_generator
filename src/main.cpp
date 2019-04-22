#include <QApplication>
#include "questiongenerator.h"
int main(int argc, char*argv[]){
    QApplication app(argc,argv);
    QuestionGenerator gen;
    gen.show ();
    return app.exec ();
}
