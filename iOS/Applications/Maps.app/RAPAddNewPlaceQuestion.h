//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPPlaceCorrectionsQuestion.h"

#import "RAPMenuItem-Protocol.h"

@class NSArray, NSString, RAPAddNewPlaceType, RAPPlaceCorrectableAddress, RAPPlaceCorrectableString, RAPQuestion, UIImage;
@protocol RAPMenuItem;

__attribute__((visibility("hidden")))
@interface RAPAddNewPlaceQuestion : RAPPlaceCorrectionsQuestion <RAPMenuItem>
{
    NSArray *_correctableItems;
    RAPPlaceCorrectableAddress *_correctableAddress;
    RAPPlaceCorrectableString *_nameItem;
    RAPPlaceCorrectableString *_categoryItem;
    NSArray *_selectableTypes;
    RAPAddNewPlaceType *_selectedType;
    RAPQuestion<RAPMenuItem> *_followUp;
}

+ (id)localizedTitle;
+ (id)localizedSettingsTitle;
@property(retain, nonatomic) RAPQuestion<RAPMenuItem> *followUp; // @synthesize followUp=_followUp;
@property(retain, nonatomic) RAPAddNewPlaceType *selectedType; // @synthesize selectedType=_selectedType;
@property(retain, nonatomic) NSArray *selectableTypes; // @synthesize selectableTypes=_selectableTypes;
- (void).cxx_destruct;
- (double)mapViewZoomLevel;
- (_Bool)shouldDisplayPhotoPicker;
- (_Bool)_isRecursivelyComplete;
@property(readonly, nonatomic) int userAction;
- (id)localizedLocationExplanation;
- (id)localizedCoordinatePickingPrompt;
- (_Bool)requiresSelectingCoordinateImmediately;
- (CDStruct_02837cd9)_initialCoordinatePickingMapRect;
- (_Bool)_isNowComplete;
- (_Bool)isCommentRequired;
- (_Bool)shouldAllowMarkingWrongForItem:(id)arg1;
- (_Bool)requiresValueForCorrectableItem:(id)arg1;
- (id)_userPathItems;
- (int)_problemType;
- (id)correctableItems;
- (id)correctableCoreItems;
- (id)correctableAddress;
@property(readonly, nonatomic) NSString *localizedTypeTitle;
- (void)_fillSubmittableProblem:(id)arg1;
@property(readonly, nonatomic) long long questionCategory;
- (id)localizedCorrectionsPrompt;
@property(readonly, nonatomic) UIImage *image;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSString *localizedDescription;
- (void)resetSelectableTypes;
- (id)_getMyPlaceTypes;
- (id)_getRAPPlaceTypes;
- (id)_initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

