//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InputContext/_ICLexiconManaging-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, _ICNamedEntityStore;
@protocol OS_dispatch_queue;

@interface _ICLexiconManager : NSObject <_ICLexiconManaging>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    struct _opaque_pthread_mutex_t _contactsCallbackLock;
    struct _opaque_pthread_mutex_t _namedEntityCallbackLock;
    NSArray *_sources;
    NSMutableDictionary *_contacts;
    NSMutableArray *_contactObservers;
    int _contactChangeCount;
    _ICNamedEntityStore *_namedEntityStore;
    int _contactLoadState;
    int _namedEntityLoadState;
}

+ (unsigned long long)countWords:(id)arg1;
@property int namedEntityLoadState; // @synthesize namedEntityLoadState=_namedEntityLoadState;
@property int contactLoadState; // @synthesize contactLoadState=_contactLoadState;
- (void).cxx_destruct;
- (int)debugEntityLoadState;
- (unsigned long long)getContactCount;
- (void)printLexiconToNSLog:(struct _LXLexicon *)arg1;
- (void)hibernate;
- (void)warmUp;
- (void)completeRecentContacts;
- (void)handleRecentContact:(id)arg1;
- (void)setupRecentContacts;
- (void)completeContacts;
- (void)handleContact:(id)arg1;
- (void)setupContacts;
- (void)completeRecentNamedEntities;
- (void)handleRecentNamedEntity:(id)arg1;
- (void)setupRecentNamedEntities;
- (void)completeNamedEntities;
- (void)handleNamedEntity:(id)arg1;
- (void)setupNamedEntities;
- (void)resetNamedEntities;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)removeContactObserver:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)addContactObserver:(CDUnknownBlockType)arg1;
- (void)unloadLexicons;
- (id)loadLexiconsUsingFilter:(CDUnknownBlockType)arg1;
- (id)loadLexicons:(CDUnknownBlockType)arg1;
- (void)backgroundLoadLexiconsUsingFilter:(CDUnknownBlockType)arg1;
- (void)changeNamedEntityLoadingState:(int)arg1;
- (void)changeContactLoadingState:(int)arg1;
- (id)stateName:(int)arg1;
- (void)doLoadLexicon;
- (void)dealloc;
- (id)initWithLexiconSources:(id)arg1;

@end

