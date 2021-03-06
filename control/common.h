/*
 * Copyright 2020 Makani Technologies LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CONTROL_COMMON_H_
#define CONTROL_COMMON_H_

#include <stdbool.h>

#include "control/control_types.h"
#include "control/fault_detection/fault_detection_types.h"

#ifdef __cplusplus
extern "C" {
#endif

bool IsControlSystemRunning(InitializationState init_state);
bool IsValidFlightMode(FlightMode flight_mode);
bool AnyAutoHoverFlightMode(FlightMode flight_mode);
bool AnyHoverFlightMode(FlightMode flight_mode);
bool AnyCrosswindFlightMode(FlightMode flight_mode);
FlightMode GetNextFlightMode(FlightMode flight_mode);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // CONTROL_COMMON_H_
