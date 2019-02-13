//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer
{
    struct CATextLayerPrivate *_state;
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)needsDisplayForKey:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property _Bool allowsFontSubpixelQuantization;
@property(copy) NSString *alignmentMode;
@property(copy) NSString *truncationMode;
@property(getter=isWrapped) _Bool wrapped;
@property struct CGColor *foregroundColor;
@property const void *font;
@property double fontSize;
@property(copy) id string;
- (void)_prepareContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)_drawLine:(struct __CTLine *)arg1 inContext:(struct CGContext *)arg2 atPoint:(struct CGPoint)arg3;
- (void)_applyLinesToFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2 truncated:(_Bool *)arg3;
- (void)_applyLinesToFunction:(CDUnknownFunctionPointerType)arg1 info:(void *)arg2;
@property(readonly, getter=isTruncated) _Bool truncated;
- (struct CGSize)_preferredSize;
- (struct __CTLine *)_createTruncationToken;
- (struct __CTTypesetter *)_retainTypesetter;
- (id)_createStringDict;
- (void)didChangeValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)implicitAnimationForKeyPath:(id)arg1;
@property(copy) id truncationString;
- (_Bool)wrapped;

@end

