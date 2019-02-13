//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUILikenessRenderingScope : NSObject
{
    _Bool _rightToLeft;
    double _scale;
    unsigned long long _style;
    struct CGSize _pointSize;
}

+ (id)renderingScopeWithPointSize:(struct CGSize)arg1 scale:(double)arg2 rightToLeft:(_Bool)arg3 style:(unsigned long long)arg4;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property(readonly, nonatomic) _Bool rightToLeft; // @synthesize rightToLeft=_rightToLeft;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize pointSize; // @synthesize pointSize=_pointSize;
- (id)description;
- (id)initWithPointSize:(struct CGSize)arg1 scale:(double)arg2 rightToLeft:(_Bool)arg3 style:(unsigned long long)arg4;

@end

