//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleConnectClient/ACMessageProtocol-Protocol.h>

@class NSDictionary, NSError, NSNumber, NSString;

@interface ACAuthenticationResponse : NSObject <ACMessageProtocol>
{
    _Bool _bypassAccessAuthorization;
    _Bool _extensionMode;
    _Bool _suppressProgressIndicator;
    _Bool _retail;
    long long _authenticationMethod;
    NSDictionary *_responseInformation;
    NSError *_error;
    NSString *_userName;
    NSString *_serviceTicket;
    NSNumber *_personID;
}

+ (_Bool)supportsSecureCoding;
@property(retain) NSNumber *personID; // @synthesize personID=_personID;
@property(retain) NSString *serviceTicket; // @synthesize serviceTicket=_serviceTicket;
@property(retain) NSString *userName; // @synthesize userName=_userName;
@property(retain) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool retail; // @synthesize retail=_retail;
@property(retain) NSDictionary *responseInformation; // @synthesize responseInformation=_responseInformation;
@property(nonatomic) _Bool suppressProgressIndicator; // @synthesize suppressProgressIndicator=_suppressProgressIndicator;
@property(nonatomic) _Bool extensionMode; // @synthesize extensionMode=_extensionMode;
@property(nonatomic) long long authenticationMethod; // @synthesize authenticationMethod=_authenticationMethod;
@property(nonatomic) _Bool bypassAccessAuthorization; // @synthesize bypassAccessAuthorization=_bypassAccessAuthorization;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

