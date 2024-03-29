void write_power_spectrum_skyscuts(double kmin,double kmax,double kx[], double ky[], double kz[], double P0r[], double P0i[],double P1r[], double P1i[], double P2r[], double P2i[], double P3r[], double P3i[], double P4r[], double P4i[],double P0rB[], double P0iB[],double P1rB[], double P1iB[], double P2rB[], double P2iB[], double P3rB[], double P3iB[], double P4rB[], double P4iB[], double Deltak, int ngrid, long int NGRID, double L1, double L2, double I22,double I22B, char *name_ps_out,char *name_psAB_out,char *name_psBB_out, double P_shot_noise,double P_shot_noiseB, char *binning_type, char *do_anisotropy, char *do_odd_multipoles, char *Quadrupole_type, char *Octopole_type, char *Hexadecapole_type,char *type,int N_interlacing, char *type_of_code,char *write_kvectors, char *name_ps_kvectors);

void write_power_spectrum_periodic(double kmin,double kmax,double deltak_re[],double deltak_im[],double deltak_reB[],double deltak_imB[],double bin_ps, int ngrid,double L1,double L2,int Ninterlacing,char *name_ps_out, char *name_psAB_out, char *name_psBB_out,double P_shot_noise,double P_shot_noiseB,char *binning_type,char *do_odd_multipoles,char *do_anisotropy,char *type_of_code,double I22,double I22B,char *write_kvectors, char *name_ps_kvectors);


void write_power_spectrum_periodic2D(double kmin,double kmax,double deltak_reA[],double deltak_imA[],double deltak_reB[],double deltak_imB[],double bin_ps,int Nmu, int ngrid,double L1,double L2,int Ninterlacing,char *name_psAA_out,char *name_psAB_out,char *name_psBB_out,double P_shot_noiseA,double P_shot_noiseB,char *binning_type,char *file_for_mu,char *type_of_code,double I22,double I22B,char *write_kvectors, char *name_ps_kvectors);
