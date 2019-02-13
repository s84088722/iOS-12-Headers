//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/CRRegister.h>

@class CRTimestamp;
@protocol CRDataType;

@interface CRRegisterLatest : CRRegister
{
    id <CRDataType> _contents;
    CRTimestamp *_timestamp;
}

@property(retain, nonatomic) CRTimestamp *timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)description;
- (void)walkGraph:(CDUnknownBlockType)arg1;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (void)setDocument:(id)arg1;
- (void)mergeWithRegisterLatest:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (_Bool)isEqualContents:(id)arg1;
- (void)_setContents:(id)arg1;
- (void)setContents:(id)arg1;
- (id)contents;
- (void)encodeIntoProtobufRegisterLatest:(struct RegisterLatest *)arg1 coder:(id)arg2;
- (id)initWithProtobufRegisterLatest:(const struct RegisterLatest *)arg1 decoder:(id)arg2;
- (id)initWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithContents:(id)arg1 timestamp:(id)arg2 document:(id)arg3;
- (id)initWithContents:(id)arg1 document:(id)arg2;

@end

