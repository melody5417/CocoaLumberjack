// Software License Agreement (BSD License)
//
// Copyright (c) 2010-2019, Deusty, LLC
// All rights reserved.
//
// Redistribution and use of this software in source and binary forms,
// with or without modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice,
//   this list of conditions and the following disclaimer.
//
// * Neither the name of Deusty nor the names of its contributors may be used
//   to endorse or promote products derived from this software without specific
//   prior written permission of Deusty, LLC.

#ifndef SwiftLogLevel_h
#define SwiftLogLevel_h

#import <CocoaLumberjack/YQLog.h>

#ifndef YQ_LOG_LEVEL
// #warning 'YQ_LOG_LEVEL' is not defined. Using 'YQLogLevelAll' as default. Consider defining it yourself.
#define YQ_LOG_LEVEL YQLogLevelAll
#endif

static const YQLogLevel YQDefaultLogLevel = YQ_LOG_LEVEL;

#endif /* SwiftLogLevel_h */
