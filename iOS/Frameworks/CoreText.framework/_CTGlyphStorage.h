//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _CTGlyphStorage : NSObject
{
    long long _count;
    const unsigned short *_glyphs;
    const struct CGSize *_advances;
    const unsigned int *_props;
    const long long *_stringIndices;
}

- (void)disposeGlyphStack;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)sync;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setOrigin:(struct CGPoint)arg1 atIndex:(long long)arg2;
- (struct CGPoint)originAtIndex:(long long)arg1;
- (const struct CGPoint *)origins;
- (_Bool)implementsOrigins;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (void *)refCon;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithCount:(long long)arg1;

@end

