//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DocumentManagerUICore/NSCopying-Protocol.h>

@protocol NSCopying;

@interface DOCThumbnailKey : NSObject <NSCopying>
{
    _Bool _isInteractive;
    NSObject<NSCopying> *_primaryKey;
    double _minimumSize;
    double _scale;
    unsigned long long _style;
    struct CGSize _size;
}

@property(readonly, nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) double minimumSize; // @synthesize minimumSize=_minimumSize;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSObject<NSCopying> *primaryKey; // @synthesize primaryKey=_primaryKey;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithPrimaryKey:(id)arg1 size:(struct CGSize)arg2 minimumSize:(double)arg3 scale:(double)arg4 style:(unsigned long long)arg5 isInteractive:(_Bool)arg6;

@end

