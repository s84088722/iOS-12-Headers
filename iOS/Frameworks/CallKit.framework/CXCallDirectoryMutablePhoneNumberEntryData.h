//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallDirectoryPhoneNumberEntryData.h>

#import <CallKit/NSCopying-Protocol.h>

@class NSMutableData;

@interface CXCallDirectoryMutablePhoneNumberEntryData : CXCallDirectoryPhoneNumberEntryData <NSCopying>
{
    NSMutableData *_mutablePhoneNumberData;
}

@property(retain, nonatomic) NSMutableData *mutablePhoneNumberData; // @synthesize mutablePhoneNumberData=_mutablePhoneNumberData;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)appendPhoneNumber:(long long)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

