/*!
 * @file node.cpp
 *
 * @brief Node class source file
 */

#include "node.hpp"

std::unique_ptr<Node> createNode(uint16_t id, char letter) {
    return std::unique_ptr<Node>(new Node(id, letter));
}

Node::Node(uint16_t id, char letter) :
        id_(id), letter_(letter), in_edges_(), out_edges_(), aligned_nodes_ids_() {
}

Node::~Node() {
}
