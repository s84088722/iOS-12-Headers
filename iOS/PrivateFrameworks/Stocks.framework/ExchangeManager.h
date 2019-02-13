//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ExchangeManager : NSObject
{
    NSMutableDictionary *_exchangesByName;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)saveChanges;
- (void)reloadExchangesFromDefaults;
- (void)_loadExchangesFromDefaults;
- (void)removeExchange:(id)arg1;
- (void)_addExchange:(id)arg1;
- (void)addExchange:(id)arg1;
- (_Bool)containsExchange:(id)arg1;
- (id)exchangeWithName:(id)arg1 createIfNotFound:(_Bool)arg2;
- (id)exchangeWithName:(id)arg1;
- (id)exchangeList;
- (id)init;

@end

