//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMNode;

__attribute__((visibility("hidden")))
@interface UIThreadSafeNode : NSObject
{
    DOMNode *_node;
}

+ (id)threadSafeNodeWithNode:(id)arg1;
- (void).cxx_destruct;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isKindOfClass:(Class)arg1;
- (id)description;
- (id)initWithNode:(id)arg1;
- (id)_realNode;

@end

