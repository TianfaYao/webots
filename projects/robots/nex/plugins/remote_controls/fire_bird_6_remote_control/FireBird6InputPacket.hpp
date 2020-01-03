// Copyright 1996-2020 Cyberbotics Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*
 * Description:  Defines a packet sent from the real Fire Bird 6 to the remote control library
 */

#ifndef FIREBIRD6_INPUT_PACKET_HPP
#define FIREBIRD6_INPUT_PACKET_HPP

#include "Packet.hpp"

class FireBird6OutputPacket;

class FireBird6InputPacket : public Packet {
public:
  explicit FireBird6InputPacket(int maxSize);
  virtual ~FireBird6InputPacket();

  void decode(int simulationTime, const FireBird6OutputPacket &outputPacket) const;
};

#endif
