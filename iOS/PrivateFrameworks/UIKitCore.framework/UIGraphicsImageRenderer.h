//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIGraphicsRenderer.h>

@interface UIGraphicsImageRenderer : UIGraphicsRenderer
{
}

+ (void)prepareCGContext:(struct CGContext *)arg1 withRendererContext:(id)arg2;
+ (struct CGContext *)contextWithFormat:(id)arg1;
+ (Class)rendererContextClass;
- (id)JPEGDataWithCompressionQuality:(double)arg1 actions:(CDUnknownBlockType)arg2;
- (id)PNGDataWithActions:(CDUnknownBlockType)arg1;
- (id)imageWithActions:(CDUnknownBlockType)arg1;
- (_Bool)allowsImageOutput;
- (id)initWithBounds:(struct CGRect)arg1 format:(id)arg2;
- (id)initWithBounds:(struct CGRect)arg1;
- (id)initWithSize:(struct CGSize)arg1 format:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (id)init;
- (void)pushContext:(id)arg1;

@end

