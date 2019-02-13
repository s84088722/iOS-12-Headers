//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsUI/NSCopying-Protocol.h>
#import <ContactsUI/NSObject-Protocol.h>

@class CNContact, CNContactFilter, CNContactFormatter, CNContactStore, NSArray, NSDictionary, NSIndexPath, NSString;
@protocol CNContactDataSourceDelegate;

@protocol CNContactDataSource <NSObject, NSCopying>
@property(readonly, nonatomic) _Bool canReload;
@property(nonatomic) __weak id <CNContactDataSourceDelegate> delegate;
@property(readonly, nonatomic) NSArray *indexSections;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) NSDictionary *contactMatchInfos;
@property(readonly, nonatomic) NSArray *contacts;
- (NSIndexPath *)indexPathForContact:(CNContact *)arg1;
- (CNContact *)completeContactFromContact:(CNContact *)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(NSArray *)arg3;

@optional
@property(readonly, nonatomic) _Bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property(retain, nonatomic) CNContactFormatter *contactFormatter;
@property(readonly, nonatomic) CNContactFilter *effectiveFilter;
@property(copy, nonatomic) CNContactFilter *filter;
@property(readonly, nonatomic) CNContactStore *store;
@property(readonly, nonatomic) NSString *displayName;
- (void)invalidate;
- (_Bool)isLoading;
- (void)reset;
- (void)reload;
@end

