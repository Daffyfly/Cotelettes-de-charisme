//
// Created by vincent on 15/11/16.
//

#pragma once

class AfficheurDirection : public Afficheur {
public:
    AfficheurDirection(Robot & robot);
    virtual ~AfficheurDirection();
    void update();
};

