//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCERewriteTableUIDInfo : NSObject
{
    UUIDMap_b66c2694 _tableUIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)rollbackMappings:(id)arg1;
- (void)tableWasAdded:(const UUIDData_5fbc143e *)arg1;
- (id)extendMappingWithTableUIDs:(const UUIDMap_b66c2694 *)arg1 calcEngine:(id)arg2;
- (void)saveToMessage:(struct RewriteTableUIDInfoArchive *)arg1;
- (id)initFromMessage:(const struct RewriteTableUIDInfoArchive *)arg1;
- (id)description;
- (vector_4dc5f307)originalTableUIDs;
- (const UUIDMap_b66c2694 *)tableUIDMap;
- (id)initWithTableUIDMap:(const UUIDMap_b66c2694 *)arg1;

@end

