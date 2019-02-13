//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/CNPropertyAction.h>

#import <ContactsUI/CNUIFavoritesEntryPickerDelegate-Protocol.h>

@class CNUIFavoritesEntryPicker, NSString;

__attribute__((visibility("hidden")))
@interface CNContactAddFavoriteAction : CNPropertyAction <CNUIFavoritesEntryPickerDelegate>
{
    CNUIFavoritesEntryPicker *_favoritesEntryPicker;
}

@property(retain, nonatomic) CNUIFavoritesEntryPicker *favoritesEntryPicker; // @synthesize favoritesEntryPicker=_favoritesEntryPicker;
- (void).cxx_destruct;
- (void)_saveFavorite:(id)arg1;
- (void)favoritesEntryPicker:(id)arg1 didPickEntry:(id)arg2;
- (void)performActionWithSender:(id)arg1;
- (_Bool)canPerformAction;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

