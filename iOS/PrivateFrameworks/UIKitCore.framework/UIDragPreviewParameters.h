//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIBezierPath, UIColor;

@interface UIDragPreviewParameters : NSObject <NSCopying>
{
    _Bool _textMode;
    UIBezierPath *_visiblePath;
    UIColor *_backgroundColor;
}

@property(readonly, nonatomic, getter=_textMode) _Bool textMode; // @synthesize textMode=_textMode;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIBezierPath *visiblePath; // @synthesize visiblePath=_visiblePath;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithTextMode:(_Bool)arg1 visiblePath:(id)arg2 backgroundColor:(id)arg3;
- (id)initWithTextLineRects:(id)arg1;
- (id)init;

@end

