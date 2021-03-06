//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityProviding-Protocol.h>
#import <FuseUI/NSCoding-Protocol.h>

@class MPMediaQuery, MusicMediaQueryDataSource, NSArray, NSSet, NSString;

@interface MusicMediaEntityProvider : NSObject <MusicEntityProviding, NSCoding>
{
    NSArray *_localizedSectionIndexTitles;
    MusicMediaQueryDataSource *_mediaQueryDataSource;
    NSSet *_requiredVisibilityPrioritySectionIndexTitles;
    long long _maximumItemCount;
}

@property(readonly, nonatomic) MusicMediaQueryDataSource *mediaQueryDataSource; // @synthesize mediaQueryDataSource=_mediaQueryDataSource;
@property(nonatomic) long long maximumItemCount; // @synthesize maximumItemCount=_maximumItemCount;
- (void).cxx_destruct;
- (id)_requiredVisibilityPrioritySectionIndexTitles;
- (id)_localizedSectionIndexTitles;
- (void)_loadSectionIndexTitleDataIfNeeded;
- (void)_configureEntityValueContextOutput:(id)arg1 forGlobalIndex:(unsigned long long)arg2;
- (void)_handleMediaQueryDataSourceDidInvalidate;
- (void)handleDeleteChangeRecord:(id)arg1;
- (void)_dataSourceWasInvalidated:(id)arg1;
@property(readonly, nonatomic) unsigned long long totalEntityCount;
@property(retain, nonatomic) MPMediaQuery *mediaQuery;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)setEditing:(_Bool)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)hasMultipleEntitiesIncludingStoreContent;
- (_Bool)hasExplicitContent;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasEntities;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (id)additionalPropertiesToFetchSynchronouslyForEntityValueContext:(id)arg1;
- (void)dealloc;
- (id)initWithMediaQueryDataSource:(id)arg1;
- (id)initWithMediaQuery:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

