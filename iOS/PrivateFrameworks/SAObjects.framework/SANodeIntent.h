//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString;
@protocol SAAceSerializable;

@interface SANodeIntent : AceObject <SAAceSerializable>
{
}

+ (id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nodeIntent;
@property(retain, nonatomic) id <SAAceSerializable> value;
@property(copy, nonatomic) NSArray *privacyPolicy;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSArray *matchingSpans;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

