//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKDTokenDeletionURLRequest : CKDURLRequest
{
    NSData *_apsToken;
    NSString *_apsEnvironmentString;
    NSString *_bundleID;
}

@property(retain, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(retain, nonatomic) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
@property(retain, nonatomic) NSData *apsToken; // @synthesize apsToken=_apsToken;
- (void).cxx_destruct;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (_Bool)requiresTokenRegistration;
- (id)requestOperationClasses;
- (int)operationType;
- (id)initWithApsToken:(id)arg1 apsEnvironmentString:(id)arg2 bundleID:(id)arg3;

@end

