//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsServer/NSCoding-Protocol.h>
#import <UserNotificationsServer/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface UNSRemoteNotificationClient : NSObject <NSCoding, NSSecureCoding>
{
    NSString *_tokenIdentifier;
    NSString *_environment;
    NSData *_lastKnownDeviceToken;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(copy, nonatomic) NSData *lastKnownDeviceToken; // @synthesize lastKnownDeviceToken=_lastKnownDeviceToken;
@property(copy, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) NSString *tokenIdentifier; // @synthesize tokenIdentifier=_tokenIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
