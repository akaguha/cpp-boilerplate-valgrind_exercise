/**
 *  Copyright [2018] Akash Guha
 *  @file    AnalogSensor.hpp
 *  @author  Akash Guha(akaguha@terpmail.umd.edu)
 *  @date    10/02/2018
 *  @version 1.0
 *
 *  @brief ENPM808X, Valgrind Exercise
 *
 *  @section DESCRIPTION
 *
 *  This file contain AnalogSensor class skeleton
 *
 */
#pragma once

#include <iostream>

class AnalogSensor {
 public:
  AnalogSensor(unsigned int samples);
  ~AnalogSensor();
  int Read();
 private:
  unsigned int mSamples;
};
