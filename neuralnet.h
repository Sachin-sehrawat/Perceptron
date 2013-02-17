#ifndef NEURALNET_H
#define NEURALNET_H

#include <perceptron.h>


class NeuralNet
{
private:

    /**
    * @brief Inputs Vector
    */
    vector<double> xi;

    /**
    * @brief Out vector
    */
    vector<double> O;


    /**
    * @brief In Layer
    */
    vector<Perceptron> inLayer;


    /**
    * @brief Hidden Layer
    */
    vector<Perceptron> hiddenLayer;

    /**
    * @brief Out Layer
    */
    vector<Perceptron> outLayer;



public:
    NeuralNet();
    NeuralNet(int in, int hidden, int out);



    /**
    * @brief Init num of neurones in each layer
    * @param int in number of neurones on the input layer
    * @param int hidden number of neurones on the hidden layer
    * @param int out number of neurones on the output layer
    */
    void initNeuralNet(int in,int hidden, int out);



    /**
    * @brief Eval the neural network with the given input, the weights
    * are loaded from a previously saved files
    * @param vector<double> xi inputs vector
    * @param string inWeights weights in the input layer, *.csv  file
    * @param string hiddenWeights weights in the hidden layer, *.csv  file
    * @param string outWeights weights in the output layer, *.csv  file
    */
    void SolveNeuralNet(vector<double> xi, string inWeights, string hiddenWeights, string outWeights);

    /**
    * @brief Test the neural network with the given examples, the weights
    * are loaded from a previously saved files
    * @param string examples examples *.csv  file
    * @param string inWeights weights in the input layer, *.csv  file
    * @param string hiddenWeights weights in the hidden layer, *.csv  file
    * @param string outWeights weights in the output layer, *.csv  file
    * @param string outFile write the results in a file, default outTest.csv
    */
    void testNeuralNet(string examples,string inWeights, string hiddenWeights, string outWeights,string outFile="outTest.csv");


    /**
    * @brief Display general info of all the network
    */
    void showNetwork();


    /**
    * @brief save the weights of each layer
    * @param string in the input layer weights file default inputWeights.csv
    * @param string hidd the hidden layer weights file default hiddenWeights.csv
    * @param string out the output layer weights file default outWeights.csv
    */
    void saveWeights(string in="inputWeights.csv",string hidd="hiddenWeights.csv", string out="outWeights.csv");







    /**
    * @brief Back Propagation Algorithm
    * @param string name Name of the training dataset file
    * @param int it Number of iterations
    */
    void backPropagationTraining(string name, int it);


















};

#endif // NEURALNET_H
