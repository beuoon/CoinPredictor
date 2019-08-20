#pragma once

#include <Eigen/Dense>
#include <fstream>
#include <cmath>

#include "Util.h"

using namespace Eigen;
using namespace std;

class OutputLayer {
public:
	OutputLayer(int _hiddenLayerSize, int _outputLayerSize);
	OutputLayer(int _hiddenLayerSize, int _outputLayerSize, istream &is);
	
	VectorXd forward(VectorXd _h);
	VectorXd backward(VectorXd _delta);
	
private:
	const double ETA = 0.005;
	
	int hiddenLayerSize, outputLayerSize;
	
	VectorXd h;
	
	MatrixXd weight;
};
