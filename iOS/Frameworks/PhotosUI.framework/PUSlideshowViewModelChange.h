//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUSlideshowViewModelChange : PUViewModelChange
{
    _Bool _currentStateDidChange;
    _Bool _wantsChromeVisibleDidChange;
}

@property(nonatomic, setter=_setWantsChromeVisibleDidChange:) _Bool wantsChromeVisibleDidChange; // @synthesize wantsChromeVisibleDidChange=_wantsChromeVisibleDidChange;
@property(nonatomic, setter=_setCurrentStateDidChange:) _Bool currentStateDidChange; // @synthesize currentStateDidChange=_currentStateDidChange;
- (_Bool)hasChanges;

@end

