//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPAbstractMutableLargeArray.h>

__attribute__((visibility("hidden")))
@interface TSPMutableLargeUUIDArray : TSPAbstractMutableLargeArray
{
}

+ (Class)arraySegmentClass;
- (void)loadFromMessage:(const struct LargeUUIDArray *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeUUIDArray *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)replaceUUIDAtIndex:(unsigned long long)arg1 withUUID:(UUIDData_5fbc143e)arg2;
- (void)addUUID:(UUIDData_5fbc143e)arg1;
- (void)insertUUID:(UUIDData_5fbc143e)arg1 atIndex:(unsigned long long)arg2;
- (UUIDData_5fbc143e)UUIDAtIndex:(unsigned long long)arg1;

@end

