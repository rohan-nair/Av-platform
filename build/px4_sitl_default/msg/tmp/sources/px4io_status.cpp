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

/* Auto-generated by genmsg_cpp from file px4io_status.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/px4io_status.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_px4io_status_fields[] = "uint64_t timestamp;float voltage_v;float rssi_v;uint16_t free_memory_bytes;int16_t[8] actuators;uint16_t[8] servos;uint16_t[18] raw_inputs;bool status_outputs_armed;bool status_override;bool status_rc_ok;bool status_rc_ppm;bool status_rc_dsm;bool status_rc_sbus;bool status_fmu_ok;bool status_raw_pwm;bool status_mixer_ok;bool status_arm_sync;bool status_init_ok;bool status_failsafe;bool status_safety_off;bool status_fmu_initialized;bool status_rc_st24;bool status_rc_sumd;bool alarm_vbatt_low;bool alarm_temperature;bool alarm_servo_current;bool alarm_acc_current;bool alarm_fmu_lost;bool alarm_rc_lost;bool alarm_pwm_error;bool alarm_vservo_fault;bool arming_io_arm_ok;bool arming_fmu_armed;bool arming_fmu_prearmed;bool arming_manual_override_ok;bool arming_failsafe_custom;bool arming_inair_restart_ok;bool arming_always_pwm_enable;bool arming_rc_handling_disabled;bool arming_lockdown;bool arming_force_failsafe;bool arming_termination_failsafe;bool arming_override_immediate;uint8_t[6] _padding0;";

ORB_DEFINE(px4io_status, struct px4io_status_s, 122, __orb_px4io_status_fields, static_cast<uint8_t>(ORB_ID::px4io_status));


void print_message(const px4io_status_s &message)
{

	PX4_INFO_RAW(" px4io_status_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tvoltage_v: %.4f\n", (double)message.voltage_v);
	PX4_INFO_RAW("\trssi_v: %.4f\n", (double)message.rssi_v);
	PX4_INFO_RAW("\tfree_memory_bytes: %u\n", message.free_memory_bytes);
	PX4_INFO_RAW("\tactuators: [%d, %d, %d, %d, %d, %d, %d, %d]\n", message.actuators[0], message.actuators[1], message.actuators[2], message.actuators[3], message.actuators[4], message.actuators[5], message.actuators[6], message.actuators[7]);
	PX4_INFO_RAW("\tservos: [%u, %u, %u, %u, %u, %u, %u, %u]\n", message.servos[0], message.servos[1], message.servos[2], message.servos[3], message.servos[4], message.servos[5], message.servos[6], message.servos[7]);
	PX4_INFO_RAW("\traw_inputs: [%u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u]\n", message.raw_inputs[0], message.raw_inputs[1], message.raw_inputs[2], message.raw_inputs[3], message.raw_inputs[4], message.raw_inputs[5], message.raw_inputs[6], message.raw_inputs[7], message.raw_inputs[8], message.raw_inputs[9], message.raw_inputs[10], message.raw_inputs[11], message.raw_inputs[12], message.raw_inputs[13], message.raw_inputs[14], message.raw_inputs[15], message.raw_inputs[16], message.raw_inputs[17]);
	PX4_INFO_RAW("\tstatus_outputs_armed: %s\n", (message.status_outputs_armed ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_override: %s\n", (message.status_override ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_rc_ok: %s\n", (message.status_rc_ok ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_rc_ppm: %s\n", (message.status_rc_ppm ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_rc_dsm: %s\n", (message.status_rc_dsm ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_rc_sbus: %s\n", (message.status_rc_sbus ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_fmu_ok: %s\n", (message.status_fmu_ok ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_raw_pwm: %s\n", (message.status_raw_pwm ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_mixer_ok: %s\n", (message.status_mixer_ok ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_arm_sync: %s\n", (message.status_arm_sync ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_init_ok: %s\n", (message.status_init_ok ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_failsafe: %s\n", (message.status_failsafe ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_safety_off: %s\n", (message.status_safety_off ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_fmu_initialized: %s\n", (message.status_fmu_initialized ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_rc_st24: %s\n", (message.status_rc_st24 ? "True" : "False"));
	PX4_INFO_RAW("\tstatus_rc_sumd: %s\n", (message.status_rc_sumd ? "True" : "False"));
	PX4_INFO_RAW("\talarm_vbatt_low: %s\n", (message.alarm_vbatt_low ? "True" : "False"));
	PX4_INFO_RAW("\talarm_temperature: %s\n", (message.alarm_temperature ? "True" : "False"));
	PX4_INFO_RAW("\talarm_servo_current: %s\n", (message.alarm_servo_current ? "True" : "False"));
	PX4_INFO_RAW("\talarm_acc_current: %s\n", (message.alarm_acc_current ? "True" : "False"));
	PX4_INFO_RAW("\talarm_fmu_lost: %s\n", (message.alarm_fmu_lost ? "True" : "False"));
	PX4_INFO_RAW("\talarm_rc_lost: %s\n", (message.alarm_rc_lost ? "True" : "False"));
	PX4_INFO_RAW("\talarm_pwm_error: %s\n", (message.alarm_pwm_error ? "True" : "False"));
	PX4_INFO_RAW("\talarm_vservo_fault: %s\n", (message.alarm_vservo_fault ? "True" : "False"));
	PX4_INFO_RAW("\tarming_io_arm_ok: %s\n", (message.arming_io_arm_ok ? "True" : "False"));
	PX4_INFO_RAW("\tarming_fmu_armed: %s\n", (message.arming_fmu_armed ? "True" : "False"));
	PX4_INFO_RAW("\tarming_fmu_prearmed: %s\n", (message.arming_fmu_prearmed ? "True" : "False"));
	PX4_INFO_RAW("\tarming_manual_override_ok: %s\n", (message.arming_manual_override_ok ? "True" : "False"));
	PX4_INFO_RAW("\tarming_failsafe_custom: %s\n", (message.arming_failsafe_custom ? "True" : "False"));
	PX4_INFO_RAW("\tarming_inair_restart_ok: %s\n", (message.arming_inair_restart_ok ? "True" : "False"));
	PX4_INFO_RAW("\tarming_always_pwm_enable: %s\n", (message.arming_always_pwm_enable ? "True" : "False"));
	PX4_INFO_RAW("\tarming_rc_handling_disabled: %s\n", (message.arming_rc_handling_disabled ? "True" : "False"));
	PX4_INFO_RAW("\tarming_lockdown: %s\n", (message.arming_lockdown ? "True" : "False"));
	PX4_INFO_RAW("\tarming_force_failsafe: %s\n", (message.arming_force_failsafe ? "True" : "False"));
	PX4_INFO_RAW("\tarming_termination_failsafe: %s\n", (message.arming_termination_failsafe ? "True" : "False"));
	PX4_INFO_RAW("\tarming_override_immediate: %s\n", (message.arming_override_immediate ? "True" : "False"));
	
}
