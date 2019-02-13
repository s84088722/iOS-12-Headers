//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSFetchedResultsSectionInfo-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface RadioTrackHistorySectionInfo : NSObject <NSCopying, NSFetchedResultsSectionInfo, NSMutableCopying>
{
    NSString *_indexTitle;
    NSString *_name;
    unsigned long long _numberOfObjects;
    NSArray *_objects;
}

@property(readonly, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(readonly, nonatomic) unsigned long long numberOfObjects; // @synthesize numberOfObjects=_numberOfObjects;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *indexTitle; // @synthesize indexTitle=_indexTitle;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

