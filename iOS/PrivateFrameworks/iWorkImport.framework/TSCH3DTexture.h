//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSCH3DResource, TSCH3DTextureResource;

__attribute__((visibility("hidden")))
@interface TSCH3DTexture : NSObject <NSCopying>
{
    TSCH3DTextureResource *mTextureResource;
}

- (void)didInitFromSOS;
- (id)optimizedMipmapBuffer;
- (id)representativeColorBuffer;
- (_Bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (void)resetResource;
@property(readonly, nonatomic) TSCH3DResource *resource; // @dynamic resource;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

