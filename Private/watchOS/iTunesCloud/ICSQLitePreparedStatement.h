//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.5.0.0
//
#ifndef ICSQLitePreparedStatement_h
#define ICSQLitePreparedStatement_h
@import Foundation;

@class NSString;

@interface ICSQLitePreparedStatement : NSObject

@property (readonly, nonatomic) const void * connectionPointer;
@property (readonly, copy, nonatomic) NSString *SQL;

/* instance methods */
- (id)initWithConnection:(const void *)connection SQL:(id)sql;
@end

#endif /* ICSQLitePreparedStatement_h */