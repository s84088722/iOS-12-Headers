//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUICore/NSCopying-Protocol.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface VUICollisionSafeIdentifier : NSObject <NSCopying>
{
    NSObject<NSCopying> *_rootIdentifier;
    unsigned long long _collisionCount;
}

@property(nonatomic) unsigned long long collisionCount; // @synthesize collisionCount=_collisionCount;
@property(copy, nonatomic) NSObject<NSCopying> *rootIdentifier; // @synthesize rootIdentifier=_rootIdentifier;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRootIdentifier:(id)arg1 collisionCount:(unsigned long long)arg2;

@end

