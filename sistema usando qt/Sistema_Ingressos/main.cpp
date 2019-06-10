#include "windows.h"
#include "controladoras.h"
#include "stubs.h"
#include <QApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qDebug() << "C++ Style Debug Message";

    MainWindow telaInicial;
    CntrGeral cntrGeral;
    CntrIAAutenticacao cntrIAAutenticacao;
    StubISAutenticacao cntrISAutenticacao;
    StubISUsuario cntrISUsuario;
    CntrIAUsuario cntrIAUsuario;

    cntrGeral.setCntrIAAutenticacao(&cntrIAAutenticacao);
    cntrGeral.setCntrIAUsuario(&cntrIAUsuario);
    cntrIAAutenticacao.setCntrISAutenticacao(&cntrISAutenticacao);
    cntrIAUsuario.setCntrISUsuario(&cntrISUsuario);

    QObject::connect(&telaInicial, SIGNAL (clicou_autenticar()), &cntrGeral, SLOT(executarAutGUI()));
    QObject::connect(&telaInicial, SIGNAL (clicou_conta()), &cntrGeral, SLOT(executarUsuGUI()));
    QObject::connect(&telaInicial, SIGNAL (clicou_eventos()), &cntrGeral, SLOT(executarEveGUI()));

    QObject::connect(&cntrGeral, SIGNAL (altere_statusGUI(bool)), &telaInicial, SLOT(on_status_alterado(bool)));

    telaInicial.show();

    return a.exec();
}
