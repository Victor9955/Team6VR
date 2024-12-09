/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 * All rights reserved.
 *
 * Licensed under the Oculus SDK License Agreement (the "License");
 * you may not use the Oculus SDK except in compliance with the License,
 * which is provided at the time of installation or download, or which
 * otherwise accompanies this software in either electronic or hard copy form.
 *
 * You may obtain a copy of the License at
 *
 * https://developer.oculus.com/licenses/oculussdk/
 *
 * Unless required by applicable law or agreed to in writing, the Oculus SDK
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
// This file was @generated with LibOVRPlatform/codegen/main. Do not modify it!

#ifndef OVR_ACHIEVEMENTUPDATE_H
#define OVR_ACHIEVEMENTUPDATE_H

#include "OVR_Platform_Defs.h"
#include <stdbool.h>

/// \file
/// Represents an update to an existing achievement. It will be the payload if
/// there is any updates on achievements, as unlocking an achievement by
/// ovr_Achievements_Unlock(), adding 'count' to the achievement by
/// ovr_Achievements_AddCount(), and unlocking fields of a BITFIELD achievement
/// by ovr_Achievements_AddFields().
typedef struct ovrAchievementUpdate *ovrAchievementUpdateHandle;

/// This indicates if this update caused the achievement to unlock.
OVRP_PUBLIC_FUNCTION(bool) ovr_AchievementUpdate_GetJustUnlocked(const ovrAchievementUpdateHandle obj);

/// The unique ovr_AchievementDefinition_GetName() used to reference the
/// updated achievement, as specified in the developer dashboard.
OVRP_PUBLIC_FUNCTION(const char *) ovr_AchievementUpdate_GetName(const ovrAchievementUpdateHandle obj);


#endif