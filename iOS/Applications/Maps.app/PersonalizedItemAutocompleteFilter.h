//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PersonalizedItemSource.h"

#import "PersonalizedItemManagerObserver-Protocol.h"

@class NSArray, NSObject, NSString, PersonalizedItemManager;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PersonalizedItemAutocompleteFilter : PersonalizedItemSource <PersonalizedItemManagerObserver>
{
    NSArray *_personalizedItems;
    NSArray *_matchingItems;
    NSObject<OS_dispatch_queue> *_lock;
    _Bool _hasItemsWhenSearchStringIsEmpty;
    PersonalizedItemManager *_inputItems;
    NSString *_searchString;
}

@property(nonatomic) _Bool hasItemsWhenSearchStringIsEmpty; // @synthesize hasItemsWhenSearchStringIsEmpty=_hasItemsWhenSearchStringIsEmpty;
@property(retain, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(retain, nonatomic) PersonalizedItemManager *inputItems; // @synthesize inputItems=_inputItems;
- (void).cxx_destruct;
- (void)personalizedItemManager:(id)arg1 didChangeItems:(id)arg2;
- (void)personalizedItemManagerWillChangeItems:(id)arg1;
- (id)allItems;
- (void)_invalidateResults;
- (void)dealloc;
- (id)init;

@end

