//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKTableViewDiffableDataSource_h
#define PKTableViewDiffableDataSource_h
@import Foundation;

#include "UITableViewDiffableDataSource.h"

@interface PKTableViewDiffableDataSource : UITableViewDiffableDataSource

@property (copy, nonatomic) id /* block */ sectionFooterProvider;
@property (copy, nonatomic) id /* block */ sectionHeaderProvider;
@property (copy, nonatomic) id /* block */ commitEditingHandler;

/* instance methods */
- (id)tableView:(id)view titleForHeaderInSection:(long long)section;
- (id)tableView:(id)view titleForFooterInSection:(long long)section;
- (void)tableView:(id)view commitEditingStyle:(long long)style forRowAtIndexPath:(id)path;
@end

#endif /* PKTableViewDiffableDataSource_h */