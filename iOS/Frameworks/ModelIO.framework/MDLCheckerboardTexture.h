//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ModelIO/MDLTexture.h>

@interface MDLCheckerboardTexture : MDLTexture
{
    int _divisions;
    struct CGColor *_color1;
    struct CGColor *_color2;
}

- (id)initWithDivisions:(float)arg1 name:(id)arg2 dimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(struct CGColor *)arg5 color1:(struct CGColor *)arg6 color2: /* Error: Ran out of types for this method. */;
- (id)generateDataAtLevel:(long long)arg1;
@property(nonatomic) struct CGColor *color2;
@property(nonatomic) struct CGColor *color1;
@property(nonatomic) float divisions;
- (void)dealloc;

@end

