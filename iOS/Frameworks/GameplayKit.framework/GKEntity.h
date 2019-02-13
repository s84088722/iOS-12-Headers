//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameplayKit/NSCopying-Protocol.h>
#import <GameplayKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary;

@interface GKEntity : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableDictionary *_components;
}

+ (_Bool)supportsSecureCoding;
+ (id)entity;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (id)componentForClass:(Class)arg1;
- (void)removeComponentForClass:(Class)arg1;
- (void)addComponent:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *components;
- (void)updateWithDeltaTime:(double)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)componentForKey:(id)arg1;
- (void)removeComponent:(id)arg1;

@end

