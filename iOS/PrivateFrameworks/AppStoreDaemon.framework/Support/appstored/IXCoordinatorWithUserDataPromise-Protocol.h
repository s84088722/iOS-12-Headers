//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IXPromisedOutOfBandTransfer, NSError;

@protocol IXCoordinatorWithUserDataPromise <NSObject>
@property(readonly, nonatomic) _Bool hasUserDataPromise;
- (NSError *)userDataRestoreShouldBegin:(_Bool *)arg1;
- (IXPromisedOutOfBandTransfer *)userDataPromiseWithError:(id *)arg1;
- (_Bool)setUserDataPromise:(IXPromisedOutOfBandTransfer *)arg1 error:(id *)arg2;
@end

