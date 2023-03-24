/*
** Project          : Boids
** File description : Boid Class Description
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#ifndef BOIDS_ABOIDS_HPP
#define BOIDS_ABOIDS_HPP

#include <vector>
#include "IBoid.hpp"

namespace boids {

    class ABoid : public IBoid {

        public :
            ABoid(int speed, int range, double angle) : IBoid::IBoid(), _speed(speed), _detection_range(range), _angle(angle) {};
            ~ABoid() {};

            Position getPosition() override { return this->_position; };
            int getSpeed() override { return this->_speed; };
            int getRange() override { return this->_detection_range; };
            double getAngle() override { return this->_angle; };

            void setPosition(Position pos) override { this->_position = pos; };
            void setSpeed(int speed) override { this->_speed = speed; };
            void setAngle(double angle) override { this->_angle = angle; };

        private :
            Position _position;
            int _speed;
            int _detection_range;
            double _angle;
    };
}

#endif //BOIDS_ABOIDS_HPP