#ifndef ASTAR_STRATEGY_H_
#define ASTAR_STRATEGY_H_

#include "PathStrategy.h"
#include "Graph.h"

/**
 * @class AstarStrategy
 * @brief this class inherits from the PathStrategy class and is responsible for
 * generating the astar path that the entity will take.
 */
class AstarStrategy : public PathStrategy {
 public:
  /**
   * @brief Construct a new Astar Strategy object
   *
   * @param position Current position
   * @param destination End destination
   * @param graph Graph/Nodes of the map
   */
  AstarStrategy(Vector3 position, Vector3 destination,
                const routing::Graph* graph);
};
#endif  // ASTAR_STRATEGY_H_
