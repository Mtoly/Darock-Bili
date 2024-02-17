//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.12.1.0.0
//
#ifndef DEDialogState_h
#define DEDialogState_h
@import Foundation;

@class NSString;

@interface DEDialogState : NSObject

@property (retain) NSString *catId;

/* instance methods */
- (id)initWithCatId:(id)id;
- (struct DialogStateUseCase { struct CountAndTimestamp { unsigned long long x0; double x1; } x0; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long x0; } x2; } x0; } x1; struct set<std::string, std::less<std::string>, std::allocator<std::string>> { struct __tree<std::string, std::less<std::string>, std::allocator<std::string>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::string, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::less<std::string>> { unsigned long long x0; } x2; } x0; } x2; struct map<std::string, siri::dialogengine::GroundingInfo, std::less<std::string>, std::allocator<std::pair<const std::string, siri::dialogengine::GroundingInfo>>> { struct __tree<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>>, std::allocator<std::__value_type<std::string, siri::dialogengine::GroundingInfo>>> { void * x0; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, siri::dialogengine::GroundingInfo>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void * x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, siri::dialogengine::GroundingInfo>, std::less<std::string>>> { unsigned long long x0; } x2; } x0; } x3; })getUseCase;
- (struct DialogStateFamily { struct CountAndTimestamp { unsigned long long x0; double x1; } x0; })getFamily;
@end

#endif /* DEDialogState_h */