//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotifications/NSCopying-Protocol.h>
#import <UserNotifications/NSSecureCoding-Protocol.h>

@class NSString, UNNotification;

@interface UNNotificationResponse : NSObject <NSCopying, NSSecureCoding>
{
    UNNotification *_notification;
    NSString *_actionIdentifier;
    unsigned long long _actionOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3;
+ (id)responseWithNotification:(id)arg1 actionIdentifier:(id)arg2;
@property(readonly, nonatomic) unsigned long long actionOptions; // @synthesize actionOptions=_actionOptions;
@property(readonly, copy, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(readonly, copy, nonatomic) UNNotification *notification; // @synthesize notification=_notification;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithNotification:(id)arg1 actionIdentifier:(id)arg2;
- (id)_initWithNotification:(id)arg1 actionIdentifier:(id)arg2 actionOptions:(unsigned long long)arg3;

@end

