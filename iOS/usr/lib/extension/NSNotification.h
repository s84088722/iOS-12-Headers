//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface NSNotification : NSObject <NSCopying, NSCoding>
{
}

+ (id)notificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
+ (id)notificationWithName:(id)arg1 object:(id)arg2;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)init;
- (Class)classForCoder;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly, copy) NSDictionary *userInfo;
@property(readonly, retain) id object;
@property(readonly, copy) NSString *name;
- (id)replacementObjectForPortCoder:(id)arg1;

@end

