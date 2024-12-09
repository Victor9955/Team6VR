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

#ifndef OVR_COWATCHINGSTATE_H
#define OVR_COWATCHINGSTATE_H

#include "OVR_Platform_Defs.h"
#include <stdbool.h>

/// \file
/// It's designed to manage cowatching sessions within a shared virtual home
/// environment. This state primarily focuses on tracking whether a user is
/// currently participating in a cowatching session. If there is any change in
/// the cowatching state, it can be retrieved using
/// #ovrMessage_Notification_Cowatching_InSessionChanged.
typedef struct ovrCowatchingState *ovrCowatchingStateHandle;

/// A `boolean` indicates if the current user is in a cowatching session. It
/// can be retrieved using ovr_Cowatching_IsInSession().
OVRP_PUBLIC_FUNCTION(bool) ovr_CowatchingState_GetInSession(const ovrCowatchingStateHandle obj);


#endif