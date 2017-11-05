#pragma once

#include <pybind11/pybind11.h>
#include <array>

namespace pyaget 
{

    class LinearRegression
    {
    public:
        LinearRegression(std::array<float> xvalues, std::array<float> yvalues);

        ~LinearRegression();

        void train();

    private:

        std::array<float> m_xvalues;
        std::array<float> m_yvalues;
        
    };

}