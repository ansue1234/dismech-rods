#ifndef ROBOTPARSER_H
#define ROBOTPARSER_H

#include "tinyxml2.h"
#include "../robotDescription.h"
#include "../eigenIncludes.h"

struct limbParams
{
    int limb_idx;
    std::vector<Eigen::Vector3d> node_positions;
    string limb_name;
    double limb_radius;
    double lowest_height;
};


class robotParser {
public:
    // Constructor
    robotParser();
    ~robotParser();

    void parseRobot(const std::string &filename, const shared_ptr<softRobots>& soft_robots,
                    const shared_ptr<forceContainer>& forces, shared_ptr<worldLogger>& logger,
                    simParams& sim_params);

private:
    std::pair<string, limbParams> limbs; // limb name, limb params

    // Constructing and setting sim parameters
    void constructRobot(const shared_ptr<softRobots>& soft_robots);
    void setSimParams(simParams& sim_params);
    void setForces(const shared_ptr<forceContainer>& forces);
    void setLogger(shared_ptr<worldLogger>& logger);

    void

};


#endif
