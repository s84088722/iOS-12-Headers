//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BusinessChat/BCDictionaryImageSerializable-Protocol.h>

@class BCError, NSArray, NSDictionary, NSString;

@interface BCAuthenticationResponse : NSObject <BCDictionaryImageSerializable>
{
    NSString *_status;
    NSString *_token;
    NSArray *_errors;
}

@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) NSString *status; // @synthesize status=_status;
- (void).cxx_destruct;
@property(readonly, nonatomic) BCError *error;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2;
- (id)initWithToken:(id)arg1 error:(id)arg2;

@end

