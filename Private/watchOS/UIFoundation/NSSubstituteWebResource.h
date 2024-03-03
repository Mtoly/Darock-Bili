//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 908.2.0.0.0
//
#ifndef NSSubstituteWebResource_h
#define NSSubstituteWebResource_h
@import Foundation;

@class NSData, NSString, NSURL;

@interface NSSubstituteWebResource : NSObject {
  /* instance variables */
  NSData *_data;
  NSURL *_url;
  NSString *_mimeType;
  NSString *_textEncodingName;
  NSString *_frameName;
}

/* instance methods */
- (Class)_webResourceClass;
- (id)initWithData:(id)data URL:(id)url MIMEType:(id)mimetype textEncodingName:(id)name frameName:(id)name;
- (void)dealloc;
- (id)data;
- (id)URL;
- (id)MIMEType;
- (id)textEncodingName;
- (id)frameName;
- (id)webResource;
@end

#endif /* NSSubstituteWebResource_h */