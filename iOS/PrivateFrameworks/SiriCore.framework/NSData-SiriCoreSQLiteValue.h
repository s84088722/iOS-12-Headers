//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

#import <SiriCore/SiriCoreSQLiteValue-Protocol.h>

@class NSString;

@interface NSData (SiriCoreSQLiteValue) <SiriCoreSQLiteValue>
- (const void *)siriCoreSQLiteValue_blobRepresentationWithLength:(unsigned long long *)arg1;
- (long long)siriCoreSQLiteValue_type;
- (id)siriCoreSQLiteValue_toData;
- (id)siriCoreSQLiteValue_toNumber;
- (id)siriCoreSQLiteValue_toString;
- (id)siriCoreSQLiteValue_escapedString:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

