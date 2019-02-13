//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACoreDAVGlue/NSObject-Protocol.h>

@class DATaskManager, NSError;

@protocol DATask <NSObject>
- (void)cancelTaskWithReason:(int)arg1 underlyingError:(NSError *)arg2;
- (void)finishWithError:(NSError *)arg1;
- (void)performTask;

@optional
- (_Bool)shouldForceNetworking;
- (void)setTaskManager:(DATaskManager *)arg1;
- (_Bool)shouldHoldPowerAssertion;
- (void)requestCancelTaskWithReason:(int)arg1;
- (void)startModal;
@end

