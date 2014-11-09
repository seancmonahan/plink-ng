#ifndef __PLINK_DOSAGE_H__
#define __PLINK_DOSAGE_H__

#include "plink_glm.h"
#include "plink_misc.h"

#define DOSAGE_LIST 1
#define DOSAGE_SEPHEADER 2
#define DOSAGE_NOHEADER 4
#define DOSAGE_DOSE1 8
#define DOSAGE_ZOUT 0x10
#define DOSAGE_OCCUR 0x20
#define DOSAGE_GLM 0x40
#define DOSAGE_WRITE 0x80
#define DOSAGE_SCORE 0x100

typedef struct {
  char* fname;
  uint32_t modifier;
  uint32_t skip0;
  uint32_t skip1;
  uint32_t skip2;
  uint32_t format;
} Dosage_info;

void dosage_init(Dosage_info* doip);

void dosage_cleanup(Dosage_info* doip);

int32_t plink1_dosage(Dosage_info* doip, char* famname, char* mapname, char* outname, char* outname_end, char* phenoname, char* extractname, char* excludename, char* keepname, char* removename, char* keepfamname, char* removefamname, char* filtername, char* makepheno_str, char* phenoname_str, char* covar_fname, Two_col_params* qual_filter, Two_col_params* update_map, Two_col_params* update_name, char* update_ids_fname, char* update_parents_fname, char* update_sex_fname, char* filtervals_flattened, char* filter_attrib_fname, char* filter_attrib_liststr, char* filter_attrib_sample_fname, char* filter_attrib_sample_liststr, double qual_min_thresh, double qual_max_thresh, double thin_keep_prob, uint32_t thin_keep_ct, uint32_t min_bp_space, uint32_t mfilter_col, uint32_t fam_cols, int32_t missing_pheno, uint32_t mpheno_col, uint32_t pheno_modifier, Chrom_info* chrom_info_ptr, double tail_bottom, double tail_top, uint64_t misc_flags, uint64_t filter_flags, uint32_t sex_missing_pheno, uint32_t update_sex_col, Cluster_info* cluster_ptr, int32_t marker_pos_start, int32_t marker_pos_end, int32_t snp_window_size, char* markername_from, char* markername_to, char* markername_snp, Range_list* snps_range_list_ptr, uint32_t covar_modifier, Range_list* covar_range_list_ptr, uint32_t mwithin_col, uint32_t glm_modifier, double glm_vif_thresh, double output_min_p, Score_info* sc_ip);

#endif
