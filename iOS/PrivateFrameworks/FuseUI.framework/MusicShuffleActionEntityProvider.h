//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityProviding-Protocol.h>

@class MusicShuffleActionEntityValueProvider, NSString;
@protocol MusicEntityProviding;

@interface MusicShuffleActionEntityProvider : NSObject <MusicEntityProviding>
{
    _Bool _editing;
    _Bool _hasShuffleAction;
    MusicShuffleActionEntityValueProvider *_shuffleActionEntityValueProvider;
    id <MusicEntityProviding> _sourceEntityProvider;
}

@property(readonly, nonatomic) id <MusicEntityProviding> sourceEntityProvider; // @synthesize sourceEntityProvider=_sourceEntityProvider;
- (void).cxx_destruct;
- (id)_shuffleActionEntityValueProvider;
- (void)_reloadHasShuffleActionAllowingInvalidation:(_Bool)arg1;
- (void)_sourceEntityProviderDidInvalidateNotification:(id)arg1;
- (_Bool)hasShuffleAction;
- (_Bool)setEditing:(_Bool)arg1;
- (unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (unsigned long long)numberOfIndexBarEntries;
- (unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1;
- (id)indexPathForEntityValueContext:(id)arg1;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (_Bool)hasEntitiesNotInLibrary;
- (_Bool)hasEntities;
- (id)entityValueProviderAtIndexPath:(id)arg1;
- (void)configureSectionEntityValueContextOutput:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (void)configureEntityValueContextOutputForAnyIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithSourceEntityProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

