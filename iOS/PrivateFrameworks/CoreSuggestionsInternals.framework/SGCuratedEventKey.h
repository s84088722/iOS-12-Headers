//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGEntityKey-Protocol.h>

@class NSString;

@interface SGCuratedEventKey : NSObject <SGEntityKey>
{
    NSString *_externalId;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) NSString *externalId; // @synthesize externalId=_externalId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToCuratedEventKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithExternalId:(id)arg1;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

