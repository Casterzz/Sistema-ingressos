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
    StubISEventos cntrISEventos;
    StubISVendas cntrISVendas;
    CntrIAUsuario cntrIAUsuario;
    CntrIAEventos cntrIAEventos;
    CntrIAVendas cntrIAvendas;


    cntrGeral.setCntrIAAutenticacao(&cntrIAAutenticacao);
    cntrGeral.setCntrIAUsuario(&cntrIAUsuario);
    cntrGeral.setCntrIAEventos(&cntrIAEventos);
    cntrIAAutenticacao.setCntrISAutenticacao(&cntrISAutenticacao);
    cntrIAUsuario.setCntrISUsuario(&cntrISUsuario);
    cntrIAEventos.setCntrISEventos(&cntrISEventos);
    cntrIAEventos.setCntrIAVendas(&cntrIAvendas);
    cntrIAvendas.setCntrISVendas(&cntrISVendas);


    QObject::connect(&telaInicial, SIGNAL (clicou_autenticar()), &cntrGeral, SLOT(executarAutGUI()));
    QObject::connect(&telaInicial, SIGNAL (clicou_conta()), &cntrGeral, SLOT(executarUsuGUI()));
    QObject::connect(&telaInicial, SIGNAL (clicou_eventos()), &cntrGeral, SLOT(executarEveGUI()));
    QObject::connect(&telaInicial, SIGNAL (clicou_deslogar()), &cntrGeral, SLOT(executarDeslogarGUI()));

    QObject::connect(&cntrGeral, SIGNAL (altere_statusGUI(bool)), &telaInicial, SLOT(on_status_alterado(bool)));

    telaInicial.show();

    return a.exec();
}
