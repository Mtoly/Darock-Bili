//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSMLArrayProvider_h
#define _PSMLArrayProvider_h
@import Foundation;

@class MLArrayBatchProvider;

@interface _PSMLArrayProvider : NSObject

@property (retain, nonatomic) MLArrayBatchProvider *MLArrayProvider;
@property (nonatomic) int clusteringCount;
@property (nonatomic) int recencyCount;

/* instance methods */
- (id)initWithProvider:(id)provider clusteringCount:(int)count recencyCount:(int)count;
@end

#endif /* _PSMLArrayProvider_h */