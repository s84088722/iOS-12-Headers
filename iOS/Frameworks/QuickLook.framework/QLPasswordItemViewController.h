//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuickLook/QLItemViewController.h>

#import <QuickLook/UIDocumentPasswordViewDelegate-Protocol.h>

@class QLPreviewContext;

__attribute__((visibility("hidden")))
@interface QLPasswordItemViewController : QLItemViewController <UIDocumentPasswordViewDelegate>
{
    QLPreviewContext *_context;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)userDidEnterPassword:(id)arg1 forPasswordView:(id)arg2;
- (void)invalidate;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)passwordView;
- (void)loadView;
- (_Bool)canPinchToDismiss;
- (_Bool)canSwipeToDismiss;
- (_Bool)canEnterFullScreen;

@end

