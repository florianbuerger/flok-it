//
//  Copyright (c) 2012, Florian Buerger
//  All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without
//  modification, are permitted provided that the following conditions are met:
//
//  1.  Redistributions of source code must retain the above copyright notice, this
//      list of conditions and the following disclaimer.
//  2.  Redistributions in binary form must reproduce the above copyright notice,
//      this list of conditions and the following disclaimer in the documentation
//      and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
//  ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
//  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
//  DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
//  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
//  (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
//  ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
//  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
//  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.


#import "DDLog.h"

/**
 A custom formatter for my log messages.
 Heavily inspired by Peter Steinberge (@steipete) - http://petersteinberger.com/2010/10/logging-again/

 output looks like:

    LogLevel Date       Time        GCD queue name          class        methodname                               line  message

    Error:   2012-01-24 11:34:35:240(com.apple.main-thread) [AppDelegate application:didFinishLaunchingWithOptions:/38] error ...
             2012-01-24 11:34:35:240(com.apple.main-thread) [AppDelegate application:didFinishLaunchingWithOptions:/39] verbose ...
    Info:    2012-01-24 11:34:35:240(com.apple.main-thread) [AppDelegate application:didFinishLaunchingWithOptions:/40] info ...

 This class need to be compiled with ARC (-fobjc-arc compiler flag)
 Requires cocoalumberjack
 */
@interface FBLogFormatter : NSObject <DDLogFormatter>
{
    NSDateFormatter *dateFormatter;
}

@end
