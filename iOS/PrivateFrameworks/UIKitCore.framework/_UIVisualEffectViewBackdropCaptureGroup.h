//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPointerArray, NSString;

@interface _UIVisualEffectViewBackdropCaptureGroup : NSObject
{
    NSPointerArray *_backdrops;
    _Bool _disableInPlaceFiltering;
    NSString *_groupName;
    double _scale;
    double _minimumScale;
}

@property(nonatomic) _Bool disableInPlaceFiltering; // @synthesize disableInPlaceFiltering=_disableInPlaceFiltering;
@property(nonatomic) double minimumScale; // @synthesize minimumScale=_minimumScale;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_allowInPlaceFiltering;
- (void)_applyScaleHint:(double)arg1;
- (void)updateAllBackdropViews;
- (void)removeBackdrop:(id)arg1 update:(_Bool)arg2;
- (void)addBackdrop:(id)arg1 update:(_Bool)arg2;
- (long long)indexOfBackdropView:(id)arg1;
- (id)initWithBackdrop:(id)arg1;
- (id)init;

@end

