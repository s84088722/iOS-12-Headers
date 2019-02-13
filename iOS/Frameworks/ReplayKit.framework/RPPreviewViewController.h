//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ReplayKit/RPVideoEditorViewControllerDelegate-Protocol.h>

@class NSURL, RPVideoEditorHostViewController;
@protocol RPPreviewViewControllerDelegate;

@interface RPPreviewViewController : UIViewController <RPVideoEditorViewControllerDelegate>
{
    _Bool _wasStatusBarHidden;
    id <RPPreviewViewControllerDelegate> _previewControllerDelegate;
    long long _mode;
    NSURL *_movieURL;
    RPVideoEditorHostViewController *_hostViewController;
}

+ (void)viewControllerForExtension:(id)arg1 inputItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 attachmentURL:(id)arg2 overrideShareMessage:(id)arg3 overrideTintColor:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)loadPreviewViewControllerWithMovieURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) RPVideoEditorHostViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(retain, nonatomic) NSURL *movieURL; // @synthesize movieURL=_movieURL;
@property(nonatomic) _Bool wasStatusBarHidden; // @synthesize wasStatusBarHidden=_wasStatusBarHidden;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) __weak id <RPPreviewViewControllerDelegate> previewControllerDelegate; // @synthesize previewControllerDelegate=_previewControllerDelegate;
- (void).cxx_destruct;
- (void)extensionDidFinishWithActivityTypes:(id)arg1;
- (void)videoEditor:(id)arg1 didFinishWithActivityTypes:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

@end

