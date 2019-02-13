//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString;
@protocol SVSStarkGatekeeperHeaderViewDelegate;

@interface SVSStarkGatekeeperHeaderView : UIView
{
    id <SVSStarkGatekeeperHeaderViewDelegate> _delegate;
    NSString *_appBundleIdentifier;
}

+ (id)_starkTitleLabel;
+ (double)_headerViewSpacerDistance;
+ (id)gatekeeperForAceObject:(id)arg1;
+ (id)gatekeeperForRequestOptions:(id)arg1;
@property(retain, nonatomic, getter=_appBundleIdentifier, setter=_setAppBundleIdentifier:) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(nonatomic) __weak id <SVSStarkGatekeeperHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (unsigned long long)_gatekeeperTypeForBundleIdentifier:(id)arg1;
- (void)_logGatekeeperDismissedManually;
- (void)logGatekeeperAppeared;
- (void)_updateForAppBundleIdentifier;
- (void)_dismissalButtonTapped:(id)arg1;
- (void)dealloc;
- (id)initWithAceObject:(id)arg1;
- (id)initWithRequestOptions:(id)arg1;
- (id)_init;

@end

