//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface DDRange : NSObject
{
    DOMNode *_node;
    long long _startOffset;
    long long _endOffset;
}

+ (id)rangeWithDOMRange:(id)arg1;
@property(nonatomic) long long endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) long long startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) DOMNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithDOMRange:(id)arg1;

@end

