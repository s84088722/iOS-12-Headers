//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface AXAssistiveTouchLayoutView : UIView
{
    NSArray *_itemConstraints;
    NSMutableArray *_positioningLayoutGuides;
}

@property(retain, nonatomic) NSMutableArray *positioningLayoutGuides; // @synthesize positioningLayoutGuides=_positioningLayoutGuides;
@property(retain, nonatomic) NSArray *itemConstraints; // @synthesize itemConstraints=_itemConstraints;
- (void).cxx_destruct;
- (void)_enableAutoLayoutForAllItems:(id)arg1;
- (void)centerItems:(id)arg1 withView:(id)arg2;
- (void)centerItems:(id)arg1;
- (id)_setUpConstraintsToAvoidCollisions:(id)arg1 rows:(id)arg2 columns:(id)arg3 clockwiseOctagonalLocations:(id)arg4;
- (id)_setUpConstraintsToAlignItems:(id)arg1 rows:(id)arg2 columns:(id)arg3;
- (void)_enumerateListsOfLocations:(id)arg1 items:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)_setUpConstraintsForPreferredPositionsForItems:(id)arg1 positions:(id)arg2;
- (void)layoutItemsByLocation:(id)arg1 positions:(id)arg2 rows:(id)arg3 columns:(id)arg4 clockwiseOctagonalLocations:(id)arg5 horizontallyCenteredLocation:(id)arg6;
- (void)layoutItemsByLocation:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

