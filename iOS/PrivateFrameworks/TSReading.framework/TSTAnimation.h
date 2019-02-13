//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class TSTLayout;

@interface TSTAnimation : NSObject <NSCopying>
{
    TSTLayout *mLayout;
    int mKind;
    CDStruct_5f1f7aa9 *mCellRanges;
    unsigned long long mCellRangeCount;
    unsigned long long mStageCount;
    unsigned long long mStage;
    _Bool mFinal;
    _Bool mByColumn;
    _Bool mByRow;
    _Bool mByCell;
    _Bool mByContent;
    _Bool mByCellRange;
    _Bool mByMissingCellRange;
    _Bool mReverse;
    _Bool mShowsTableChrome;
    _Bool mShowsOverlayLayers;
    _Bool mExpandBackgroundFill;
    _Bool mDrawsBlackAndWhite;
}

+ (_Bool)deliveryStyleSupportedForExport:(unsigned long long)arg1;
+ (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
+ (unsigned long long)stageCountForTextureDeliveryStyle:(unsigned long long)arg1 andTable:(id)arg2;
+ (id)textureDeliveryStylesLocalized:(_Bool)arg1;
+ (id)newAnimationWithLayout:(id)arg1 andCellRange:(CDStruct_5f1f7aa9)arg2;
+ (id)newAnimationWithLayout:(id)arg1 andDeliveryStyle:(unsigned long long)arg2;
@property _Bool drawsBlackAndWhite; // @synthesize drawsBlackAndWhite=mDrawsBlackAndWhite;
@property _Bool expandBackgroundFill; // @synthesize expandBackgroundFill=mExpandBackgroundFill;
@property _Bool showsOverlayLayers; // @synthesize showsOverlayLayers=mShowsOverlayLayers;
@property _Bool showsTableChrome; // @synthesize showsTableChrome=mShowsTableChrome;
@property(readonly) _Bool final; // @synthesize final=mFinal;
@property(readonly) unsigned long long stage; // @synthesize stage=mStage;
@property(readonly) unsigned long long stageCount; // @synthesize stageCount=mStageCount;
@property(readonly) _Bool drawStrokes;
@property(readonly) _Bool clipStrokes;
@property(readonly) _Bool drawCellContent;
@property(readonly) _Bool drawCellBackground;
@property(readonly) _Bool drawTableBackground;
@property(readonly) _Bool drawTableName;
@property(readonly) _Bool enabled;
- (void)clearCellRanges;
- (void)addCellRange:(CDStruct_5f1f7aa9)arg1;
@property(readonly) unsigned long long cellRangeCount;
- (CDStruct_5f1f7aa9)cellRangeAtIndex:(unsigned long long)arg1;
- (void)setStage:(unsigned long long)arg1 andFinal:(_Bool)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

