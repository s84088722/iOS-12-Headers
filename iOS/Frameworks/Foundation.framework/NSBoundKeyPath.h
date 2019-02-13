//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface NSBoundKeyPath : NSObject
{
    id _rootObject;
    NSString *_keyPath;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)keyPathWithRootObject:(id)arg1 path:(const char *)arg2;
+ (id)newKeyPathWithRootObject:(id)arg1 keyPathString:(id)arg2;
- (void).cxx_destruct;
- (id)mutableSetValue;
- (id)mutableOrderedSetValue;
- (id)mutableArrayValue;
- (void)setValue:(id)arg1;
- (id)value;
- (_Bool)validateValue:(inout id *)arg1 error:(out id *)arg2;
@property id rootObject;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
@property(readonly) NSString *keyPath;

@end

