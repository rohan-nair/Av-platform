/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file vehicle_constraints.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/vehicle_constraints.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_vehicle_constraints_fields[] = "uint64_t timestamp;float yawspeed;float speed_xy;float speed_up;float speed_down;float tilt;float min_distance_to_ground;float max_distance_to_ground;bool want_takeoff;uint8_t[3] _padding0;";

ORB_DEFINE(vehicle_constraints, struct vehicle_constraints_s, 37, __orb_vehicle_constraints_fields, static_cast<uint8_t>(ORB_ID::vehicle_constraints));


void print_message(const vehicle_constraints_s &message)
{

	PX4_INFO_RAW(" vehicle_constraints_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tyawspeed: %.4f\n", (double)message.yawspeed);
	PX4_INFO_RAW("\tspeed_xy: %.4f\n", (double)message.speed_xy);
	PX4_INFO_RAW("\tspeed_up: %.4f\n", (double)message.speed_up);
	PX4_INFO_RAW("\tspeed_down: %.4f\n", (double)message.speed_down);
	PX4_INFO_RAW("\ttilt: %.4f\n", (double)message.tilt);
	PX4_INFO_RAW("\tmin_distance_to_ground: %.4f\n", (double)message.min_distance_to_ground);
	PX4_INFO_RAW("\tmax_distance_to_ground: %.4f\n", (double)message.max_distance_to_ground);
	PX4_INFO_RAW("\twant_takeoff: %s\n", (message.want_takeoff ? "True" : "False"));
	
}
