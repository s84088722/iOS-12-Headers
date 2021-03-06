//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPFeedbackUUID-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPStartLocalSearchFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPStartLocalSearchFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPStartLocalSearchFeedback, NSSecureCoding>
{
    int _triggerEvent;
    int _indexType;
    unsigned long long _timestamp;
    NSString *_input;
    NSString *_uuid;
    unsigned long long _queryId;
}

@property(nonatomic) int indexType; // @synthesize indexType=_indexType;
@property(nonatomic) unsigned long long queryId; // @synthesize queryId=_queryId;
@property(nonatomic) int triggerEvent; // @synthesize triggerEvent=_triggerEvent;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *input; // @synthesize input=_input;
@property(nonatomic) unsigned long long timestamp;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)init;
- (id)initWithFacade:(id)arg1;
@property(readonly, nonatomic) _Bool requiresQueryId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id feedbackJSON;
@property(readonly) Class superclass;

@end

