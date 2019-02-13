//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor;

@interface PXRoundedCornerOverlayView : UIImageView
{
    _Bool _isPerformingChanges;
    _Bool _isPerformingUpdates;
    struct {
        _Bool image;
    } _needsUpdateFlags;
    _Bool _continuousCorners;
    double _cornerRadius;
    unsigned long long _cornersToRound;
    UIColor *_overlayColor;
    double _displayScale;
}

@property(readonly, nonatomic) double displayScale; // @synthesize displayScale=_displayScale;
@property(readonly, nonatomic) UIColor *overlayColor; // @synthesize overlayColor=_overlayColor;
@property(readonly, nonatomic) _Bool continuousCorners; // @synthesize continuousCorners=_continuousCorners;
@property(readonly, nonatomic) unsigned long long cornersToRound; // @synthesize cornersToRound=_cornersToRound;
@property(readonly, nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
- (void).cxx_destruct;
- (void)_updateImageIfNeeded;
- (void)_invalidateImage;
- (void)_setNeedsUpdate;
- (_Bool)_needsUpdate;
- (void)_updateIfNeeded;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)mutableChangeObject;
- (void)setDisplayScale:(double)arg1;
- (void)setOverlayColor:(id)arg1;
- (void)setContinuousCorners:(_Bool)arg1;
- (void)setCornersToRound:(unsigned long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

