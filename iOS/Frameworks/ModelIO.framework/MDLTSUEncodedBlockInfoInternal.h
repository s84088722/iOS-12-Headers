//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLTSUEncodedBlockInfo-Protocol.h>

@class NSString;

@interface MDLTSUEncodedBlockInfoInternal : NSObject <MDLTSUEncodedBlockInfo>
{
    unsigned long long _encodedLength;
}

@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long decodedLength;
- (id)initWithEncodedLength:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

