//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSError, NSString, NSURL;

@interface MediaSocialPostResponse : NSObject <NSCopying>
{
    NSString *_activityIdentifier;
    NSURL *_activityURL;
    NSError *_error;
    double _pollDuration;
    double _pollingInterval;
    long long _postIdentifier;
    long long _result;
    NSString *_status;
    long long statusCode;
    long long _statusCode;
    NSString *_serviceErrorLabel;
    NSString *_serviceErrorMessage;
}

+ (id)_unrecoverableErrors;
@property(copy, nonatomic) NSString *serviceErrorMessage; // @synthesize serviceErrorMessage=_serviceErrorMessage;
@property(copy, nonatomic) NSString *serviceErrorLabel; // @synthesize serviceErrorLabel=_serviceErrorLabel;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) long long postIdentifier; // @synthesize postIdentifier=_postIdentifier;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) double pollDuration; // @synthesize pollDuration=_pollDuration;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSURL *activityURL; // @synthesize activityURL=_activityURL;
@property(copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
- (void).cxx_destruct;
- (_Bool)_isUnrecoverable:(id)arg1 statusCode:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setValuesWithResponseDictionary:(id)arg1;

@end

