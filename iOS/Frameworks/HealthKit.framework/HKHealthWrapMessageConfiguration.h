//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface HKHealthWrapMessageConfiguration : NSObject
{
    _Bool _disableCompression;
    NSUUID *_subjectUUID;
    NSUUID *_studyUUID;
    NSString *_channel;
    NSString *_payloadType;
    struct __SecCertificate *_certificate;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_payloadIdentifier;
    NSData *_applicationData;
    NSDictionary *_keyValuePairs;
}

@property(nonatomic) _Bool disableCompression; // @synthesize disableCompression=_disableCompression;
@property(retain, nonatomic) NSDictionary *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(retain, nonatomic) NSData *applicationData; // @synthesize applicationData=_applicationData;
@property(copy, nonatomic) NSString *payloadIdentifier; // @synthesize payloadIdentifier=_payloadIdentifier;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) struct __SecCertificate *certificate; // @synthesize certificate=_certificate;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
@property(readonly, copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(readonly, copy, nonatomic) NSUUID *studyUUID; // @synthesize studyUUID=_studyUUID;
@property(readonly, copy, nonatomic) NSUUID *subjectUUID; // @synthesize subjectUUID=_subjectUUID;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSubjectUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 certificate:(struct __SecCertificate *)arg5;
- (id)initWithChannel:(id)arg1 payloadType:(id)arg2 certificate:(struct __SecCertificate *)arg3;

@end

