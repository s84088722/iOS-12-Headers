//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface ExpiredDownloadRecoveryResponse : NSObject
{
    long long _downloadIdentifier;
    NSError *_error;
    long long _result;
    long long _downloadID;
}

@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long downloadID; // @synthesize downloadID=_downloadID;
- (void).cxx_destruct;

@end

