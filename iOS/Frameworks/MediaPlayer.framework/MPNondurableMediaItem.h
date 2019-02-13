//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPMediaItem.h>

@interface MPNondurableMediaItem : MPMediaItem
{
    unsigned long long _persistentID;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultPropertyValues;
+ (_Bool)canFilterByProperty:(id)arg1;
- (id)mediaLibrary;
- (_Bool)isUsableAsRepresentativeItem;
- (void)enumerateValuesForProperties:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (id)valuesForProperties:(id)arg1;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)incrementPlayCountForStopTime:(double)arg1;
- (void)incrementPlayCountForPlayingToEnd;
- (void)incrementSkipCount;
- (void)incrementPlayCount;
- (void)noteWasPlayedToTime:(double)arg1 skipped:(_Bool)arg2;
- (void)markNominalAmountHasBeenPlayed;
- (double)nominalHasBeenPlayedThreshold;
- (_Bool)didSkipWithPlayedToTime:(double)arg1;
- (_Bool)existsInLibrary;
- (unsigned long long)persistentID;
- (id)initWithPersistentID:(unsigned long long)arg1;

@end

