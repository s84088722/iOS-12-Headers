//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ADOptInStatusClient : NSObject
{
}

+ (id)sharedInstance;
- (id)advertisingIdentifier;
- (void)clearAdvertisingIdentifier;
- (void)advertisingIdentifierChanged:(CDUnknownBlockType)arg1;
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)refreshOptInStatus;
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

