//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSMutableDictionary, NSString;

@interface ICUserNotificationBuilder : NSObject <NSCopying>
{
    NSMutableDictionary *_userNotificationDictionary;
    long long _alertLevel;
    double _timeoutInterval;
}

@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) long long alertLevel; // @synthesize alertLevel=_alertLevel;
- (void).cxx_destruct;
- (void)_setBoolValue:(_Bool)arg1 forKey:(struct __CFString *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *otherButtonTitle;
@property(copy, nonatomic) NSString *message;
@property(nonatomic) _Bool forcesModalAppearance;
@property(nonatomic) _Bool displaysAsTopMost;
@property(nonatomic) _Bool displaysActionButtonOnLockScreen;
@property(copy, nonatomic) NSString *defaultButtonTitle;
@property(copy, nonatomic) NSString *alternateButtonTitle;
@property(nonatomic) _Bool allowInCar;
- (struct __CFUserNotification *)createCFUserNotification;
- (id)initWithStoreDialog:(id)arg1;
- (id)init;

@end

