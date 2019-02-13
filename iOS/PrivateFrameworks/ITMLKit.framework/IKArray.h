//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/NSCopying-Protocol.h>
#import <ITMLKit/NSFastEnumeration-Protocol.h>
#import <ITMLKit/NSMutableCopying-Protocol.h>

@class NSMutableArray;

@interface IKArray : NSObject <NSCopying, NSMutableCopying, NSFastEnumeration>
{
    id _obj0;
    id _obj1;
    NSMutableArray *_arrayStore;
}

+ (id)array;
@property(retain, nonatomic) NSMutableArray *arrayStore; // @synthesize arrayStore=_arrayStore;
@property(retain, nonatomic) id obj1; // @synthesize obj1=_obj1;
@property(retain, nonatomic) id obj0; // @synthesize obj0=_obj0;
- (void).cxx_destruct;
- (void)_setupWithNSArray:(id)arg1;
- (id)toNSArray;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)objectEnumerator;
- (id)lastObject;
- (id)firstObject;
- (long long)count;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)objectAtIndex:(long long)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNSArray:(id)arg1;

@end

