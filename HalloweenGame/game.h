#ifndef GAME_H
#define GAME_H

#include <QGraphicsScene.h>
#include "Player.h"
#include <QGraphicsView>
#include <QTimer>
#include "Score.h"
#include "Health.h"
#include <QMediaPlayer>

class Game : public QGraphicsView {
public:
    Game(QWidget * parent = 0);
    ~Game();

    QGraphicsScene *scene;
    Player *player;
    Score *score;
    Health *health;

};
#endif // GAME_H
