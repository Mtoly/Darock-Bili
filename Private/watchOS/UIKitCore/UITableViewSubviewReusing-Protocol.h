//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewSubviewReusing_Protocol_h
#define UITableViewSubviewReusing_Protocol_h
@import Foundation;

@protocol UITableViewSubviewReusing <NSObject>

@property (readonly, nonatomic) NSString *reuseIdentifier;

/* instance methods */
- (id)initWithReuseIdentifier:(id)identifier;
- (void)prepareForReuse;
@end

#endif /* UITableViewSubviewReusing_Protocol_h */