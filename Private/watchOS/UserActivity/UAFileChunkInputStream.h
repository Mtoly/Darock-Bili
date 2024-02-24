//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 567.0.0.0.0
//
#ifndef UAFileChunkInputStream_h
#define UAFileChunkInputStream_h
@import Foundation;

#include "NSInputStream.h"

@class NSFileHandle, NSNumber;

@interface UAFileChunkInputStream : NSInputStream

@property (retain) NSFileHandle *file;
@property (retain) NSNumber *chunkOffset;
@property long long chunkSize;
@property (retain) NSNumber *currentOffset;
@property long long readSize;
@property unsigned long long status;

/* instance methods */
- (id)initWithFileHandle:(id)handle offsetInFile:(id)file size:(long long)size;
- (BOOL)hasBytesAvailable;
- (long long)read:(char *)read maxLength:(unsigned long long)length;
- (BOOL)getBuffer:(char * *)buffer length:(unsigned long long *)length;
- (id)propertyForKey:(id)key;
- (BOOL)setProperty:(id)property forKey:(id)key;
- (void)open;
- (void)close;
- (unsigned long long)streamStatus;
- (id)streamError;
@end

#endif /* UAFileChunkInputStream_h */