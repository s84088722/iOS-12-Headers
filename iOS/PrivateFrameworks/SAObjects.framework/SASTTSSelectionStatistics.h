//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSArray, NSString;

@interface SASTTSSelectionStatistics : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)tTSSelectionStatisticsWithDictionary:(id)arg1 context:(id)arg2;
+ (id)tTSSelectionStatistics;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSArray *timesListened;
@property(copy, nonatomic) NSString *sessionId;
@property(nonatomic) long long selectedItemIndex;
@property(copy, nonatomic) NSArray *listenedItems;
@property(copy, nonatomic) NSString *interactionId;
@property(copy, nonatomic) NSString *completionType;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end
