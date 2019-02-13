//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRFeedCollectionViewLayoutSectionDescriptorProviding-Protocol.h"

@class FRSectionHeaderButtonController, NSString;
@protocol FRFeldsparContext, TSForYouGroupSizeCalculatorType;

@interface FRLayoutSectionDescriptorGroupManager : NSObject <FRFeedCollectionViewLayoutSectionDescriptorProviding>
{
    long long _feedType;
    id <FRFeldsparContext> _feldsparContext;
    FRSectionHeaderButtonController *_buttonController;
    id <TSForYouGroupSizeCalculatorType> _groupSizeCalculator;
}

@property(retain, nonatomic) id <TSForYouGroupSizeCalculatorType> groupSizeCalculator; // @synthesize groupSizeCalculator=_groupSizeCalculator;
@property(retain, nonatomic) FRSectionHeaderButtonController *buttonController; // @synthesize buttonController=_buttonController;
@property(nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(nonatomic) long long feedType; // @synthesize feedType=_feedType;
- (void).cxx_destruct;
- (id)layoutSectionDescriptorForGroup:(id)arg1 inFirstPosition:(_Bool)arg2 withTopMostGroup:(id)arg3 feedSettings:(id)arg4;
- (id)initWithFeedType:(long long)arg1 feldsparContext:(id)arg2 buttonController:(id)arg3 groupSizeCalculator:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

