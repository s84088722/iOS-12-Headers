//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import <SafariServices/EKICSPreviewControllerDelegate-Protocol.h>

@class EKICSPreviewController, NSString, NSURL, UIBarButtonItem;

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate>
{
    NSString *_filePath;
    NSURL *_sourceURL;
    UIBarButtonItem *_activityBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    EKICSPreviewController *_icsController;
    CDUnknownBlockType _beforeDismissHandler;
}

@property(copy, nonatomic) CDUnknownBlockType beforeDismissHandler; // @synthesize beforeDismissHandler=_beforeDismissHandler;
- (void).cxx_destruct;
- (void)_updateNavigationBarItems;
- (void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1;
- (void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1;
- (void)_done:(id)arg1;
- (void)_presentActivityViewController:(id)arg1;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

