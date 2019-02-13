//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolbox/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CAXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_object;
}

+ (_Bool)supportsSecureCoding;
+ (id)object:(id)arg1;
@property(retain, nonatomic) NSObject<OS_xpc_object> *object; // @synthesize object=_object;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1;

@end

