//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryUtilities : NSObject
{
}

+ (id)_sortIndexesForObjects:(id)arg1 titleForObjectBlock:(CDUnknownBlockType)arg2;
+ (id)changeSetMapFromFetchControllerResult:(id)arg1 andRequests:(id)arg2;
+ (id)mediaEntitiesMapFromFetchControllerResult:(id)arg1 andRequests:(id)arg2;
+ (CDUnknownBlockType)mediaItemEntityTypesSortComparator;
+ (id)sortIndexesForMediaEntities:(id)arg1 sortIndexPropertyKey:(id)arg2;
+ (id)sortIndexesForGrouping:(id)arg1;
+ (id)groupingForMediaEntities:(id)arg1 groupingKeyPath:(id)arg2 groupingSortComparator:(CDUnknownBlockType)arg3 performDefaultSort:(_Bool)arg4 sortIndexPropertyKey:(id)arg5;

@end

