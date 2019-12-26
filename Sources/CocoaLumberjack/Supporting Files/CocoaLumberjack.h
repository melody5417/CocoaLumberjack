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

/**
 * Welcome to CocoaLumberjack!
 *
 * The project page has a wealth of documentation if you have any questions.
 * https://github.com/CocoaLumberjack/CocoaLumberjack
 *
 * If you're new to the project you may wish to read "Getting Started" at:
 * Documentation/GettingStarted.md
 *
 * Otherwise, here is a quick refresher.
 * There are three steps to using the macros:
 *
 * Step 1:
 * Import the header in your implementation or prefix file:
 *
 * #import <CocoaLumberjack/CocoaLumberjack.h>
 *
 * Step 2:
 * Define your logging level in your implementation file:
 *
 * // Log levels: off, error, warn, info, verbose
 * static const YQLogLevel ddLogLevel = YQLogLevelVerbose;
 *
 * Step 2 [3rd party frameworks]:
 *
 * Define your LOG_LEVEL_DEF to a different variable/function than ddLogLevel:
 *
 * // #undef LOG_LEVEL_DEF // Undefine first only if needed
 * #define LOG_LEVEL_DEF myLibLogLevel
 *
 * Define your logging level in your implementation file:
 *
 * // Log levels: off, error, warn, info, verbose
 * static const YQLogLevel myLibLogLevel = YQLogLevelVerbose;
 *
 * Step 3:
 * Replace your NSLog statements with YQLog statements according to the severity of the message.
 *
 * NSLog(@"Fatal error, no dohickey found!"); -> YQLogError(@"Fatal error, no dohickey found!");
 *
 * YQLog works exactly the same as NSLog.
 * This means you can pass it multiple variables just like NSLog.
 **/

#import <Foundation/Foundation.h>

//! Project version number for CocoaLumberjack.
FOUNDATION_EXPORT double CocoaLumberjackVersionNumber;

//! Project version string for CocoaLumberjack.
FOUNDATION_EXPORT const unsigned char CocoaLumberjackVersionString[];

// Disable legacy macros
#ifndef YQ_LEGACY_MACROS
    #define YQ_LEGACY_MACROS 0
#endif

// Core
#import <CocoaLumberjack/YQLog.h>

// Main macros
#import <CocoaLumberjack/YQLogMacros.h>
#import <CocoaLumberjack/YQAssertMacros.h>

// Capture ASL
#import <CocoaLumberjack/YQASLLogCapture.h>

// Loggers
#import <CocoaLumberjack/YQLoggerNames.h>

#import <CocoaLumberjack/YQTTYLogger.h>
#import <CocoaLumberjack/YQASLLogger.h>
#import <CocoaLumberjack/YQFileLogger.h>
#import <CocoaLumberjack/YQOSLogger.h>

// Extensions
#import <CocoaLumberjack/YQContextFilterLogFormatter.h>
#import <CocoaLumberjack/YQDispatchQueueLogFormatter.h>
#import <CocoaLumberjack/YQMultiFormatter.h>
#import <CocoaLumberjack/YQFileLogger+Buffering.h>

// CLI
#import <CocoaLumberjack/CLIColor.h>

// etc
#import <CocoaLumberjack/YQAbstractDatabaseLogger.h>
#import <CocoaLumberjack/YQLog+LOGV.h>
#import <CocoaLumberjack/YQLegacyMacros.h>
