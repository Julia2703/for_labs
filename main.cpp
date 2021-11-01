#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("Hello, World!");
button.resize(200, 60);
button.show( );
 
return app.exec( );
return 0;
}
//there should be changes from the second branch

