//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/CPBannerDelegate-Protocol.h>
#import <CarPlaySupport/CPSSafeAreaDelegate-Protocol.h>
#import <CarPlaySupport/CPSTemplateViewControllerDelegate-Protocol.h>
#import <CarPlaySupport/CPTemplateProviding-Protocol.h>
#import <CarPlaySupport/NSXPCListenerDelegate-Protocol.h>
#import <CarPlaySupport/UINavigationControllerDelegate-Protocol.h>

@class CPSApplicationStateMonitor, CPSBannerSource, CPSMapTemplateViewController, CPSOverlayViewController, FBScene, NSMutableDictionary, NSString, NSUUID, NSXPCConnection, NSXPCListener;
@protocol CPSTemplateInstanceDelegate, CPTemplateServiceClientInterface;

@interface CPSTemplateInstance : NSObject <NSXPCListenerDelegate, CPTemplateProviding, UINavigationControllerDelegate, CPSTemplateViewControllerDelegate, CPSSafeAreaDelegate, CPBannerDelegate>
{
    NSString *_sceneIdentifier;
    CPSOverlayViewController *_overlayViewController;
    id <CPSTemplateInstanceDelegate> _delegate;
    FBScene *_scene;
    NSXPCListener *_listener;
    NSMutableDictionary *_identifierToViewControllerDictionary;
    CPSBannerSource *_bannerSource;
    CPSMapTemplateViewController *_rootMapController;
    id <CPTemplateServiceClientInterface> _remoteObjectProxy;
    CPSApplicationStateMonitor *_applicationStateMonitor;
    NSXPCConnection *_connection;
    NSUUID *_actionSheetIdentifier;
}

@property(copy, nonatomic) NSUUID *actionSheetIdentifier; // @synthesize actionSheetIdentifier=_actionSheetIdentifier;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // @synthesize applicationStateMonitor=_applicationStateMonitor;
@property(retain, nonatomic) id <CPTemplateServiceClientInterface> remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
@property(retain, nonatomic) CPSMapTemplateViewController *rootMapController; // @synthesize rootMapController=_rootMapController;
@property(retain, nonatomic) CPSBannerSource *bannerSource; // @synthesize bannerSource=_bannerSource;
@property(retain, nonatomic) NSMutableDictionary *identifierToViewControllerDictionary; // @synthesize identifierToViewControllerDictionary=_identifierToViewControllerDictionary;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(nonatomic) __weak FBScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) __weak id <CPSTemplateInstanceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CPSOverlayViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
- (void).cxx_destruct;
- (void)updateInterestingInsets:(struct UIEdgeInsets)arg1;
- (void)updateSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)templateViewControllerDidDismiss:(id)arg1;
- (void)templateViewControllerDidPop:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)whitelistClassesForBaseTemplateProvider:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)getPresentedTemplateWithReply:(CDUnknownBlockType)arg1;
- (void)getTemplatesWithReply:(CDUnknownBlockType)arg1;
- (void)getTopTemplateWithReply:(CDUnknownBlockType)arg1;
- (void)dismissTemplateAnimated:(id)arg1;
- (void)popTemplateAnimated:(id)arg1;
- (void)popToRootTemplateAnimated:(id)arg1;
- (void)popToTemplate:(id)arg1 animated:(id)arg2;
- (void)containsTemplate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)presentVoiceTemplate:(id)arg1 animated:(id)arg2;
- (void)requestVoiceControlProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pushSearchTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)requestSearchTemplateProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pushListTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)requestListTemplateProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pushMapTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)requestMapTemplateProviderForTemplate:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)pushGridTemplate:(id)arg1 animated:(id)arg2 presentationStyle:(unsigned long long)arg3;
- (void)requestGridTemplateProviderForInterface:(id)arg1 withProxyDelegate:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dismissAlertAnimated:(_Bool)arg1;
- (void)requestBannerProviderWithReply:(CDUnknownBlockType)arg1;
- (void)presentAlertTemplate:(id)arg1 withProxyDelegate:(id)arg2;
- (void)presentActionSheetTemplate:(id)arg1 withProxyDelegate:(id)arg2 animated:(id)arg3;
- (void)bannerDidDisappearWithIdentifier:(id)arg1;
- (void)bannerDidAppearWithIdentifier:(id)arg1;
- (void)bannerTappedWithIdentifier:(id)arg1;
- (id)endpoint;
- (void)dealloc;
- (id)initWithSceneIdentifier:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

