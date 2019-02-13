//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <ContactsUI/CNContactContentViewController-Protocol.h>
#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class NSExtension, NSString;
@protocol CNContactViewControllerPPTDelegate, CNContactViewHostProtocol, NSCopying;

__attribute__((visibility("hidden")))
@interface CNContactViewHostViewController : _UIRemoteViewController <CNContactContentViewController, CNContactViewHostProtocol>
{
    id <CNContactViewHostProtocol> _delegate;
    id <CNContactViewControllerPPTDelegate> _pptDelegate;
    id <NSCopying> _currentRequestIdentifier;
    NSExtension *_extension;
}

+ (_Bool)getViewController:(CDUnknownBlockType)arg1;
+ (id)contextForIdentifier:(id)arg1;
+ (id)contactViewExtension;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) id <NSCopying> currentRequestIdentifier; // @synthesize currentRequestIdentifier=_currentRequestIdentifier;
@property(nonatomic) __weak id <CNContactViewControllerPPTDelegate> pptDelegate; // @synthesize pptDelegate=_pptDelegate;
@property(nonatomic) __weak id <CNContactViewHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)isPresentingEditingController:(_Bool)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)toggleEditing;
- (void)editCancel;
- (void)didChangeToEditMode:(_Bool)arg1;
- (void)setupWithOptions:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (id)protocolContext;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

