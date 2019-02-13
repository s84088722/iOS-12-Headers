//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <IntentsUI/INUIVoiceShortcutRemoteServingInterface-Protocol.h>
#import <IntentsUI/VCUICreateVoiceShortcutViewControllerDelegate-Protocol.h>
#import <IntentsUI/VCUIEditVoiceShortcutViewControllerDelegate-Protocol.h>
#import <IntentsUI/_UIAppearanceRestriction-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface INUIVoiceShortcutServiceViewController : UIViewController <VCUICreateVoiceShortcutViewControllerDelegate, VCUIEditVoiceShortcutViewControllerDelegate, _UIAppearanceRestriction, INUIVoiceShortcutRemoteServingInterface>
{
    UIViewController *_childViewController;
    NSURL *_containedAppBundleURL;
}

+ (_Bool)_preventsAppearanceProxyCustomization;
+ (_Bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
+ (void)initialize;
@property(retain, nonatomic) NSURL *containedAppBundleURL; // @synthesize containedAppBundleURL=_containedAppBundleURL;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void).cxx_destruct;
- (void)editVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)editVoiceShortcutViewController:(id)arg1 didDeleteVoiceShortcut:(id)arg2;
- (void)editVoiceShortcutViewController:(id)arg1 didSaveWithUpdatedVoiceShortcut:(id)arg2;
- (void)createVoiceShortcutViewControllerDidCancel:(id)arg1;
- (void)createVoiceShortcutViewController:(id)arg1 didCreateVoiceShortcut:(id)arg2;
- (void)buildForEditingVoiceShortcut:(id)arg1;
- (void)buildForAddingShortcut:(id)arg1;
- (void)_stopAccessingAppBundle;
- (void)_startAccessingAppBundle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

