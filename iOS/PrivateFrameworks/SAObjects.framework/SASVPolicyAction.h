//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SASVPolicyActionNode;

@interface SASVPolicyAction : AceObject <SAAceSerializable>
{
}

+ (id)policyActionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)policyAction;
@property(retain, nonatomic) SASVPolicyActionNode *policyActionRoot;
@property(copy, nonatomic) NSString *name;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

