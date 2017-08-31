
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
 * dsOliMetaBoxGraphs.scala created on Jun 21, 2015
 *
 * Description: Generic container for saving information for each time step
 */
package util

import scala.collection.mutable.ListBuffer

/**
 * @author DSI
 *
 */
class DsOliTimeStepContainer[A] {

  // The list for saving the data per time step
  val steps = new ListBuffer[A]()

  /**
   * Get the time step
   * @param timeStep the time step to fetch
   * @return Option the information if present
   */
  def get(timeStep: Int): Option[A] = {
    try {
      Some(steps(timeStep))
    } catch {
      case e: Exception => None
    }
  }

  /**
   * Append a information
   * @param step the information to append
   */
  def append(step: A): Unit = {
    steps.append(step)
  }

  /**
   * Put information into the given time step
   * @param timeStep the time step to save information to
   * @param step the information to save
   */
  def put(timeStep: Int, step: A): Unit = {
    steps(timeStep) = step
  }

}