//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXNonuniformTransform, PXRegionOfInterest;

@protocol PXZoomAnimationContext <NSObject>
@property(readonly, nonatomic) _Bool keepsSourceRegionOfInterestContent;
@property(readonly, nonatomic, getter=isMatchingRegionsOfInterest) _Bool matchingRegionsOfInterest;
@property(readonly, nonatomic) PXRegionOfInterest *toRegionOfInterest;
@property(readonly, nonatomic) PXNonuniformTransform *toTransform;
@property(readonly, nonatomic) double toAlpha;
@property(readonly, nonatomic) PXRegionOfInterest *fromRegionOfInterest;
@property(readonly, nonatomic) PXNonuniformTransform *fromTransform;
@property(readonly, nonatomic) double fromAlpha;
@property(readonly, nonatomic) double animationDuration;
@property(readonly, nonatomic) long long animationType;
- (void)registerCleanupHandler:(void (^)(void))arg1;
- (void)didEndAnimation:(long long)arg1;
- (long long)willBeginAnimation;
@end

