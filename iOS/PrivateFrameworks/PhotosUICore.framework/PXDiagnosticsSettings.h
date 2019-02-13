//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXDiagnosticsSettings : PXSettings
{
    _Bool _enableContextualGesture;
    _Bool _enableGenericService;
    _Bool _enableMemoriesRelatedService;
    _Bool _enableTitleFontService;
    _Bool _enableCompleteMyMomentService;
    _Bool _simulateLaunchedToTest;
    _Bool _enableScrollService;
    double _scrollSpeed;
    long long _scrollIterations;
}

+ (id)sharedInstance;
+ (id)settingsControllerModule;
@property(nonatomic) long long scrollIterations; // @synthesize scrollIterations=_scrollIterations;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) _Bool enableScrollService; // @synthesize enableScrollService=_enableScrollService;
@property(nonatomic) _Bool simulateLaunchedToTest; // @synthesize simulateLaunchedToTest=_simulateLaunchedToTest;
@property(nonatomic) _Bool enableCompleteMyMomentService; // @synthesize enableCompleteMyMomentService=_enableCompleteMyMomentService;
@property(nonatomic) _Bool enableTitleFontService; // @synthesize enableTitleFontService=_enableTitleFontService;
@property(nonatomic) _Bool enableMemoriesRelatedService; // @synthesize enableMemoriesRelatedService=_enableMemoriesRelatedService;
@property(nonatomic) _Bool enableGenericService; // @synthesize enableGenericService=_enableGenericService;
@property(nonatomic) _Bool enableContextualGesture; // @synthesize enableContextualGesture=_enableContextualGesture;
- (void)setDefaultValues;
- (id)parentSettings;

@end

