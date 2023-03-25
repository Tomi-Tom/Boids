/*
** Project          : Boids
** File description : Boid Class Description
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#ifndef BOIDS_ABOIDS_HPP
#define BOIDS_ABOIDS_HPP

#include <string>
#include "IBoid.hpp"

namespace boids {

    class ABoid : public IBoid {

        public :
            ABoid(std::string name, double speed, int range) :
                IBoid::IBoid(), _name(name), _speed(speed), _detection_range(range) {
                this->_angle = rand() % 360;
                Position pos;

                pos.x = rand() % 1920;
                pos.y = rand() % 1020;
                this->_position = pos;
            };
            ~ABoid() {};

            Position getPosition() override { return this->_position; };
            double getSpeed() override { return this->_speed; };
            int getRange() override { return this->_detection_range; };
            double getAngle() override { return this->_angle; };

            void setPosition(Position pos) override { this->_position = pos; };
            void setSpeed(double speed) override { this->_speed = speed; };
            void setAngle(double angle) override { this->_angle = angle; };

            void simulate() override;

        private :
            std::string _name;
            Position _position;
            double _speed;
            int _detection_range;
            double _angle;
    };
}

#endif //BOIDS_ABOIDS_HPP