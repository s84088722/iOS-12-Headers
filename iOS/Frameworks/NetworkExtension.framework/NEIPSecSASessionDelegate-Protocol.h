//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NetworkExtension/NSObject-Protocol.h>

@class NEIPSecSA;

@protocol NEIPSecSASessionDelegate <NSObject>
- (void)blackholeDetectedSA:(NEIPSecSA *)arg1;
- (void)idleTimeoutSA:(NEIPSecSA *)arg1;
- (void)deleteSA:(NEIPSecSA *)arg1;
- (void)expireSA:(NEIPSecSA *)arg1;
@end

