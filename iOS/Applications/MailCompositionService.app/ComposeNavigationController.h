//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "MFApplicationSceneActor-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class MFMailComposeController, NSString;
@protocol MFMailComposeViewControllerDelegate;

@interface ComposeNavigationController : UINavigationController <UINavigationControllerDelegate, MFApplicationSceneActor>
{
    MFMailComposeController *_composeViewController;
}

+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;
+ (_Bool)hasAutosavedMessageWithIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)securityScopeForURL:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)serializedPlaceholderForURL:(id)arg1 mimeType:(id)arg2 contentID:(id)arg3 withHandler:(CDUnknownBlockType)arg4;
- (void)serializedPlaceholderForData:(id)arg1 fileName:(id)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)serializedPlaceholderForFileName:(id)arg1 fileSize:(long long)arg2 mimeType:(id)arg3 contentID:(id)arg4 withHandler:(CDUnknownBlockType)arg5;
- (void)scrollToTopAnimated:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (id)withdrawlGestureExclusionRects;
- (struct CGRect)withdrawalGestureEngagementRect;
- (id)localizedIdentificationString;
- (void)willBecomeActiveSceneActor;
- (void)prepareToBeWithdrawnAsActiveSceneActor;
- (void)setTopBarDocked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)autosaveWithHandler:(CDUnknownBlockType)arg1;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (int)resolution;
- (_Bool)isDirty;
- (id)_mailComposeView;
- (id)_mailComposeController;
- (struct CGRect)frameForAttachmentWithIdentifier:(id)arg1;
- (void)_setCompositionContext:(id)arg1;
- (void)setInitialTitle:(id)arg1;
- (void)setContentVisible:(_Bool)arg1;
@property(nonatomic) id <MFMailComposeViewControllerDelegate> mailComposeDelegate;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)view;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)initWithComposition:(id)arg1 mailComposeControllerOptions:(unsigned long long)arg2;
- (id)initWithComposition:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

