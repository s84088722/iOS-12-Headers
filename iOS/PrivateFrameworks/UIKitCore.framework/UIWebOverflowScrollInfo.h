//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollInfo : NSObject
{
    _Bool _isUserScroll;
    DOMNode *_node;
    struct CGPoint _offset;
}

@property(nonatomic) _Bool isUserScroll; // @synthesize isUserScroll=_isUserScroll;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (_Bool)coalesceScrollForNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(_Bool)arg3;
- (void)dealloc;
- (id)initWithNode:(id)arg1 offset:(struct CGPoint)arg2 isUserScroll:(_Bool)arg3;

@end

