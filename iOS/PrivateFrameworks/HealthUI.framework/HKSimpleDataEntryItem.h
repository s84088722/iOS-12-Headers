//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;

@interface HKSimpleDataEntryItem : NSObject
{
    id <HKSimpleDataEntryItemDelegate> _delegate;
    id <HKSimpleDataEntryItemToolbarDelegate> _toolbarDelegate;
    unsigned long long _placeholderType;
}

@property(nonatomic) unsigned long long placeholderType; // @synthesize placeholderType=_placeholderType;
@property(nonatomic) __weak id <HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
@property(nonatomic) __weak id <HKSimpleDataEntryItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)toolbarDoneButtonPressed:(id)arg1;
- (void)toolbarNextButtonPressed:(id)arg1;
- (void)toolbarPrevButtonPressed:(id)arg1;
- (id)accessoryToolbar;
- (void)localeDidChange:(id)arg1;
- (void)beginEditing;
- (void)updateCellDisplay;
- (id)cell;
- (id)formattedKeyAndValue;

@end

