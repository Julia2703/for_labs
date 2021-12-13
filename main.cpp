#include <QApplication>
#include <QPushButton>


int main(int argc, char *argv[ ]) 
{
QApplication app(argc, argv);
 
QPushButton button("some change!");

button.resize(200, 60);
button.show( );
 
return app.exec( );
return 0;
}


