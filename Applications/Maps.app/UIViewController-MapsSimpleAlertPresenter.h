//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SimpleAlertPresenter-Protocol.h"

@class NSString;

@interface UIViewController (MapsSimpleAlertPresenter) <SimpleAlertPresenter>
- (void)_maps_presentSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissalActionTitle:(id)arg3;
- (void)_maps_presentSimpleAlertWithTitle:(id)arg1 message:(id)arg2 dismissalActionTitle:(id)arg3 dismissalHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
