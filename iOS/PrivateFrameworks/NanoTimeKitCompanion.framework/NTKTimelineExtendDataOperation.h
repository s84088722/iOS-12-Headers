//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineDataOperation.h>

@class NSDate;

@interface NTKTimelineExtendDataOperation : NTKTimelineDataOperation
{
    _Bool _extendsLeft;
    NSDate *_boundaryDate;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (void).cxx_destruct;
- (void)_extendRight;
- (void)_extendLeft;
- (void)_start;
- (void)_invokeHandlerWithEntries:(id)arg1;
- (void)_cancel;
- (void)setExtendsRightFromDate:(id)arg1;
- (void)setExtendsLeftFromDate:(id)arg1;

@end

