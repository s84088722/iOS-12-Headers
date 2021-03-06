/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 2, 2019 at 4:59:33 AM Central European Standard Time
* Operating System: Version 12.1.2 (Build 16C104)
* Image Source: /System/Library/PrivateFrameworks/BookDataStore.framework/BookDataStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCCloudSyncVersions.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSPersistentHistoryToken, NSData;

@interface BCMutableCloudSyncVersions : NSObject <BCCloudSyncVersions, NSSecureCoding> {

	NSString* _dataType;
	long long _cloudVersion;
	long long _localVersion;
	long long _syncVersion;
	NSPersistentHistoryToken* _historyToken;
	long long _historyTokenOffset;
	NSData* _rawHistoryToken;

}

@property (nonatomic,copy) NSString * dataType;                                  //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,copy) NSData * rawHistoryToken;                             //@synthesize rawHistoryToken=_rawHistoryToken - In the implementation block
@property (nonatomic,copy) NSPersistentHistoryToken * historyToken;              //@synthesize historyToken=_historyToken - In the implementation block
@property (assign,nonatomic) long long historyTokenOffset;                       //@synthesize historyTokenOffset=_historyTokenOffset - In the implementation block
@property (assign,nonatomic) long long cloudVersion;                             //@synthesize cloudVersion=_cloudVersion - In the implementation block
@property (assign,nonatomic) long long localVersion;                             //@synthesize localVersion=_localVersion - In the implementation block
@property (assign,nonatomic) long long syncVersion;                              //@synthesize syncVersion=_syncVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSPersistentHistoryToken *)historyToken;
-(void)setHistoryToken:(NSPersistentHistoryToken *)arg1 ;
-(void)setLocalVersion:(long long)arg1 ;
-(void)setDataType:(NSString *)arg1 ;
-(NSString *)dataType;
-(id)initWithCloudSyncVersions:(id)arg1 ;
-(void)setRawHistoryToken:(NSData *)arg1 ;
-(NSData *)rawHistoryToken;
-(long long)historyTokenOffset;
-(long long)cloudVersion;
-(long long)localVersion;
-(long long)syncVersion;
-(void)setCloudVersion:(long long)arg1 ;
-(void)setSyncVersion:(long long)arg1 ;
-(void)setHistoryTokenOffset:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

