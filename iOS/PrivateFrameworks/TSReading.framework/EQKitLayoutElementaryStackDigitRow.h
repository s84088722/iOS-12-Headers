//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/EQKitLayoutElementaryStackRow-Protocol.h>

@class NSArray, NSString;

@interface EQKitLayoutElementaryStackDigitRow : NSObject <EQKitLayoutElementaryStackRow>
{
    NSArray *mColumnBoxes;
    long long mAlignmentShift;
    unsigned long long mFirstColumnIndex;
    double mFollowingSpace;
}

@property(readonly, nonatomic) double followingSpace; // @synthesize followingSpace=mFollowingSpace;
@property(nonatomic) unsigned long long firstColumnIndex; // @synthesize firstColumnIndex=mFirstColumnIndex;
@property(readonly, nonatomic) long long alignmentShift; // @synthesize alignmentShift=mAlignmentShift;
- (id)newBoxWithStackWidth:(double)arg1 columnWidthIter:(__wrap_iter_8fb6ff7c)arg2 iterMax:(__wrap_iter_8fb6ff7c)arg3 previousRow:(id)arg4 layoutManager:(const struct EQKitLayoutManager *)arg5;
- (id)p_crossoutDigitBox:(id)arg1 crossout:(int)arg2 layoutManager:(const struct EQKitLayoutManager *)arg3;
@property(readonly, nonatomic) _Bool spansStack;
- (void)populateMaxColumnWidths:(__wrap_iter_8fb6ff7c)arg1;
@property(readonly, nonatomic) unsigned long long columnCount;
- (void)dealloc;
- (id)initWithChildren:(id)arg1 decimalPoint:(unsigned long long)arg2 position:(long long)arg3 followingSpace:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
