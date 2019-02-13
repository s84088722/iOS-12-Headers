//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>

@class EKEventStore, NSArray, NSString, NSURL;

@protocol SGSuggestionsServiceEventsProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceEventsObserverProtocol>
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)suggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)isEventCandidateForURL:(NSURL *)arg1 andTitle:(NSString *)arg2 withCompletion:(void (^)(_Bool))arg3;
- (void)eventsForSchemas:(NSArray *)arg1 usingStore:(EKEventStore *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)keysForSchemas:(NSArray *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (void)eventFromUniqueId:(NSString *)arg1 withCompletion:(void (^)(SGEvent *, NSError *))arg2;
@end

