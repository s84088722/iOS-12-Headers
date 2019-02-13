//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNContactContentViewController.h>

#import <ContactsUI/CNContactViewControllerPPTDelegate-Protocol.h>
#import <ContactsUI/CNContactViewHostProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNContactViewServiceViewController : CNContactContentViewController <CNContactViewHostProtocol, CNContactViewControllerPPTDelegate>
{
}

- (void)viewDidAppearForContactViewController:(id)arg1;
- (void)viewDidAppear;
- (void)didChangePreferredContentSize:(struct CGSize)arg1;
- (void)isPresentingEditingController:(_Bool)arg1;
- (void)isPresentingFullscreen:(_Bool)arg1;
- (void)didDeleteContact:(id)arg1;
- (void)didCompleteWithContact:(id)arg1;
- (void)updateEditing:(_Bool)arg1 doneButtonEnabled:(_Bool)arg2 doneButtonText:(id)arg3;
- (_Bool)shouldPerformDefaultActionForContact:(id)arg1 propertyKey:(id)arg2 propertyIdentifier:(id)arg3;
- (_Bool)isOutOfProcess;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

