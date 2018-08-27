#ifndef GRAPE_CONNECTOR_H_
#define GRAPE_CONNECTOR_H_

#include <getopt.h>
#include <mpi.h>
#include <omp.h>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "glog/logging.h"

#include "comms.h"
#include "config.h"
#include "dist_graph.h"
#include "generate.h"
#include "io_pp.h"
#include "pulp_util.h"
#include "util.h"
#include "xtrapulp.h"

namespace pulp {

extern int procid, nprocs;
extern int seed;
extern bool verbose, debug, verify;
void grape_connector(MPI_Comm comm_, int workernum, int workerID, int partnum,
                     std::vector<VertexID> input_edges, int32_t *&final_parts,
                     uint64_t &total_vnum, uint64_t file_size, double vert_balance,
                     double edge_balance);

void FinalizeXtraPulp(int32_t *&final_parts);
}
#endif  // GRAPE_CONNECTOR_H_
