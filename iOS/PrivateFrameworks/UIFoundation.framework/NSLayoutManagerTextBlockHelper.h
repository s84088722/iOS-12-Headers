//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTextBlock;

@interface NSLayoutManagerTextBlockHelper : NSObject
{
    NSTextBlock *_block;
    struct CGRect _layoutRect;
    struct CGRect _boundsRect;
}

- (void)dealloc;
- (id)initWithTextBlock:(id)arg1 layoutRect:(struct CGRect)arg2 boundsRect:(struct CGRect)arg3;

@end

