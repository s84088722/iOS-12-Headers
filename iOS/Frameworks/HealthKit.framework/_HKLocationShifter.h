//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface _HKLocationShifter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (_Bool)isShiftRequiredForLocations:(id)arg1;
- (void).cxx_destruct;
- (void)shiftLocations:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)init;

@end

