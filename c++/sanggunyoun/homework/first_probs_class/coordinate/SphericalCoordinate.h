//
// Created by eddi on 23. 12. 1.
//

#ifndef FIRST_PROBS_SPHERICALCOORDINATE_H
#define FIRST_PROBS_SPHERICALCOORDINATE_H

#include <tuple>

class SphericalCoordinate {
private:
    double radius; // 반경 반지름
    double azimuth; // 고각 고도
    double elevation; // 방위각

public:
    // toCartesian => 반지름, 고각, 방위각을 계
    SphericalCoordinate(double radius, double azimuth, double elevation);
    std::tuple<double, double, double> toCartesian() const;
    void print() const;
};

#endif //FIRST_PROBS_SPHERICALCOORDINATE_H
