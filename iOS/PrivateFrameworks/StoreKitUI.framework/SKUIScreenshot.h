//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/SKUICacheCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SKUIScreenshot : NSObject <NSCopying, SKUICacheCoding>
{
    NSString *_orientation;
    long long _uniqueIdentifier;
    NSMutableDictionary *_urls;
    NSMutableDictionary *_sizes;
    NSString *_urlTemplate;
}

@property(readonly, nonatomic) long long uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSString *orientationString; // @synthesize orientationString=_orientation;
- (void).cxx_destruct;
- (id)_firstVariant;
- (void)_addURLsFromDictionary:(id)arg1 withRemoteLocalKeysMap:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *cacheRepresentation;
- (id)initWithCacheRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)URLForVariant:(id)arg1;
- (struct CGSize)sizeForVariant:(id)arg1;
- (void)setArtwork:(id)arg1 forVariant:(id)arg2;
@property(readonly, nonatomic) long long numberOfVariants;
- (id)initWithScreenshotDictionary:(id)arg1;
- (id)init;
- (id)_initSKUIScreenshot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

