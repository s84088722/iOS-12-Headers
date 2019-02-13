//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Fitness/FIIntervalController-Protocol.h>

@class FIIntervalQuantityTrigger, FIMutableTimeSliceGroup, NSDate;

@interface FIQuantityIntervalController : NSObject <FIIntervalController>
{
    FIIntervalQuantityTrigger *_quantityTrigger;
    FIMutableTimeSliceGroup *_sliceGroup;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allSlicesFinalized; // @dynamic allSlicesFinalized;
- (_Bool)isIntervalEndDate;
@property(readonly, nonatomic) _Bool intervalComplete; // @dynamic intervalComplete;
- (_Bool)_updateTriggerWithSample:(id)arg1;
- (void)addSample:(id)arg1;
- (id)initWithIntervalQuantityType:(id)arg1 threshold:(id)arg2 startDate:(id)arg3 trackedQuantityTypes:(id)arg4;

// Remaining properties
@property(readonly, nonatomic) NSDate *intervalEndDate; // @dynamic intervalEndDate;

@end

