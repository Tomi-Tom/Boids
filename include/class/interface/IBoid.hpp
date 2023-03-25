//
// Created by Tomi-Tom on 3/24/23.
//

#ifndef BOIDS_IBOID_HPP
    #define BOIDS_IBOID_HPP

namespace boids {

    struct Position {
        double x;
        double y;
    };

    class IBoid {

        public :
            IBoid() = default;
            ~IBoid() = default;

            virtual Position getPosition() = 0;
            virtual double getSpeed() = 0;
            virtual int getRange() = 0;
            virtual double getAngle() = 0;

            virtual void setPosition(Position pos) = 0;
            virtual void setSpeed(double speed) = 0;
            virtual void setAngle(double angle) = 0;

            virtual void simulate() = 0;

    };
}

#endif //BOIDS_IBOID_HPP
