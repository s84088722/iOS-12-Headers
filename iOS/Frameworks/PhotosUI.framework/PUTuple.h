//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface PUTuple : NSObject
{
    unsigned long long _hash;
    NSArray *_objects;
}

@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithObjects:(id)arg1;
- (id)init;

@end

