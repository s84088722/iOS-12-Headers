//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class TSDStroke;

__attribute__((visibility("hidden")))
@interface TSCHSymbolPathCacheKey : NSObject <NSCopying>
{
    int mSymbolType;
    double mSize;
    TSDStroke *mStroke;
    _Bool mForHitCheck;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithSymbolType:(int)arg1 symbolSize:(double)arg2 stroke:(id)arg3 forHitCheck:(_Bool)arg4;

@end

