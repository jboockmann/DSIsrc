
/**
 *
 * Copyright (C) 2017 University of Bamberg, Software Technologies Research Group
 * <https://www.uni-bamberg.de/>, <http://www.swt-bamberg.de/>
 *
 * This file is part of the Data Structure Investigator (DSI) project, which received financial support by the
 * German Research Foundation (DFG) under grant no. LU 1748/4-1, see
 * <http://www.swt-bamberg.de/dsi/>.
 *
 * DSI is licensed under the GNU GENERAL PUBLIC LICENSE (Version 3), see
 * the LICENSE file at the project's top-level directory for details or consult <http://www.gnu.org/licenses/>.
 *
 * DSI is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or any later version.
 *
 * DSI is a RESEARCH PROTOTYPE and distributed WITHOUT ANY
 * WARRANTY, without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * The following people contributed to the conception and realization of the present DSI distribution (in
 * alphabetic order by surname):
 *
 * - Jan H. Boockmann
 * - Gerald Lüttgen
 * - Thomas Rupprecht
 * - David H. White
 *
 */
 
 
/**
 * @author DSI
 *
 * Edge.scala created on Oct 6, 2014
 *
 * Description: The representation of strand connections
 * in the strand graph
 */
package dsnaming

import scalax.collection.GraphEdge.DiEdge
import scalax.collection.GraphEdge.ExtendedKey
import scalax.collection.GraphEdge.EdgeCopy
import scalax.collection.GraphPredef.OuterEdge
import scalax.collection.GraphEdge.NodeProduct
import scala.collection.mutable.Set
import boxcalculation.DsOliCell
import scala.collection.mutable.HashMap
import boxcalculation.DsOliBox

/**
 * @author DSI
 * 
 * @constructor constructs a strand connection
 * @param ccSet the connection configuration set with a tuple for source cell, target cell, source strand, target strand
 * @param conConf a connection configuration indicating the type of the connection and the connection offsets
 * @param conConfClass the connection configuration classification, i.e., the naming of the data structure
 * @param startPoint the time step when the connection was created
 */
class DsOliMetaBoxGraphDiEdge[N](
  nodes: Product,
  val id: Long,
  val ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)],
  val conConf: DsOliConConf,
  var conConfClass: Set[DsOliConConfClassification],
  val startPoint: Int,
  val strandConns: Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]) extends DiEdge[N](nodes)
  with ExtendedKey[N]
  with EdgeCopy[DsOliMetaBoxGraphDiEdge]
  with OuterEdge[N, DsOliMetaBoxGraphDiEdge] {

  // Collects cc sets per time step
  var ccSetPerTimeStep: HashMap[Long, Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)]] = null

  def this(
    id: Long,
    source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)],
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification],
    strandConns: Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]) =
    this(NodeProduct(source, target), id, ccSet, conConf, conConfClass, -1, strandConns)

  def this(
    source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)],
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification],
    strandConns: Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, ccSet, conConf, conConfClass, -1, strandConns)

  def this(
    source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)],
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification]) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, ccSet, conConf, conConfClass, -1, Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]())

  def this(source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification]) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, null, conConf, conConfClass, -1, Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]())

  def this(source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    conConf: DsOliConConf) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, null, conConf, null, -2, Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]())

  def this(source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    conConf: DsOliConConf, start: Int) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, null, conConf, null, start, Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]())

  def this(source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)],
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification], start: Int) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, ccSet, conConf, conConfClass, start, Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]())

  def this(source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification], start: Int) =
    this(NodeProduct(source, target), DsOliMetaBoxGraphDiEdge.getId, null, conConf, conConfClass, start, Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]())

  def keyAttributes = Seq(conConf, conConfClass)

  override def copy[NN](newNodes: Product) = {
    val newEdge = new DsOliMetaBoxGraphDiEdge[NN](newNodes, id, ccSet, conConf, conConfClass, startPoint, strandConns)
    newEdge.ccSetPerTimeStep = ccSetPerTimeStep
    newEdge
  }

}

object DsOliMetaBoxGraphDiEdge {
  var id: Long = 0
  def getId(): Long = {
    val retId = id;
    id += 1
    return retId
  }
  def apply(source: DsOliMetaBoxGraphVertex, target: DsOliMetaBoxGraphVertex,
    id: Long,
    ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)],
    conConf: DsOliConConf,
    conConfClass: Set[DsOliConConfClassification],
    strandConns: Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]) = {
    new DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex](NodeProduct(source, target), id, ccSet, conConf, conConfClass, -4, strandConns)
  }

  def unapply(e: DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]): Option[(DsOliMetaBoxGraphVertex, DsOliMetaBoxGraphVertex, Long, Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)], DsOliConConf, Set[DsOliConConfClassification])] = {
    if (e eq null) None else Some((e.source, e.target, e.id, e.ccSet, e.conConf, e.conConfClass))
  }
  // ! Do an upcast here to DsOliVertex
  implicit class DsOliEdgeAssoc[V <: DsOliMetaBoxGraphVertex](val edge: DiEdge[V]) {
    @inline def toDsOliDiEdge(ccSet: Set[(DsOliCell, DsOliCell, DsOliBox, DsOliBox)], conConf: DsOliConConf, conConfClass: Set[DsOliConConfClassification], strandConns: Set[DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex]]) = {
      new DsOliMetaBoxGraphDiEdge[DsOliMetaBoxGraphVertex](edge.nodes, DsOliMetaBoxGraphDiEdge.getId, ccSet, conConf, conConfClass, -5, strandConns) with OuterEdge[DsOliMetaBoxGraphVertex, DsOliMetaBoxGraphDiEdge]
    }
  }
}
