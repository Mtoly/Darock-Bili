//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MapsSuggestionsShortcutStorage_Protocol_h
#define MapsSuggestionsShortcutStorage_Protocol_h
@import Foundation;

@protocol MapsSuggestionsShortcutStorage <MapsSuggestionsObject>
/* instance methods */
- (BOOL)loadAllShortcutsWithHandler:(id /* block */)handler;
- (BOOL)addOrUpdateShortcuts:(id)shortcuts handler:(id /* block */)handler;
- (BOOL)removeShortcuts:(id)shortcuts handler:(id /* block */)handler;
- (BOOL)moveShortcut:(id)shortcut toIndex:(long long)index handler:(id /* block */)handler;
- (BOOL)moveShortcut:(id)shortcut beforeShortcut:(id)shortcut handler:(id /* block */)handler;
- (BOOL)moveShortcut:(id)shortcut afterShortcut:(id)shortcut handler:(id /* block */)handler;
- (BOOL)moveShortcutToFront:(id)front handler:(id /* block */)handler;
- (BOOL)moveShortcutToBack:(id)back handler:(id /* block */)handler;
- (void)setChangeHandler:(id /* block */)handler;
@end

#endif /* MapsSuggestionsShortcutStorage_Protocol_h */