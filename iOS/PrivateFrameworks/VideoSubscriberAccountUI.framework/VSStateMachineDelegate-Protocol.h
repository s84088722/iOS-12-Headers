//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccountUI/NSObject-Protocol.h>

@class NSString, VSStateMachine;

@protocol VSStateMachineDelegate <NSObject>

@optional
- (void)stateMachine:(VSStateMachine *)arg1 transitionFromState:(NSString *)arg2;
- (void)stateMachine:(VSStateMachine *)arg1 transitionToState:(NSString *)arg2;
@end

