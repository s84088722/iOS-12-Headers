//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainerID, NSError, NSString;

@interface CKAutoBugCaptureMetadata : NSObject
{
    NSString *_procName;
    CKContainerID *_containerID;
    NSError *_errorPayload;
    long long _reason;
}

@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSError *errorPayload; // @synthesize errorPayload=_errorPayload;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) NSString *procName; // @synthesize procName=_procName;
- (void).cxx_destruct;

@end

