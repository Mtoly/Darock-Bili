//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 413.1.0.0.0
//
#ifndef TYLogger_h
#define TYLogger_h
@import Foundation;

@interface TYLogger : NSObject
/* class methods */
+ (void)logToSTDERR:(BOOL)stderr;
+ (void)logToFile:(BOOL)file;
+ (id)openLogFile:(id)file inDirectory:(id)directory;
+ (id)openLogFile:(id)file;
+ (void)closeLogFile;
@end

#endif /* TYLogger_h */