//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, RTStateTransitionOnePredEl;

@interface RTStateTransitionOneTransPred : NSObject
{
    RTStateTransitionOnePredEl *_weekly;
    RTStateTransitionOnePredEl *_daily;
    NSUUID *_stateUUID;
}

@property(retain, nonatomic) NSUUID *stateUUID; // @synthesize stateUUID=_stateUUID;
@property(retain, nonatomic) RTStateTransitionOnePredEl *daily; // @synthesize daily=_daily;
@property(retain, nonatomic) RTStateTransitionOnePredEl *weekly; // @synthesize weekly=_weekly;
- (void).cxx_destruct;
- (id)init;

@end

