#ifndef ROBOTDESCRIPTION_H
#define ROBOTDESCRIPTION_H

#include <memory>
#include "rod_mechanics/elasticRod.h"
#include "rod_mechanics/elasticJoint.h"
#include "rod_mechanics/baseForce.h"
#include "rod_mechanics/external_forces/uniformConstantForce.h"
#include "initialization/setInput.h"
#include "utils/utils.h"

// different type of loggers
#include "logging/rodNodeLogger.h"
#include "logging/velocityLogger.h"


// TODO: add option for logging multiple values, i.e., vector<shared_ptr<worldLogger>>
// TODO: make logging for multiple limbs more coherent, currently only makes sense for single rods


void get_robot_description(int argc, char** argv,
                           setInput& input_data,
                           vector<shared_ptr<elasticRod>>& limbs,
                           vector<shared_ptr<elasticJoint>>& joints,
                           vector<shared_ptr<baseForce>>& forces,
                           shared_ptr<worldLogger>& logger,
                           double density, double rod_radius,
                           double youngs_modulus, double shear_modulus);

#endif
