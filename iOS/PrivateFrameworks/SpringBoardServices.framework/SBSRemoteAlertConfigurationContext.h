//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSXPCCoding-Protocol.h>
#import <SpringBoardServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString;
@protocol OS_xpc_object;

@interface SBSRemoteAlertConfigurationContext : NSObject <BSXPCCoding, NSSecureCoding>
{
    NSDictionary *_userInfo;
    NSObject<OS_xpc_object> *_xpcEndpoint;
    NSSet *_actions;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcEndpoint; // @synthesize xpcEndpoint=_xpcEndpoint;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

