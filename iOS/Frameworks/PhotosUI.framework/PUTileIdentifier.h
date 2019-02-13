//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSCopying-Protocol.h>

@class NSIndexPath, NSString;

@interface PUTileIdentifier : NSObject <NSCopying>
{
    unsigned long long _hash;
    NSIndexPath *_indexPath;
    NSString *_tileKind;
    NSString *_dataSourceIdentifier;
}

@property(readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property(readonly, nonatomic) NSString *tileKind; // @synthesize tileKind=_tileKind;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIndexPath:(id)arg1 tileKind:(id)arg2 dataSourceIdentifier:(id)arg3;

@end

