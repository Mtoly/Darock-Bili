//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REElementUpdateOperation_h
#define REElementUpdateOperation_h
@import Foundation;

#include "REElement.h"
#include "RESectionPath.h"

@interface REElementUpdateOperation : NSObject

@property (readonly, nonatomic) REElement *element;
@property (readonly, nonatomic) RESectionPath *path;
@property (readonly, nonatomic) RESectionPath *movedToPath;
@property (readonly, nonatomic) unsigned long long type;

/* class methods */
+ (id)reloadElement:(id)element atPath:(id)path;
+ (id)insertElement:(id)element atPath:(id)path;
+ (id)removeElement:(id)element atPath:(id)path;
+ (id)moveElement:(id)element fromPath:(id)path toPath:(id)path;
+ (id)refreshElement:(id)element atPath:(id)path;

/* instance methods */
- (id)initWithElement:(id)element path:(id)path newPath:(id)path updateType:(unsigned long long)type;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
@end

#endif /* REElementUpdateOperation_h */