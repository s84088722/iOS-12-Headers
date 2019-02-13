//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

#import <WebKit/UIKeyInput-Protocol.h>

@class NSString, UITextInputPasswordRules, WKContentView, WKSelectPopover;

__attribute__((visibility("hidden")))
@interface WKSelectTableViewController : UITableViewController <UIKeyInput>
{
    unsigned long long _singleSelectionIndex;
    unsigned long long _singleSelectionSection;
    long long _numberOfSections;
    _Bool _allowsMultipleSelection;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    WKSelectPopover *_popover;
    WKContentView *_contentView;
}

@property(nonatomic) WKSelectPopover *popover; // @synthesize popover=_popover;
- (void)deleteBackward;
- (void)insertText:(id)arg1;
@property(readonly, nonatomic) _Bool hasText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct OptionItem *)findItemAt:(id)arg1;
- (long long)findItemIndexAt:(id)arg1;
- (void)populateCell:(id)arg1 withItem:(const struct OptionItem *)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end

