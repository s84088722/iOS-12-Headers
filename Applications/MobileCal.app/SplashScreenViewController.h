//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses-Protocol.h"

@class NSString;

@interface SplashScreenViewController : UIViewController <ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses>
{
    CDUnknownBlockType _doneBlock;
}

@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (void).cxx_destruct;
- (void)_continueButtonTappedCallback;
- (_Bool)isImmuneToCustomAdaptation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
