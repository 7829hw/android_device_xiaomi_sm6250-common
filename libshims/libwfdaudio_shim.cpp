/*
 * SPDX-FileCopyrightText: The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#include <media/AudioSystem.h>

using android::AudioSystem;
using android::status_t;
using android::media::audio::common::AudioPort;

// AudioSystem::setDeviceConnectionState() gained a deviceSwitch argument in Android 16.
extern "C" status_t
_ZN7android11AudioSystem24setDeviceConnectionStateE24audio_policy_dev_state_tRKNS_5media5audio6common9AudioPortE14audio_format_t(
        audio_policy_dev_state_t state, const AudioPort& port, audio_format_t encodedFormat) {
    return AudioSystem::setDeviceConnectionState(state, port, encodedFormat, false);
}
