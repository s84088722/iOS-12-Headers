//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UICanvas.h>

@interface _UICanvas (AVSecondScreenAdditions)
- (void)_avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2 overscanCompensation:(long long)arg3;
- (void)avkit_setPreferredRefreshRate:(double)arg1 HDRMode:(long long)arg2;
- (void)avkit_resetPreferredModeSwitchRequest;
- (_Bool)avkit_screenHasWindowsExcludingWindow:(id)arg1;
- (_Bool)avkit_isInBackground;
- (long long)avkit_screenType;
@end

