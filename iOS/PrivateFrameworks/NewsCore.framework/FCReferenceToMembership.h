//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FCReferenceToMembership : NSObject
{
    NSString *_identifier;
    NSString *_membershipID;
}

@property(readonly, nonatomic) NSString *membershipID; // @synthesize membershipID=_membershipID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 dictionaryRepresentation:(id)arg2;
- (id)initWithRecord:(id)arg1;
- (id)initWithIdentifier:(id)arg1;

@end

