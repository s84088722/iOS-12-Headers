//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSArray, NSDictionary;

@interface BKSInsecureDrawingAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *processIds;
@property(readonly, nonatomic) NSDictionary *pidToContextIdsDictionary;
@property(readonly, nonatomic) NSArray *secureModeViolations;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (id)initWithPidToContextIdsDictionary:(id)arg1;

@end

