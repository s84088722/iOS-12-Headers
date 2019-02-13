//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSExtensionContext.h>

#import <QuickLook/QLRemotePreviewHost-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface QLRemotePreviewServiceContext : NSExtensionContext <QLRemotePreviewHost>
{
    _Bool _isObservingPreviewController;
    id _contents;
}

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidateService;
- (void)_stopObservingPreviewControllerAttributeChanges;
- (void)_startObservingPreviewControllerAttributeChanges;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setHostViewControllerProxy:(id)arg1;
- (void)getPrinterProxyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setAppearance:(id)arg1 animated:(_Bool)arg2;
- (void)previewDidDisappear:(_Bool)arg1;
- (void)previewWillDisappear:(_Bool)arg1;
- (void)previewDidAppear:(_Bool)arg1;
- (void)previewWillAppear:(_Bool)arg1;
- (void)previewControllerDidUpdatePreferredContentSize:(id)arg1;
- (void)previewControllerDidUpdateTitle:(id)arg1;
- (void)previewControllerWantsFullScreen:(_Bool)arg1;
- (id)previewViewController;
- (id)protocolHost;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

