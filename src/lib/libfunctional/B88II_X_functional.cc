/**********************************************************
* B88II_X_functional.cc: definitions for B88II_X_functional for KS-DFT
* Robert Parrish, robparrish@gmail.com
* Autogenerated by MATLAB Script on 25-May-2011
*
***********************************************************/
#include <libmints/properties.h>
#include <libciomr/libciomr.h>
#include "B88II_X_functional.h"
#include <stdlib.h>
#include <cmath>
#include <string>
#include <string>
#include <vector>

using namespace psi;
using namespace boost;
using namespace std;

namespace psi { namespace functional {

B88II_X_Functional::B88II_X_Functional(int npoints, int deriv) : Functional(npoints, deriv)
{
    
    name_ = "B88II_X";
    description_ = "Becke Exchange GGA Correction (B88)";
    citation_ = "A.D. Becke, Phys. Rev. A, 38(6):3098-3100, 1988";
    
    double d = 4.1999999999999997E-03;
    params_.push_back(make_pair("d",d));

    is_gga_ = true;
    is_meta_ = false;

    //Required allocateion
    allocate();
}
B88II_X_Functional::~B88II_X_Functional()
{
}
void B88II_X_Functional::computeRKSFunctional(boost::shared_ptr<Properties> prop)
{
    int ntrue = prop->getTrueSize();

    const double* rho_a;
    const double* gamma_aa;
    const double* tau_a;

    rho_a = prop->getDensityA();
    if (is_gga_) {
        gamma_aa = prop->getDensityGradientSquaredAA();
    }
    if (is_meta_) {
        tau_a = prop->getKEDensityA();
    }

    double d = params_[0].second;

    //Functional
    for (int index = 0; index < ntrue; index++) {

        //Functional Value
        RKS_FUNCTIONAL        

    }
    //First Partials
    for (int index = 0; index < ntrue && deriv_ >= 1; index++) {
        
        //V_rho_a
        RKS_V1_RHO_A
        
        if (is_gga_) {
            
            RKS_V1_GAMMA_AA
        
        }
        if (is_meta_) {
        
            //V_tau_a
            RKS_V1_TAU_A
        
        }
    }
    //Second Partials
    for (int index = 0; index < ntrue && deriv_ >= 2; index++) {
        
        //V_rho_a_rho_a
        RKS_V2_RHO_A_RHO_A
        
        if (is_gga_) {
        
            //V_rho_a_gamma_aa
            RKS_V2_RHO_A_GAMMA_AA
        
            //V_gamma_aa_gamma_aa
            RKS_V2_GAMMA_AA_GAMMA_AA
        
        }
        if (is_meta_) {
        
            //V_rho_a_tau_a
            RKS_V2_RHO_A_TAU_A
        
            //V_tau_a_tau_a
            RKS_V2_TAU_A_TAU_A
       
            if (is_gga_) {
        
                //V_gamma_aa_tau_a
                RKS_V2_GAMMA_AA_TAU_A
       
            }
        }
    }
}
void B88II_X_Functional::computeUKSFunctional(boost::shared_ptr<Properties> prop)
{
    int ntrue = prop->getTrueSize();

    const double* rho_a;
    const double* rho_b;
    const double* gamma_aa;
    const double* gamma_ab;
    const double* gamma_bb;
    const double* tau_a;
    const double* tau_b;

    rho_a = prop->getDensityA();
    rho_b = prop->getDensityB();
    if (is_gga_) {
        gamma_aa = prop->getDensityGradientSquaredAA();
        gamma_ab = prop->getDensityGradientSquaredAB();
        gamma_bb = prop->getDensityGradientSquaredBB();
    }
    if (is_meta_) {
        tau_a = prop->getKEDensityA();
        tau_b = prop->getKEDensityB();
    }

    double d = params_[0].second;
    
    //Functional
    for (int index = 0; index < ntrue; index++) {

        //Functional Value
        UKS_FUNCTIONAL
   
    }
    //First Partials
    for (int index = 0; index < ntrue && deriv_ >= 1; index++) {

        //V_rho_a
        UKS_V1_RHO_A

        //V_rho_b
        UKS_V1_RHO_B

        if (is_gga_) {

            //V_gamma_aa
            UKS_V1_GAMMA_AA

            //V_gamma_ab
            UKS_V1_GAMMA_AB

            //V_gamma_bb
            UKS_V1_GAMMA_BB
        }
        if (is_meta_) {

            //V_tau_a
            UKS_V1_TAU_A

            //V_tau_a
            UKS_V1_TAU_B
        }
    }
    //Second Partials
    for (int index = 0; index < ntrue && deriv_ >= 2; index++) {

        //V_rho_a_rho_a
        UKS_V2_RHO_A_RHO_A

        //V_rho_a_rho_b
        UKS_V2_RHO_A_RHO_B

        //V_rho_b_rho_b
        UKS_V2_RHO_B_RHO_B

        if (is_gga_) {

            //V_rho_a_gamma_aa
            UKS_V2_RHO_A_GAMMA_AA            

            //V_rho_a_gamma_ab
            UKS_V2_RHO_A_GAMMA_AB

            //V_rho_a_gamma_bb
            UKS_V2_RHO_A_GAMMA_BB

            //V_rho_b_gamma_aa
            UKS_V2_RHO_B_GAMMA_AA            

            //V_rho_b_gamma_ab
            UKS_V2_RHO_B_GAMMA_AB

            //V_rho_b_gamma_bb
            UKS_V2_RHO_B_GAMMA_BB

            //V_gamma_aa_gamma_aa
            UKS_V2_GAMMA_AA_GAMMA_AA

            //V_gamma_aa_gamma_ab
            UKS_V2_GAMMA_AA_GAMMA_AB

            //V_gamma_aa_gamma_bb
            UKS_V2_GAMMA_AA_GAMMA_BB            

            //V_gamma_ab_gamma_ab
            UKS_V2_GAMMA_AB_GAMMA_AB

            //V_gamma_ab_gamma_bb
            UKS_V2_GAMMA_AB_GAMMA_BB

            //V_gamma_bb_gamma_bb
            UKS_V2_GAMMA_BB_GAMMA_BB

        }                       
        if (is_meta_) {

            //V_rho_a_tau_a
            UKS_V2_RHO_A_TAU_A

            //V_rho_a_tau_b
            UKS_V2_RHO_A_TAU_B

            //V_rho_b_tau_a
            UKS_V2_RHO_B_TAU_A

            //V_rho_b_tau_b
            UKS_V2_RHO_B_TAU_B

            //V_tau_a_tau_a
            UKS_V2_TAU_A_TAU_A

            //V_tau_a_tau_b
            UKS_V2_TAU_A_TAU_B

            //V_tau_b_tau_b
            UKS_V2_TAU_B_TAU_B

            if (is_gga_) {
            	
                //V_gamma_aa_tau_a
                UKS_V2_GAMMA_AA_TAU_A
            	
                //V_gamma_aa_tau_b
                UKS_V2_GAMMA_AA_TAU_B
            	
                //V_gamma_ab_tau_a
                UKS_V2_GAMMA_AB_TAU_A
            	
                //V_gamma_ab_tau_b
                UKS_V2_GAMMA_AB_TAU_B
            	
                //V_gamma_bb_tau_a
                UKS_V2_GAMMA_BB_TAU_A
            	
                //V_gamma_bb_tau_b
                UKS_V2_GAMMA_BB_TAU_B
          
            }  
        }
    }
}

}}
