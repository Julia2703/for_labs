#include <QApplication>
#include <QPushButton>
 //there should be changes from the first branch
 // there are mustbe some change too
int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);
button.show( );
 
return app.exec( );
return 0;
}


