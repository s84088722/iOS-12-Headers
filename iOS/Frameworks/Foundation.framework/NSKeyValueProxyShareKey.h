//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSKeyValueProxyCaching-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching>
{
    NSObject *_container;
    NSString *_key;
}

+ (id)_proxyShare;
- (void)_proxyNonGCFinalize;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (CDStruct_a70f6672)_proxyLocator;

@end
