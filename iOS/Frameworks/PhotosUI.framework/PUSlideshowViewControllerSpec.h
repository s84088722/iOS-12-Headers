//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewControllerSpec.h>

@class PUSlideshowViewControllerSpecChange;

__attribute__((visibility("hidden")))
@interface PUSlideshowViewControllerSpec : PUViewControllerSpec
{
    _Bool _isChromeVisible;
    _Bool _isAirplayScreenAvailable;
    _Bool _isAirplayRouteAvailable;
    _Bool _shouldShowChromeBars;
    _Bool _shouldShowPlaceholder;
    _Bool _shouldObserveAirplayRoute;
    _Bool _shouldShowAirplayButton;
    unsigned long long _mode;
}

@property(nonatomic, setter=_setShouldShowAirplayButton:) _Bool shouldShowAirplayButton; // @synthesize shouldShowAirplayButton=_shouldShowAirplayButton;
@property(nonatomic, setter=_setShouldObserveAirplayRoute:) _Bool shouldObserveAirplayRoute; // @synthesize shouldObserveAirplayRoute=_shouldObserveAirplayRoute;
@property(nonatomic, setter=_setShouldShowPlaceholder:) _Bool shouldShowPlaceholder; // @synthesize shouldShowPlaceholder=_shouldShowPlaceholder;
@property(nonatomic, setter=_setShouldShowChromeBars:) _Bool shouldShowChromeBars; // @synthesize shouldShowChromeBars=_shouldShowChromeBars;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic, setter=setAirplayRouteAvailable:) _Bool isAirplayRouteAvailable; // @synthesize isAirplayRouteAvailable=_isAirplayRouteAvailable;
@property(nonatomic, setter=setAirplayScreenAvailable:) _Bool isAirplayScreenAvailable; // @synthesize isAirplayScreenAvailable=_isAirplayScreenAvailable;
@property(nonatomic, setter=setChromeVisible:) _Bool isChromeVisible; // @synthesize isChromeVisible=_isChromeVisible;
@property(readonly, nonatomic) _Bool shouldPauseWhenAppResignsActive;
@property(readonly, nonatomic) _Bool shouldRegisterToAirplay;
@property(readonly, nonatomic) _Bool shouldUseTapGesture;
@property(readonly, nonatomic) _Bool shouldUseChromeBars;
- (void)updateIfNeeded;
- (id)initWithMode:(unsigned long long)arg1;
- (id)init;
@property(readonly, nonatomic) PUSlideshowViewControllerSpecChange *currentChange;
- (id)newSpecChange;

@end

