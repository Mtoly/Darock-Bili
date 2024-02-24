//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUCollectionItem_h
#define NMUCollectionItem_h
@import Foundation;

@interface NMUCollectionItem : NSObject

@property (copy, nonatomic) id /* block */ visibilityBlock;
@property (retain, nonatomic) Class cellClass;
@property (copy, nonatomic) id /* block */ cellConfigurationBlock;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly, nonatomic) BOOL visible;

/* class methods */
+ (id)listItemWithText:(id)text actionBlock:(id /* block */)block visibilityBlock:(id /* block */)block;
+ (id)listItemWithText:(id)text detailText:(id)text actionBlock:(id /* block */)block visibilityBlock:(id /* block */)block;
+ (id)listItemWithImageName:(id)name text:(id)text actionBlock:(id /* block */)block visibilityBlock:(id /* block */)block;
+ (id)listItemWithImageName:(id)name text:(id)text detailText:(id)text actionBlock:(id /* block */)block visibilityBlock:(id /* block */)block;
+ (id)listItemWithImageName:(id)name tintColor:(id)color text:(id)text actionBlock:(id /* block */)block visibilityBlock:(id /* block */)block;
+ (id)listItemWithImageName:(id)name tintColor:(id)color text:(id)text detailText:(id)text actionBlock:(id /* block */)block visibilityBlock:(id /* block */)block;

/* instance methods */
- (BOOL)isVisible;
@end

#endif /* NMUCollectionItem_h */