#ifndef _NEURON_H_
#define _NEURON_H_

#include<vector>

namespace neuralNet
{
    class Neuron
    {
    public:

        Neuron(std::vector<double>);

        virtual ~Neuron();

        void activationFunction();

        void weightedSum();
        
        void generateWeights();



    private:

        double activatedValue; 

        double weightedSum;

        std::vector<double> input;

        std::vector<double> weights;

        double derivative;

        double bias;
    };
}

#endif