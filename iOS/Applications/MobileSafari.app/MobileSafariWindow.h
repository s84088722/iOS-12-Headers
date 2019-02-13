//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@protocol MobileSafariWindowDelegate;

@interface MobileSafariWindow : UIWindow
{
    _Bool _safariWindowDelegateRespondsToStatusBarChangedFromHeightToHeight;
    _Bool _safariWindowDelegateRespondsToDidEndAllTouchesAtPoint;
    id <MobileSafariWindowDelegate> _safariWindowDelegate;
}

@property(nonatomic) __weak id <MobileSafariWindowDelegate> safariWindowDelegate; // @synthesize safariWindowDelegate=_safariWindowDelegate;
- (void).cxx_destruct;
- (void)sendEvent:(id)arg1;
- (void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2;

@end

