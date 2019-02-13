//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDataProvenanceCache, HDEntityEncoder, HDProfile, HDSQLiteDatabase, HDSyncSession, NSArray;

@interface _HDDataEntitySyncMessageBuilder : NSObject
{
    HDProfile *_profile;
    HDSQLiteDatabase *_database;
    Class _entityClass;
    HDDataProvenanceCache *_provenanceCache;
    HDEntityEncoder *_entityEncoder;
    CDUnknownBlockType _handler;
    long long _currentEncodedBytes;
    _Bool _hasSentObject;
    _Bool _didSendFinal;
    long long _maxEncodedBytesPerMessage;
    long long _lastSyncAnchor;
    HDSyncSession *_syncSession;
}

@property(readonly, nonatomic) HDSyncSession *syncSession; // @synthesize syncSession=_syncSession;
@property(readonly, nonatomic) long long lastSyncAnchor; // @synthesize lastSyncAnchor=_lastSyncAnchor;
@property(readonly, nonatomic) long long currentEncodedBytes; // @synthesize currentEncodedBytes=_currentEncodedBytes;
@property(readonly, nonatomic) long long maxEncodedBytesPerMessage; // @synthesize maxEncodedBytesPerMessage=_maxEncodedBytesPerMessage;
- (void).cxx_destruct;
- (_Bool)finishAndFlush:(_Bool)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSArray *orderedProperties;
- (_Bool)_sendCurrentCollectionWithAnchor:(long long)arg1 final:(_Bool)arg2 error:(id *)arg3;
- (long long)addEntity:(id)arg1 properties:(id)arg2 row:(struct HDSQLiteRow *)arg3 anchor:(long long)arg4 index:(unsigned long long)arg5 error:(id *)arg6;
- (id)_provenanceForID:(long long)arg1 error:(id *)arg2;
- (id)initWithProfile:(id)arg1 database:(id)arg2 entityClass:(Class)arg3 bytesPerMessage:(long long)arg4 syncSession:(id)arg5 handler:(CDUnknownBlockType)arg6;

@end

