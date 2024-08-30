#include "stats.h"
#include <cmath>
 
using namespace std;
 
Statistics::Stats Statistics::ComputeStatistics(const std::vector<float>& input) {
    //Implement statistics here
    Statistics::Stats statsanswer;
    statsanswer.average = NAN;
    statsanswer.max = NAN;
    statsanswer.min = NAN;
    float sum = 0;
 
    if(input.size()){
 
        for(auto it : input){
            sum += it;
            statsanswer.max = (statsanswer.max > it) ? statsanswer.max : it ;
            statsanswer.min = (statsanswer.min < it) ? statsanswer.min : it ;
        }
 
        statsanswer.average = sum/input.size();
    }
 
    return statsanswer;
 
}