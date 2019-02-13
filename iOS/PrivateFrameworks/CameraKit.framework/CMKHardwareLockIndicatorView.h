//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CameraKit/CMKBadgeTextView.h>

@interface CMKHardwareLockIndicatorView : CMKBadgeTextView
{
    _Bool _focusLocked;
    _Bool _exposureLocked;
}

@property(nonatomic, getter=isExposureLocked) _Bool exposureLocked; // @synthesize exposureLocked=_exposureLocked;
@property(nonatomic, getter=isFocusLocked) _Bool focusLocked; // @synthesize focusLocked=_focusLocked;
- (struct UIEdgeInsets)_textInsets;
- (id)_textAttributes;
- (id)_text;
- (double)_cornerRadius;
- (void)_updateFromHardwareChange;
- (void)_commonCMKHardwareLockIndicatorViewInitialization;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

