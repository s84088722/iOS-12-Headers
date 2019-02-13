//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccountUI/UITableViewDataSource-Protocol.h>

@class NSArray, NSDictionary, NSString, UITableView;

__attribute__((visibility("hidden")))
@interface VSIdentityProviderTableViewDataSource : NSObject <UITableViewDataSource>
{
    NSString *_titleForTableHeader;
    UITableView *_tableView;
    NSArray *_identityProviders;
    unsigned long long _additionalProvidersMode;
    NSArray *_sections;
    NSDictionary *_destinationsBySectionIndexTitle;
}

@property(copy, nonatomic) NSDictionary *destinationsBySectionIndexTitle; // @synthesize destinationsBySectionIndexTitle=_destinationsBySectionIndexTitle;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) unsigned long long additionalProvidersMode; // @synthesize additionalProvidersMode=_additionalProvidersMode;
@property(copy, nonatomic) NSArray *identityProviders; // @synthesize identityProviders=_identityProviders;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *titleForTableHeader; // @synthesize titleForTableHeader=_titleForTableHeader;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 indexPathForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (void)_scrollToTableHeaderView;
- (id)_textColorForRowAtIndexPath:(id)arg1;
- (long long)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (long long)_cellStyleForRowAtIndexPath:(id)arg1;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (id)_additionalProvidersRowTitle;
- (id)identityProviderForRowAtIndexPath:(id)arg1;
- (unsigned long long)_minimumProviderCountForIndexes;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

