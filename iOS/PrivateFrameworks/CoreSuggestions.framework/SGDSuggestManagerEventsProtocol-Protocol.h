//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class NSArray, NSString, NSURL;

@protocol SGDSuggestManagerEventsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol>
- (void)suggestionsFromURL:(NSURL *)arg1 title:(NSString *)arg2 HTMLPayload:(NSString *)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)isEventCandidateForURL:(NSURL *)arg1 title:(NSString *)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)schemaOrgToEvents:(NSArray *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)eventFromUniqueId:(NSString *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
@end

