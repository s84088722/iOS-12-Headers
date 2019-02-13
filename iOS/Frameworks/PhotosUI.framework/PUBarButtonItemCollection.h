//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSCache, NSDictionary, NSIndexSet, NSMutableDictionary, UIBarButtonItem;
@protocol PUBarButtonItemCollectionDataSource;

__attribute__((visibility("hidden")))
@interface PUBarButtonItemCollection : NSObject
{
    NSArray *_identifiersOrder;
    NSIndexSet *_centeredItemIdentifiers;
    id <PUBarButtonItemCollectionDataSource> _dataSource;
    unsigned long long __options;
    NSCache *__configurationsCache;
    NSMutableDictionary *__barButtonItems;
    NSIndexSet *__previousRequestedSet;
    NSArray *__previousResult;
    UIBarButtonItem *__flexibleSpaceBarButtonItem;
    UIBarButtonItem *__placeholderBarButtonItem;
}

@property(readonly, nonatomic) UIBarButtonItem *_placeholderBarButtonItem; // @synthesize _placeholderBarButtonItem=__placeholderBarButtonItem;
@property(readonly, nonatomic) UIBarButtonItem *_flexibleSpaceBarButtonItem; // @synthesize _flexibleSpaceBarButtonItem=__flexibleSpaceBarButtonItem;
@property(retain, nonatomic, setter=_setPreviousResult:) NSArray *_previousResult; // @synthesize _previousResult=__previousResult;
@property(copy, nonatomic, setter=_setPreviousRequestedSet:) NSIndexSet *_previousRequestedSet; // @synthesize _previousRequestedSet=__previousRequestedSet;
@property(readonly, nonatomic) NSMutableDictionary *_barButtonItems; // @synthesize _barButtonItems=__barButtonItems;
@property(readonly, nonatomic) NSCache *_configurationsCache; // @synthesize _configurationsCache=__configurationsCache;
@property(readonly, nonatomic) unsigned long long _options; // @synthesize _options=__options;
@property(nonatomic) __weak id <PUBarButtonItemCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexSet *centeredItemIdentifiers; // @synthesize centeredItemIdentifiers=_centeredItemIdentifiers;
@property(retain, nonatomic) NSArray *identifiersOrder; // @synthesize identifiersOrder=_identifiersOrder;
- (void).cxx_destruct;
- (void)_centersButtonsIfNeeded:(id)arg1 identifiers:(id)arg2;
- (id)_arrangedBarButtonItems:(id)arg1 identifiers:(id)arg2;
- (id)_newEntryForIdentifiers:(id)arg1;
- (id)orderedBarButtonsItemsForIdentifiers:(id)arg1;
- (long long)identifierForCustomButton:(id)arg1;
- (long long)identifierForBarButtonItem:(id)arg1;
- (id)barButtonItemForIdentifier:(long long)arg1;
@property(readonly, nonatomic) NSDictionary *barButtonItems;
- (void)_resetSet;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)init;

@end

