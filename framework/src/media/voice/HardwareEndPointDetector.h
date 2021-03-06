/******************************************************************
 *
 * Copyright 2018 Samsung Electronics All Rights Reserved.
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
 *
 ******************************************************************/
#ifndef __MEDIA_HARDWARE_ENDPOINT_DETECTOR_H
#define __MEDIA_HARDWARE_ENDPOINT_DETECTOR_H

#include <functional>

#include "EndPointDetector.h"

namespace media {
namespace voice {

class HardwareEndPointDetector : public EndPointDetector
{
public:
	HardwareEndPointDetector(int card, int device);

public:
	bool init(uint32_t samprate, uint8_t channels) override;
	void deinit() override;
	bool startEndPointDetect(uint32_t timeout) override;

private:
	int mCard;
	int mDevice;
};

} // namespace voice
} // namespace media

#endif
