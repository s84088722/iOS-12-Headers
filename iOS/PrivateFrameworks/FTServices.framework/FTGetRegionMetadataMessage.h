//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSBaseMessage.h>

#import <FTServices/NSCopying-Protocol.h>

@class NSDictionary, NSString;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>
{
    NSString *_language;
    NSDictionary *_responseRegionInformation;
}

@property(copy) NSDictionary *responseRegionInformation; // @synthesize responseRegionInformation=_responseRegionInformation;
@property(copy) NSString *language; // @synthesize language=_language;
- (void).cxx_destruct;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (_Bool)wantsHTTPGet;
- (long long)responseCommand;
- (long long)command;
- (_Bool)wantsBinaryPush;
- (_Bool)wantsCompressedBody;
- (_Bool)wantsHTTPHeaders;
- (_Bool)wantsBagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

