//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActivityAchievements/NSObject-Protocol.h>

@class ACHDataStore, NSArray, NSDictionary, NSString;

@protocol ACHDataStorePropertyProviding <NSObject>
@property(retain, nonatomic) NSDictionary *dataStoreProperties;
@property(readonly, nonatomic) NSArray *dataStorePropertyKeys;
@property(readonly, nonatomic) NSString *uniqueName;
- (void)dataStoreDidClearAllProperties:(ACHDataStore *)arg1 completion:(void (^)(_Bool))arg2;
@end

