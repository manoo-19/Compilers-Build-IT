#include "builder/dyn_var.h"
#include "builder/static_var.h"

#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
using namespace std;

struct Sample
{
    builder::static_var<int> type_check = 0;
    builder::static_var<char *> distribution;
    builder::static_var<char *> function_expr;

    builder::dyn_var<unordered_map<float, int>> data_discrete;
    builder::dyn_var<map<pair<float, float>, int>> data_continous;

    float mean(builder::dyn_var<vector<float>> data_points = {})
    {
        if (type_check == 0)
        {
            return mean_discrete(data_discrete, data_points);
        }
        else
        {
            return mean_continous(data_continous);
        }
    }

    float mean_discrete(builder::dyn_var<unordered_map<float, int>> &data, builder::dyn_var<vector<float>> data_points = {})
    {
        if (strcmp(distribution, "null") == 0)
        {
            return 0;
        }
        else
        {
            if (strcmp(distribution, "bernouli") == 0)
            {
            }
            else if (strcmp(distribution, "binomial") == 0)
            {
            }
            else if (strcmp(distribution, "poisson") == 0)
            {
            }
        }
    }

    float mean_continous(builder::dyn_var<map<pair<float, float>, int>> &data)
    {
        if (strcmp(distribution, "null") == 0)
        {
            return 0;
        }
        else
        {
            if (strcmp(distribution, "uniform") == 0)
            {
            }
            else if (strcmp(distribution, "normal") == 0)
            {
            }
            else if (strcmp(distribution, "exponential") == 0)
            {
            }
        }
    }

    float median(builder::dyn_var<vector<float>> data_points = {})
    {
        if (type_check == 0)
        {
            return median_discrete(data_discrete, data_points);
        }
        else
        {
            return median_continous(data_continous);
        }
    }

    float median_discrete(builder::dyn_var<unordered_map<float, int>> &data, builder::dyn_var<vector<float>> data_points = {})
    {
    }

    float median_continous(builder::dyn_var<map<pair<float, float>, int>> &data)
    {
    }

    float mode(builder::dyn_var<vector<float>> data_points = {})
    {
        if (type_check == 0)
        {
            return mode_discrete(data_discrete, data_points);
        }
        else
        {
            return mode_continous(data_continous);
        }
    }

    float mode_discrete(builder::dyn_var<unordered_map<float, int>> &data, builder::dyn_var<vector<float>> data_points = {})
    {
    }

    float mode_continous(builder::dyn_var<map<pair<float, float>, int>> &data)
    {
    }

    float variance(builder::dyn_var<vector<float>> data_points = {})
    {
        if (type_check == 0)
        {
            return variance_discrete(data_discrete, data_points);
        }
        else
        {
            return variance_continous(data_continous);
        }
    }

    float variance_discrete(builder::dyn_var<unordered_map<float, int>> &data, builder::dyn_var<vector<float>> data_points = {})
    {
    }

    float variance_continous(builder::dyn_var<map<pair<float, float>, int>> &data)
    {
    }

    float standard_deviation(builder::dyn_var<vector<float>> data_points = {})
    {
        if (type_check == 0)
        {
            return standard_deviation_discrete(data_discrete, data_points);
        }
        else
        {
            return standard_deviation_continous(data_continous);
        }
    }

    float standard_deviation_discrete(builder::dyn_var<unordered_map<float, int>> &data, builder::dyn_var<vector<float>> data_points = {})
    {
    }

    float standard_deviation_continous(builder::dyn_var<map<pair<float, float>, int>> &data)
    {
    }

    float skewness(builder::dyn_var<vector<float>> data_points = {})
    {
        if (type_check == 0)
        {
            return skewness_discrete(data_discrete, data_points);
        }
        else
        {
            return skewness_continous(data_continous);
        }
    }

    float skewness_discrete(builder::dyn_var<unordered_map<float, int>> &data, builder::dyn_var<vector<float>> data_points = {})
    {
    }

    float skewness_continous(builder::dyn_var<map<pair<float, float>, int>> &data)
    {
    }
};

struct Event
{
    float value;

    void operator=(const Event &rhs)
    {
    }
    void operator+(const Event &rhs)
    {
    }
    void operator~()
    {
    }
    void operator^(const Event &rhs)
    {
    }
    void operator|(const Event &rhs)
    {
    }
};
