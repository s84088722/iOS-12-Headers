//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;

@protocol NULoadingDelegate <NSObject>

@optional
- (void)loadingDidFinishWithError:(NSError *)arg1;
- (void)loadingWillFinishWithError:(NSError *)arg1;
- (void)loadingDidUpdateProgress:(double)arg1;
- (void)loadingDidStart;
- (void)loadingWillStart;
@end

