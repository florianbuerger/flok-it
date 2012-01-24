a collection of custom log formatter for cocoa-lumberjack

# FBDefaultLogger

Heavily inspired by Peter Steinberger - http://petersteinberger.com/2010/10/logging-again/

 output looks like:

    LogLevel Date       Time        GCD queue name          class        methodname                               line  message

    Error:   2012-01-24 11:34:35:240(com.apple.main-thread) [AppDelegate application:didFinishLaunchingWithOptions:/38] error ...
             2012-01-24 11:34:35:240(com.apple.main-thread) [AppDelegate application:didFinishLaunchingWithOptions:/39] verbose ...
    Info:    2012-01-24 11:34:35:240(com.apple.main-thread) [AppDelegate application:didFinishLaunchingWithOptions:/40] info ...
