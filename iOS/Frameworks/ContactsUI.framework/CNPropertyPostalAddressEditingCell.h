//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyEditingCell.h>

@class CNPostalAddressEditorView, UIColor;

__attribute__((visibility("hidden")))
@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell
{
    CNPostalAddressEditorView *_addressEditor;
}

@property(retain, nonatomic) CNPostalAddressEditorView *addressEditor; // @synthesize addressEditor=_addressEditor;
- (void).cxx_destruct;
- (void)layoutMarginsDidChange;
- (void)setBackgroundColor:(id)arg1;
@property(copy, nonatomic) UIColor *editorSeparatorColor;
- (void)layoutChanged:(id)arg1;
- (void)valueChanged:(id)arg1;
- (void)updateWithPropertyItem:(id)arg1;
- (void)setPresentingDelegate:(id)arg1;
- (id)valueView;
- (id)firstResponderItem;
- (double)leftValueMargin;
- (id)variableConstraints;

@end

