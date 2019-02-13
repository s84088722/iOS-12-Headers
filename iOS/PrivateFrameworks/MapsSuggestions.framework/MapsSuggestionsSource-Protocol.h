//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsObject-Protocol.h>

@class MapsSuggestionsEntry;
@protocol MapsSuggestionsSourceDelegate;

@protocol MapsSuggestionsSource <MapsSuggestionsObject>
+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
- (_Bool)removeEntry:(MapsSuggestionsEntry *)arg1 behavior:(long long)arg2 handler:(void (^)(void))arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)start;
- (id)init;
- (id)initWithDelegate:(id <MapsSuggestionsSourceDelegate>)arg1;
@end

