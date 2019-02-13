//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable>
{
}

+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandSupport;
@property(nonatomic) long long weight;
@property(copy, nonatomic) NSArray *supportedConstraints;
@property(copy, nonatomic) NSURL *serverEndpoint;
@property(retain, nonatomic) SAObjectSupport *resultSupport;
@property(copy, nonatomic) NSString *commandId;
@property(copy, nonatomic) NSString *aceVersion;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

