//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager
{
    NSString *_powerAssertionGroupIdentifier;
}

@property(retain, nonatomic) NSString *powerAssertionGroupIdentifier; // @synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)requestPolicyUpdate;
- (void)policyFailedToUpdate;
- (void)policyKeyChanged:(id)arg1;
- (void)dealloc;

@end

