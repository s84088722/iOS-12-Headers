//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OKMediaClusterPredicate : NSObject
{
    NSString *_uniqueID;
    unsigned long long _category;
}

+ (id)nameForCategory:(unsigned long long)arg1;
@property(nonatomic) unsigned long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (float)efficiencyForItems:(id)arg1;
- (id)evaluateItems:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)title;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

