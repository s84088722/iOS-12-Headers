//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCServerZone.h>

@class BRCPrivateClientZone, BRCZonePurgeOperation, NSError;

@interface BRCPrivateServerZone : BRCServerZone
{
    BRCZonePurgeOperation *_deleteAllContentsOperation;
    NSError *_deleteAllContentsOperationLastError;
}

- (void).cxx_destruct;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (void)deleteAllContentsOnServerWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) NSError *deleteAllContentsOperationLastError;
@property(readonly, nonatomic) BRCZonePurgeOperation *deleteAllContentsOperation;
@property(readonly, nonatomic) BRCPrivateClientZone *clientZone;
- (id)asPrivateZone;
@property(readonly, nonatomic) _Bool isSharedZone;
@property(readonly, nonatomic) _Bool isPrivateZone;

@end

