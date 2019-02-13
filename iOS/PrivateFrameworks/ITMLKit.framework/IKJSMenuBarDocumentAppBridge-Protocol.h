//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/NSObject-Protocol.h>

@class IKAppDocument, IKDOMElement, IKJSMenuBarDocument, NSDictionary;
@protocol NSCopying;

@protocol IKJSMenuBarDocumentAppBridge <NSObject>
- (void)jsMenuBarDocument:(IKJSMenuBarDocument *)arg1 setSelectedEntityUniqueIdentifier:(id <NSCopying>)arg2 withOptions:(NSDictionary *)arg3;
- (IKDOMElement *)selectedItemForJsMenuBarDocument:(IKJSMenuBarDocument *)arg1;
- (void)jsMenuBarDocument:(IKJSMenuBarDocument *)arg1 setDocument:(IKAppDocument *)arg2 forEntityUniqueIdentifier:(id <NSCopying>)arg3 withOptions:(NSDictionary *)arg4;
- (IKAppDocument *)jsMenuBarDocument:(IKJSMenuBarDocument *)arg1 documentForEntityUniqueIdentifier:(id <NSCopying>)arg2;
@end

