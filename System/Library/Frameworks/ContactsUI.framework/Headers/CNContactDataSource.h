/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:29:57 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary, NSString, CNContactStore, CNContactFilter, CNContactFormatter;


@protocol CNContactDataSource <NSObject,NSCopying>
@property (nonatomic,readonly) NSArray * contacts; 
@property (nonatomic,readonly) NSDictionary * contactMatchInfos; 
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,readonly) NSArray * indexSections; 
@property (assign,nonatomic,__weak) id<CNContactDataSourceDelegate> delegate; 
@property (nonatomic,readonly) BOOL canReload; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) CNContactStore * store; 
@property (nonatomic,copy) CNContactFilter * filter; 
@property (nonatomic,readonly) CNContactFilter * effectiveFilter; 
@property (nonatomic,retain) CNContactFormatter * contactFormatter; 
@property (nonatomic,readonly) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled; 
@optional
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(id)arg1;
-(BOOL)shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
-(CNContactFilter *)effectiveFilter;
-(CNContactStore *)store;
-(void)reset;
-(void)invalidate;
-(CNContactFilter *)filter;
-(void)setFilter:(id)arg1;
-(NSString *)displayName;
-(void)reload;
-(BOOL)isLoading;

@required
-(id)indexPathForContact:(id)arg1;
-(id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(BOOL)arg2 keysToFetch:(id)arg3;
-(NSDictionary *)contactMatchInfos;
-(NSArray *)indexSections;
-(NSArray *)contacts;
-(BOOL)canReload;
-(void)setDelegate:(id)arg1;
-(id<CNContactDataSourceDelegate>)delegate;
-(NSArray *)sections;

@end
