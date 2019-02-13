//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitDirectionsListArtworkItem.h"

#import "TransitDirectionsListExpandableItem-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TransitDirectionsListItemWalking : TransitDirectionsListArtworkItem <TransitDirectionsListExpandableItem>
{
    _Bool _expanded;
    NSArray *_walkingSubItems;
}

@property(copy, nonatomic) NSArray *walkingSubItems; // @synthesize walkingSubItems=_walkingSubItems;
@property(nonatomic) _Bool expanded; // @synthesize expanded=_expanded;
- (void).cxx_destruct;
- (_Bool)_shouldHideWalkingSubStep:(id)arg1;
- (id)_generateWalkingSubSteps;
- (id)_transitWalkingLegInstruction;
- (id)initWithWalkingLeg:(id)arg1;
- (id)secondaryInstructionColor;
- (unsigned long long)numberOfSubItemsWithForceExpand:(_Bool)arg1;
- (id)subItems;
- (_Bool)shouldEnableExpandedButton;
- (id)expandingButtonTitleForExpandedState:(_Bool)arg1;
@property(copy, nonatomic) NSArray *expandedItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

