//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPNumberAttachment.h>

__attribute__((visibility("hidden")))
@interface TSWPPageCountAttachment : TSWPNumberAttachment
{
}

- (_Bool)shouldArchiveStringEquivalent;
- (_Bool)changesWithPageCount;
- (int)elementKind;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (void)saveToArchiver:(id)arg1;

@end

