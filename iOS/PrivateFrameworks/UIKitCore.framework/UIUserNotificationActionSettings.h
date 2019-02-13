//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSMutableCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_category;
    NSDictionary *_actionsByContext;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *actionsByContext; // @synthesize actionsByContext=_actionsByContext;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (unsigned long long)_maximumActionsForContext:(unsigned long long)arg1;
- (id)validatedSettings;
- (id)actionsForContext:(unsigned long long)arg1;
- (id)actions;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCategory:(id)arg1 actionsByContext:(id)arg2;

@end

