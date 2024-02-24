//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLKMeansClustering_h
#define PLKMeansClustering_h
@import Foundation;

#include "PLDataClustering.h"

@interface PLKMeansClustering : PLDataClustering

@property (nonatomic) unsigned long long k;

/* instance methods */
- (id)performWithDataset:(id)dataset progressBlock:(id /* block */)block;
- (id)performWithDataset:(id)dataset numericData:(id)data progressBlock:(id /* block */)block;
- (id)_performWithDataset:(id)dataset numericData:(id)data progressBlock:(id /* block */)block;
- (double *)_dataArray:(id)array featureCount:(unsigned int)count useKeypaths:(BOOL)keypaths;
@end

#endif /* PLKMeansClustering_h */