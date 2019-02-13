//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface UITextInputPasswordRules : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_passwordRulesDescriptor;
}

+ (_Bool)supportsSecureCoding;
+ (id)passwordRulesWithDescriptor:(id)arg1;
@property(readonly, nonatomic) NSString *passwordRulesDescriptor; // @synthesize passwordRulesDescriptor=_passwordRulesDescriptor;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initPasswordRulesWithDescriptor:(id)arg1;

@end

