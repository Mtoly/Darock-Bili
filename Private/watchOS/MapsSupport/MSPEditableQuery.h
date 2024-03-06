//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPEditableQuery_h
#define MSPEditableQuery_h
@import Foundation;

#include "MSPQuery.h"
#include "MSPContainer.h"
#include "_MSPQueryState.h"

@class NSString;

@interface MSPEditableQuery : MSPQuery {
  /* instance variables */
  _MSPQueryState *_editedState;
  MSPContainer *_container;
  NSString *_context;
}

/* instance methods */
- (id)_initWithSource:(id)source;
- (id)_visibleState;
- (void)_didChangeSourceWithNewState:(id)state context:(id)context inContainer:(id)container;
- (void)_performEditWithStateTransformation:(id /* block */)transformation containerEdit:(id /* block */)edit;
- (void)deleteContentsObjectAtIndexes:(id)indexes;
- (void)deleteContentsObjectAtIndex:(unsigned long long)index;
- (void)moveContentsObjectAtIndex:(unsigned long long)index toIndex:(unsigned long long)index;
@end

#endif /* MSPEditableQuery_h */