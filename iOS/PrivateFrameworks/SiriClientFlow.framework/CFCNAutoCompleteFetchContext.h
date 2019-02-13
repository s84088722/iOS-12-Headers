//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SiriClientFlow/SAAceSerializable-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface CFCNAutoCompleteFetchContext : AceObject <SAAceSerializable>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteFetchContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)autoCompleteFetchContext;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *sendingAddressAccountIdentifier;
@property(copy, nonatomic) NSString *sendingAddress;
@property(copy, nonatomic) NSNumber *predictsBasedOnOutgoingInteraction;
@property(copy, nonatomic) NSArray *otherAddressesAlreadyChosen;
@property(copy, nonatomic) NSString *locationUUID;
@property(copy, nonatomic) NSString *domainIdentifier;
@property(copy, nonatomic) NSDate *date;
@property(copy, nonatomic) NSArray *bundleIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

