//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKUserContentWorld : NSObject <WKObject>
{
    struct ObjectStorage<API::UserContentWorld> _userContentWorld;
}

+ (id)normalWorld;
+ (id)worldWithName:(id)arg1;
@property(readonly) struct Object *_apiObject;
@property(readonly, copy, nonatomic) NSString *name;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
