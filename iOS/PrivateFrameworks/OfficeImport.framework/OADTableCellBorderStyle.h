//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADStroke;

__attribute__((visibility("hidden")))
@interface OADTableCellBorderStyle : NSObject
{
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultStyle;
+ (id)defaultObliqueStroke;
+ (id)defaultAxisParallelStroke;
- (id)description;
- (void)applyOverridesFrom:(id)arg1;
- (id)shallowCopy;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (id)bottomLeftToTopRightStroke;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (id)topLeftToBottomRightStroke;
- (void)setVertInsideStroke:(id)arg1;
- (id)vertInsideStroke;
- (void)setHorzInsideStroke:(id)arg1;
- (id)horzInsideStroke;
- (void)setBottomStroke:(id)arg1;
- (id)bottomStroke;
- (void)setTopStroke:(id)arg1;
- (id)topStroke;
- (void)setRightStroke:(id)arg1;
- (id)rightStroke;
- (void)setLeftStroke:(id)arg1;
- (id)leftStroke;
- (void)setStrokeOfType:(int)arg1 toValue:(id)arg2;
- (id)stroke:(int)arg1;
- (void)dealloc;

@end

