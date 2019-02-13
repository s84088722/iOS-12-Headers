//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase
{
    NSString *_statusCode;
    NSArray *_statusErrorChain;
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 withErrorChain:(id)arg2;
+ (id)allowedStatusKeys;
@property(copy, nonatomic) NSArray *statusErrorChain; // @synthesize statusErrorChain=_statusErrorChain;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayload;
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;

@end

