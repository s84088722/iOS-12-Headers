//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MLDDatabaseOperation.h"

@interface MLDRemovePlaylistsOperation : MLDDatabaseOperation
{
}

- (_Bool)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)arg1;
- (_Bool)_removePlaylistsWithPersistentIDs:(id)arg1 fromSource:(int)arg2 usingTransaction:(id)arg3;
- (_Bool)_removeSource:(int)arg1 usingTransaction:(id)arg2;
- (_Bool)_verifyLibraryConnectionAndAttributesProperties:(id *)arg1;
- (_Bool)_execute:(id *)arg1;
- (unsigned long long)type;

@end

