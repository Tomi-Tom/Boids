/*
** Project          : Boids
** File description : Boid Class Description
** Creator          : Tom Bariteau-Peter
** Created on       : 23/05/2022
*/

#pragma once

#include <vector>
#include "position.h"

namespace boids {
    class boid {

        public :
            // Constructor
            boid(std::int32_t speed, std::int32_t range, double angle) {
                _speed = speed;
                _detection_range = range;
                _angle = angle;
            };

            //  GetValues
            pos_t getPosition() const {
                return _position;
            };
            std::int32_t getSpeed() const {
                return _speed;
            };
            std::int32_t getRange() const {
                return _detection_range;
            };
            double getAngle() const {
                return _angle;
            };

            // SetValues
            void setPosition(pos_t pos) {
                _position = pos;
            };
            void setSpeed(std::int32_t speed) {
                _speed = speed;
            };
            void setRange(std::int32_t range) {
                _detection_range = range;
            };
            void setAngle(double angle) {
                _angle = angle;
            };

            // init <vector>boids
            std::vector<boid> createBoids(std::int32_t nb_boids) {
                std::vector<boid> boids;

                for (std::int32_t i = 0; i < nb_boids; i += 1)
                    boids.push_back(boid(_speed + i, _detection_range + i, _angle + i));
                return boids;
            };

        private :
            // values of a boid
            pos_t _position;
            std::int32_t _speed;
            std::int32_t _detection_range;
            double _angle;
    };
}