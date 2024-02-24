//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFDiffableDataSource_Protocol_h
#define HFDiffableDataSource_Protocol_h
@import Foundation;

@protocol HFDiffableDataSource <NSObject>

@property (copy, nonatomic) id /* block */ supplementaryViewProvider;

/* instance methods */
- (id)snapshot;
- (void)applySnapshot:(id)snapshot animatingDifferences:(BOOL)differences completion:(id /* block */)completion;
- (void)applySnapshot:(id)snapshot toSection:(id)section animatingDifferences:(BOOL)differences completion:(id /* block */)completion;
- (id)itemIdentifierForIndexPath:(id)path;
- (id)indexPathForItemIdentifier:(id)identifier;
@end

#endif /* HFDiffableDataSource_Protocol_h */