//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class NSMutableArray, NSString;

@interface ADCapData : ADSingleton
{
    NSString *_toroID;
    NSMutableArray *_frequencyCapData;
    NSMutableArray *_clickCountData;
    NSMutableArray *_downloadData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *downloadData; // @synthesize downloadData=_downloadData;
@property(retain, nonatomic) NSMutableArray *clickCountData; // @synthesize clickCountData=_clickCountData;
@property(retain, nonatomic) NSMutableArray *frequencyCapData; // @synthesize frequencyCapData=_frequencyCapData;
@property(retain, nonatomic) NSString *toroID; // @synthesize toroID=_toroID;
- (void).cxx_destruct;
- (void)eraseCapData;
- (id)downloadObjectForAdamID:(id)arg1;
- (id)clickCapObjectForAdamID:(id)arg1;
- (id)capDataJSON:(id)arg1;
- (id)filteredCapData:(id)arg1 maxItems:(unsigned long long)arg2 expirationThresholdInSeconds:(double)arg3;
- (void)updateCapDataWith:(id)arg1 ofKind:(long long)arg2;
- (void)addCapDataObject:(id)arg1 ofKind:(long long)arg2;
- (void)checkAndUpdateToroID;
- (id)dictionaryRepresentation;
- (void)saveCapDataWithReason:(id)arg1;
- (void)restoreAllCapData;
- (void)resetCapDataObject;
- (id)restoreCapDataArrayFromPlist:(id)arg1;
- (id)init;

@end

