//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICNoteVisibilityTesting-Protocol.h>

@class ICAccount, ICNote, NSArray, NSPredicate, NSString;
@protocol ICNoteVisibilityTesting;

@protocol ICNoteContainer <ICNoteVisibilityTesting>
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (id <ICNoteVisibilityTesting>)noteVisibilityTestingForSearchingAccount;
- (_Bool)isDeleted;
- (_Bool)canBeSharedViaICloud;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (_Bool)supportsEditingNotes;
- (NSString *)accountName;
- (NSString *)titleForTableViewCell;
- (NSString *)titleForNavigationBar;
- (unsigned long long)visibleNotesCount;
- (NSArray *)visibleNotes;
- (_Bool)noteIsVisible:(ICNote *)arg1;
@end
