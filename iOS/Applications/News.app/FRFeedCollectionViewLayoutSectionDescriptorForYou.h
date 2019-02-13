//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FRFeedCollectionViewLayoutSectionDescriptor.h"

#import "FRCollectionHeaderReusableViewDisplayable-Protocol.h"

@class FCFeedDescriptor, FCFeedGroup, FRSectionHeaderButtonController, NSString, UICollectionViewLayoutAttributes, UIColor, UIFont;
@protocol FRFeldsparContext;

@interface FRFeedCollectionViewLayoutSectionDescriptorForYou : FRFeedCollectionViewLayoutSectionDescriptor <FRCollectionHeaderReusableViewDisplayable>
{
    _Bool _willNeedUpdateOnGroupShiftFromTopOfFeed;
    _Bool _allowNativeAds;
    NSString *_sectionTitle;
    NSString *_sectionSubtitle;
    NSString *_footerTitle;
    UICollectionViewLayoutAttributes *_layoutAttributesForHeader;
    UICollectionViewLayoutAttributes *_layoutAttributesForFooter;
    long long _groupType;
    FCFeedGroup *_feedGroup;
    FCFeedDescriptor *_L2FeedDescriptor;
    id <FRFeldsparContext> _feldsparContext;
    UIColor *_sectionColor;
    long long _headerStyle;
    unsigned long long _subscriptionOrigin;
    FRSectionHeaderButtonController *_buttonController;
}

@property(nonatomic) _Bool allowNativeAds; // @synthesize allowNativeAds=_allowNativeAds;
@property(retain, nonatomic) FRSectionHeaderButtonController *buttonController; // @synthesize buttonController=_buttonController;
@property(nonatomic) _Bool willNeedUpdateOnGroupShiftFromTopOfFeed; // @synthesize willNeedUpdateOnGroupShiftFromTopOfFeed=_willNeedUpdateOnGroupShiftFromTopOfFeed;
@property(nonatomic) unsigned long long subscriptionOrigin; // @synthesize subscriptionOrigin=_subscriptionOrigin;
@property(nonatomic) long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property(copy, nonatomic) UIColor *sectionColor; // @synthesize sectionColor=_sectionColor;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
@property(copy, nonatomic) FCFeedDescriptor *L2FeedDescriptor; // @synthesize L2FeedDescriptor=_L2FeedDescriptor;
@property(copy, nonatomic) FCFeedGroup *feedGroup; // @synthesize feedGroup=_feedGroup;
@property(nonatomic) long long groupType; // @synthesize groupType=_groupType;
- (id)footerTitle;
- (id)sectionSubtitle;
- (id)sectionTitle;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) UIColor *subtitleColor;
@property(readonly, nonatomic) UIFont *subtitleFont;
@property(readonly, nonatomic) UIFont *titleFont;
- (unsigned long long)_generateSubscriptionOriginForSectionWithFeedDescriptor:(id)arg1 subscriptionList:(id)arg2;
- (_Bool)shouldPresentCollapsed;
@property(readonly, nonatomic) unsigned long long groupFormationReason;
- (id)layoutAttributesForFooter;
- (id)layoutAttributesForBackground;
- (id)layoutAttributesForHeader;
- (_Bool)subscriptionIsToTopic;
@property(readonly, nonatomic) long long layoutType;
- (Class)layoutAttributesClass;
- (long long)sectionFooterStyle;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)sectionThemeColor;
- (_Bool)supportsNativeAds;
- (_Bool)mayNeedUpdateOnGroupShiftFromTopOfFeed;
- (id)initWithFeedSettings:(id)arg1 group:(id)arg2 feedLayoutSearchConfiguration:(id)arg3 headerStyle:(long long)arg4 buttonController:(id)arg5 feldsparContext:(id)arg6;
- (id)initWithFeedSettings:(id)arg1 feedLayoutSearchConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

