#ifndef OSRM_EXTRACTOR_NDOE_WITH_PENALTY
#define OSRM_EXTRACTOR_NDOE_WITH_PENALTY

#include "util/typedefs.hpp"

namespace osrm
{
namespace extractor
{

// Nodes can incur duration/weight penalties. A typical example for this would be a traffic light,
// for which we assume an average delay. During graph compression, we store penalties for compressed
// nodes so they can be applied during phantom node creation.
struct NodeWithPenalty
{
    NodeID node;
    EdgeWeight weight_penalty;
    EdgeDuration duration_penalty;
};

} // namespace extractor
} // namespace osrm

#endif // OSRM_EXTRACTOR_NDOE_WITH_PENALTY
