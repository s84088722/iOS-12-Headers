//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ReplayKit/RPVideoEditorExtensionHostProtocol-Protocol.h>

@class RPPreviewViewController, RPVideoEditorExtensionHostContext;

@interface RPVideoEditorHostViewController : _UIRemoteViewController <RPVideoEditorExtensionHostProtocol>
{
    RPPreviewViewController *_previewViewController;
    RPVideoEditorExtensionHostContext *_hostContext;
}

@property(retain, nonatomic) RPVideoEditorExtensionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property(nonatomic) __weak RPPreviewViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithActivityTypes:(id)arg1;

@end

