//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKEventEditViewController.h>

@class ADAdSpace, ADHomeButtonHandler;

@interface ADEventEditViewController : EKEventEditViewController
{
    ADAdSpace *_adSpace;
    ADHomeButtonHandler *_homeButtonHandler;
}

@property(retain, nonatomic) ADHomeButtonHandler *homeButtonHandler; // @synthesize homeButtonHandler=_homeButtonHandler;
@property(retain, nonatomic) ADAdSpace *adSpace; // @synthesize adSpace=_adSpace;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)cancelAndDismiss;
- (void)dealloc;

@end
