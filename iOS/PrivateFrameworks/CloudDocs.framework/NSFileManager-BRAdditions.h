//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileManager.h>

@interface NSFileManager (BRAdditions)
- (void)br_setFavoriteRank:(id)arg1 onItemAtURL:(id)arg2;
- (void)br_setLastOpenDate:(id)arg1 onItemAtURL:(id)arg2;
- (_Bool)br_putBackTrashedItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (_Bool)br_trashItemAtURL:(id)arg1 resultingURL:(id *)arg2 error:(id *)arg3;
- (id)br_putBackURLForTrashedItemAtURL:(id)arg1 error:(id *)arg2;
- (void)br_setPutBackInfoOnItemAtURL:(id)arg1;
- (_Bool)br_movePromisedItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
@end

