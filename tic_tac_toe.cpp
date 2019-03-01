#include "tic_tac_toe.h"
#include "ui_mainwindow.h"
#include "QAbstractButton"
#include <QPushButton>
#include <QMessageBox>
#include <QIcon>
#include <QLabel>
#include <QWidget>
#include <QString>

using namespace std;

QString Title;
char gamer = 'O';
int matrix[9] = {0,0,0,0,0,0,0,0,0};

tic_tac_toe::tic_tac_toe(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::tic_tac_toe)
{
    ui->setupUi(this);
}

tic_tac_toe::~tic_tac_toe()
{
    delete ui;
}

void tic_tac_toe::toggle(){

    if(gamer == 'X'){
        gamer = 'O';

    }
    else{
        gamer = 'X';
    }
}

void tic_tac_toe::slotcheck(int i){
  if(matrix[i]!=0){
    if(gamer == 'X'){
        ui->p1->setText("X");
    }
    if(gamer == 'O'){
        ui->p1->setText("O");
    }
 }
}

void tic_tac_toe::on_p1_clicked()
{
    //slotcheck()
if(gamer == 'X'){
    ui->p1->setText("X");
    matrix[0]=1;
}
if(gamer == 'O'){
    ui->p1->setText("O");
matrix[0]=2;
}
checkwin();
toggle();
}

void tic_tac_toe::on_p2_clicked()
{
if(gamer == 'X'){
    ui->p2->setText("X");
    matrix[1]=1;
}
if(gamer == 'O'){
    ui->p2->setText("O");
    matrix[1]=2;
}
//slotcheck();
checkwin();
toggle();
}

void tic_tac_toe::on_p3_clicked()
{
if(gamer == 'X'){
    ui->p3->setText("X");
   matrix[2]=1;
}
if(gamer == 'O'){
    ui->p3->setText("O");
    matrix[2]=2;
}
//slotcheck();
checkwin();
toggle();
}

void tic_tac_toe::on_p4_clicked()
{
if(gamer == 'X'){
    ui->p4->setText("X");
   matrix[3]=1;
}
if(gamer == 'O'){
    ui->p4->setText("O");
    matrix[3]=2;
}
//slotcheck();
checkwin();
toggle();
}
void tic_tac_toe::on_p5_clicked()
{
if(gamer == 'X'){
    ui->p5->setText("X");
   matrix[4]=1;
}
if(gamer == 'O'){
    ui->p5->setText("O");
    matrix[4]=2;
}
//slotcheck();
checkwin();
toggle();
}

void tic_tac_toe::on_p6_clicked()
{
if(gamer == 'X'){
    ui->p6->setText("X");
   matrix[5]=1;
}
if(gamer == 'O'){
    ui->p6->setText("O");
    matrix[5]=2;
}
//slotcheck();
checkwin();
toggle();
}

void tic_tac_toe::on_p7_clicked()
{
if(gamer == 'X'){
    ui->p7->setText("X");
   matrix[6]=1;
}
if(gamer == 'O'){
    ui->p7->setText("O");
    matrix[6]=2;
}
//slotcheck();
checkwin();
toggle();
}

void tic_tac_toe::on_p8_clicked()
{
if(gamer == 'X'){
    ui->p8->setText("X");
   matrix[7]=1;
}
if(gamer == 'O'){
    ui->p8->setText("O");
    matrix[7]=2;
}
//slotcheck();
checkwin();
toggle();
}

void tic_tac_toe::on_p9_clicked()
{
if(gamer == 'X'){
    ui->p9->setText("X");
   matrix[8]=1;
}
if(gamer == 'O'){
    ui->p9->setText("O");
    matrix[8]=2;
}
//slotcheck();
checkwin();
toggle();
}
int tic_tac_toe::checkwin()			//fn to check if anyone wins or is draw after every turn.
{
    //for the 1st player.

    if (matrix[0] == 1 && matrix[1] == 1 && matrix[2] == 1){

    ui->l1->setText("X Wins!!");
    return 2;
    }

    if (matrix[3] == 1 && matrix[4] == 1 && matrix[5] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }
    if (matrix[6] == 1 && matrix[7] == 1 && matrix[8] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }
    if (matrix[0] == 1 && matrix[4] == 1 && matrix[8] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }
    if (matrix[2] == 1 && matrix[4] == 1 && matrix[6] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }
    if (matrix[0] == 1 && matrix[3] == 1 && matrix[6] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }
    if (matrix[1] == 1 && matrix[4] == 1 && matrix[7] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }
    if (matrix[2] == 1 && matrix[5] == 1 && matrix[8] == 1){

    ui->l1->setText("X Wins!!");
    return 1;
    }

    //for 2nd player.

    if (matrix[0] == 2 && matrix[1] == 2 && matrix[2] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }

    if (matrix[3] == 2 && matrix[4] == 2 && matrix[5] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
    if (matrix[6] == 2 && matrix[7] == 2 && matrix[8] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
    if (matrix[0] == 2 && matrix[4] == 2 && matrix[8] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
    if (matrix[2] == 2 && matrix[4] == 2 && matrix[6] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
    if (matrix[0] == 2 && matrix[3] == 2 && matrix[6] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
    if (matrix[1] == 2 && matrix[4] == 2 && matrix[7] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
    if (matrix[2] == 2 && matrix[5] == 2 && matrix[8] == 2){

    ui->l1->setText("O Wins!!");
    return 2;
    }
}

void tic_tac_toe::on_clear_clicked(){

    ui->l1->setText("");
    ui->p1->setText("");
    ui->p2->setText("");
    ui->p3->setText("");
    ui->p4->setText("");
    ui->p5->setText("");
    ui->p6->setText("");
    ui->p7->setText("");
    ui->p8->setText("");
    ui->p9->setText("");
    for(int i=0;i<9;i++){
        matrix[i] = 0;
    }
}

