//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol MFApplicationSceneActor <NSObject>

@optional
- (NSArray *)withdrawalGestureExclusionRects;
- (struct CGRect)withdrawalGestureEngagementRect;
- (NSString *)localizedIdentificationString;
- (void)didResurrectWithResurrectionIdentifier:(NSString *)arg1;
- (void)prepareToBePurged;
- (void)didBecomeActiveSceneActor;
- (void)willBecomeActiveSceneActor;
- (void)wasWithdrawnAsActiveSceneActor;
- (void)prepareToBeWithdrawnAsActiveSceneActor;
@end

