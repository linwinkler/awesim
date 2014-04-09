/* 
 * File:   util.h
 * Author: wtang
 *
 * Created on April 2, 2014, 10:17 AM
 */

#ifndef UTIL_H
#define	UTIL_H

#include "ross.h"
#include "glib.h"
#include "awe_types.h"

#define MAX_LEN_TRACE_LINE 2048

typedef int bool;
#define True 1
#define False 0

extern double kickoff_epoch_time;
extern double finish_epoch_time;
extern tw_stime finish_stime;

extern char worktrace_file_name[256];

tw_stime etime_to_stime(double etime);

tw_stime ns_to_s(tw_stime ns);
tw_stime s_to_ns(tw_stime ns);

int testMap();

GHashTable* parse_worktrace(char* workload_path);
void display_hash_table(GHashTable *table, char* name);
void print_workunit(Workunit* work);
#endif	/* UTIL_H */
