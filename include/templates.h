#include "builder/dyn_var.h"
#include "builder/static_var.h"
#include "blocks/extract_cuda.h"
#include <iostream>
#include <map>
#include <unordered_map>
#include <variant>
#include <utility> 
using namespace std;


struct Dataset{
    builder::static_var<int> type_of_data = 0;

    float mean_discrete(builder::dyn_var<unordered_map<float,int>> & data){
        
    }

    float mean_continous(builder::dyn_var<map<pair<float,float>,int>> & data){
        
    }

    float get_mean(){

    }

    float mean_pmf(builder::static_var<char*> expression, builder::dyn_var<vector<float>> data){
        
    }

    float mean_pdf(builder::static_var<char*> expression){

    }

    float median_discrete(builder::dyn_var<unordered_map<float,int>> & data){

    }

    float median_continous(builder::dyn_var<map<pair<float,float>,int>> & data){
        
    }

    float median_pmf(builder::static_var<char*> expression, builder::dyn_var<vector<float>> data){

    }

    float median_pdf(builder::static_var<char*> expression){

    }

    float mode_discrete(builder::dyn_var<unordered_map<float,int>> & data){

    }

    float mode_continous(builder::dyn_var<map<pair<float,float>,int>> & data){
        
    }

    float mode_pmf(builder::static_var<char*> expression, builder::dyn_var<vector<float>> data){

    }

    float mode_pdf(builder::static_var<char*> expression){

    }

    float variance_discrete(builder::dyn_var<unordered_map<float,int>> & data){

    }

    float variance_continous(builder::dyn_var<map<pair<float,float>,int>> & data){
        
    }

    float variance_pmf(builder::static_var<char*> expression, builder::dyn_var<vector<float>> data){

    }

    float variance_pdf(builder::static_var<char*> expression){

    }
    
    float prop_discrete(builder::dyn_var<unordered_map<float,int>> & data){

    }

    float prop_continous(builder::dyn_var<map<pair<float,float>,int>> & data){
        
    }

    float prop_pmf(builder::static_var<char*> expression, builder::dyn_var<vector<float>> data){

    }

    float prop_pdf(builder::static_var<char*> expression){

    }

    pair<float,float> conf_discrete(builder::dyn_var<unordered_map<float,int>> & data){

    }

    pair<float,float> conf_continous(builder::dyn_var<map<pair<float,float>,int>> & data){
        
    }

    pair<float,float> conf_pmf(builder::static_var<char*> expression, builder::dyn_var<vector<float>> data){

    }

    pair<float,float> conf_pdf(builder::static_var<char*> expression){

    }
};

struct Event_expr {

};

struct Event{
	pair<int,int> range;
	
    void operator=(const Event_expr &rhs){

    }
    void operator^(const Event_expr &rhs){

    }
    void operator+(const Event_expr &rhs){

    }
    void operator|(const Event_expr &rhs){

    }

};

