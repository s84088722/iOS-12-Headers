//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPAbstractMutableLargeArraySegment.h>

__attribute__((visibility("hidden")))
@interface TSPMutableLargeNumberArraySegment : TSPAbstractMutableLargeArraySegment
{
}

- (void)loadFromMessage:(const struct LargeNumberArraySegment *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToMessage:(struct LargeNumberArraySegment *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (unsigned long long)estimatedByteSizeOfElement:(id)arg1;

@end

